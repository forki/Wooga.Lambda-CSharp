using System.Collections.Immutable;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Headers = System.Collections.Immutable.ImmutableDictionary<string,Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;

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
            if (httpRequest.Body.IsJust())
            {
                using (var postStream = webRequest.GetRequestStream())
                {
                    var body = httpRequest.Body.ValueOr(new byte[0]).ToArray();
                    postStream.Write(body.ToArray(), 0, body.Count());
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
                    return webException.Response as HttpWebResponse;
                }
            };
        }

        private static Async<HttpResponse> AsHttpResponse(this HttpWebResponse response, HttpRequest httpRequest)
        {
            return () =>
            {
                var headers = OfWebHeaders(response.Headers);
                var body = ReadEntireStream(response.GetResponseStream()).RunSynchronously();
                return new HttpResponse(httpRequest, headers, response.StatusCode,
                    body.Any() ? Maybe.Just(body) : Maybe.Nothing<Body>());
            };
        }

        private static Async<Body> ReadEntireStream(Stream stream)
        {
            return () => Encoding.UTF8.GetBytes(new StreamReader(stream).ReadToEnd()).ToImmutableList();
        }

        private static HttpWebRequest AddHeaders(Headers self, HttpWebRequest request)
        {
            return self.Values.Aggregate(request,(headers, header) =>
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
            });
        }

        private static Headers OfWebHeaders(WebHeaderCollection webHeaders)
        {
            return webHeaders.AllKeys.Aggregate(Headers.Empty,(headers, key) => headers.Add(key,new HttpHeader(key, webHeaders.Get(key))));
        }
    }
}