using System.IO;
using System.Net;
using System.Text;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network.Transport
{
    public static class WebRequestTransport
    {
        public static HttpClient CreateHttpClient()
        {
            return new HttpClient((c, r) => r.RequestHttpResponse().RunSynchronously());
        }

        private static HttpWebRequest AsWebRequest(this HttpRequest httpRequest)
        {
            var webRequest = WebRequest.Create(httpRequest.Endpoint) as HttpWebRequest;
            webRequest = AddHeaders(httpRequest.HttpHeaders, webRequest);
            webRequest.Method = httpRequest.HttpMethod.Name;
            webRequest.Timeout = httpRequest.Timeout;
            if (httpRequest.Body.IsJust())
            {
                using (var postStream = webRequest.GetRequestStream())
                {
                    var body = httpRequest.Body.ValueOr(new ImmutableList<byte>());
                    postStream.Write(body.ToArray(), 0, body.Count);
                    postStream.Close(); 
                }
            }
            return webRequest;
        }

        private static Async<HttpResponse> RequestHttpResponse(this HttpRequest httpRequest)
        {
            return GetWebResponse(httpRequest).Bind<HttpWebResponse,HttpResponse>(webResponse => webResponse.AsHttpResponse(httpRequest));
        }

        private static Async<HttpWebResponse> GetWebResponse(HttpRequest httpRequest)
        {
            return () =>
            {
                try
                {
                    return httpRequest.AsWebRequest().GetResponse() as HttpWebResponse;
                }
                catch (WebException webException)
                {
                    if (webException.Response == null) throw webException;
                    return webException.Response as HttpWebResponse;
                }
            };
        }

        private static Async<HttpResponse> AsHttpResponse(this HttpWebResponse response, HttpRequest httpRequest)
        {
            return () =>
            {
                var headers = OfWebHeaders(response.Headers);
                var body = ReadEntireStream(response.GetResponseStream(), httpRequest.Timeout).RunSynchronously();
                return new HttpResponse(httpRequest, headers, response.StatusCode,
                    body.Count > 0 ? Maybe.Just(body) : Maybe.Nothing<ImmutableList<byte>>());
            };
        }

        private static Async<ImmutableList<byte>> ReadEntireStream(Stream stream,int timeout)
        {
            return () =>
            {
                var streamReader = new StreamReader(stream);
                streamReader.BaseStream.ReadTimeout = timeout;
                return Encoding.UTF8.GetBytes(streamReader.ReadToEnd()).ToImmutableList();
            };
        }

        private static HttpWebRequest AddHeaders(ImmutableList<HttpHeader> self, HttpWebRequest request)
        {
            return self.Fold((headers, header) =>
            {
                Pattern<Unit>
                .Match(header.Key)
                .Case("Content-Type", _ =>
                {
                    request.ContentType = header.Value;
                    return Unit.Default;
                })
                .Default(_ =>
                {
                    request.Headers.Add(header.Key,header.Value);
                    return Unit.Default;
                })
                .Run();
                return request;
            },request);
        }

        private static ImmutableList<HttpHeader> OfWebHeaders(WebHeaderCollection webHeaders)
        {
            return
                webHeaders.AllKeys.ToImmutableList()
                    .Fold((headers, key) => headers.Add(new HttpHeader(key, webHeaders.Get(key))),
                        ImmutableList.Empty<HttpHeader>());
        }
    }
}