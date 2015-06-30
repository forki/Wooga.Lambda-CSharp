using System.IO;
using System.Net;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network.Transport
{
    /// <summary>   A web request transport. </summary>
    public static class WebRequestTransport
    {
        /// <summary>   Creates HTTP client. </summary>
        /// <returns>   The new HTTP client. </returns>
        public static HttpClient CreateHttpClient()
        {
            return new HttpClient((c, r) => r.RequestHttpResponse().RunSynchronously());
        }

        private static HttpWebRequest AsWebRequest(this HttpRequest httpRequest)
        {
            var webRequest = WebRequest.Create(httpRequest.Endpoint) as HttpWebRequest;
            webRequest.Headers = httpRequest.HttpHeaders.ToWebHeaders();
            webRequest.Method = httpRequest.HttpMethod.Name;
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
                    body.Count > 0 ? Maybe.Just(body) : Maybe.Nothing<ImmutableList<byte>>());
            };
        }

        private static Async<ImmutableList<byte>> ReadEntireStream(Stream stream)
        {
            return () => Encoding.UTF8.GetBytes(new StreamReader(stream).ReadToEnd()).ToImmutableList();
        }

        private static WebHeaderCollection ToWebHeaders(this ImmutableList<HttpHeader> self)
        {
            return self.Fold((headers, header) =>
            {
                headers.Add(header.Key, header.Value);
                return headers;
            },
                new WebHeaderCollection());
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