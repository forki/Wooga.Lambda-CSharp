using System.IO;
using System.Net;
using System.Text;
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
            webRequest.Headers = httpRequest.HttpHeaders.ToWebHeaders();
            webRequest.Method = httpRequest.HttpMethod.Name;
            if (httpRequest.Body.IsJust())
            {
                using (var postStream = webRequest.GetRequestStream())
                {
                    var body = httpRequest.Body.FromJustOrDefault(new byte[0], _ => _);
                    postStream.Write(body, 0, body.Length);
                    postStream.Close();
                }
            }
            return webRequest;
        }

        private static Async<HttpResponse> RequestHttpResponse(this HttpRequest httpRequest)
        {
            return GetWebResponse(httpRequest).Bind(webResponse => webResponse.AsHttpResponse(httpRequest));
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
                    body.Length > 0 ? Maybe.Just(body) : Maybe.Nothing<byte[]>());
            };
        }

        private static Async<byte[]> ReadEntireStream(Stream stream)
        {
            return () => Encoding.UTF8.GetBytes(new StreamReader(stream).ReadToEnd());
        }

        private static WebHeaderCollection ToWebHeaders(this HttpHeaders self)
        {
            return self.Headers.Fold((headers, _, header) =>
            {
                headers.Add(header.Key, header.Value);
                return headers;
            },
                new WebHeaderCollection());
        }

        private static HttpWebRequest AppendToRequest(this HttpHeaders self, HttpWebRequest request)
        {
            foreach (var h in self.Headers.Values)
            {
                request.Headers.Add(h.Key, h.Value);
            }
            return request;
        }

        private static HttpHeaders OfWebHeaders(WebHeaderCollection webHeaders)
        {
            return new ImmutableList<string>(webHeaders.AllKeys).Fold((headers, key) => headers.Append(key, webHeaders.Get(key)), HttpHeaders.Create());
        }
    }
}