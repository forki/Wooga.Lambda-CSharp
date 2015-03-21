using System;
using System.Net;
using Wooga.Lambda.Data;
using Wooga.Lambda.System;

namespace Wooga.Lambda.Network
{
    public struct HttpRequest
    {
        public readonly Maybe<byte[]> Body;
        public readonly Maybe<String> ContentType;
        public readonly Uri Host;
        public readonly HttpHeaders HttpHeaders;
        public readonly HttpMethod HttpMethod;

        public HttpRequest(Uri host, HttpMethod httpMethod, HttpHeaders httpHeaders, Maybe<byte[]> body,
            Maybe<String> contentType)
        {
            Host = host;
            HttpMethod = httpMethod;
            HttpHeaders = httpHeaders;
            Body = body;
            ContentType = contentType;
        }

        public static HttpRequest Basic(String url, HttpMethod httpMethod)
        {
            return new HttpRequest(new Uri(url), httpMethod, HttpHeaders.Create(), Maybe.Nothing<byte[]>(),
                Maybe.Nothing<String>());
        }
    }

    public static class HttpRequestExt
    {
        public static HttpRequest WithHeaders(this HttpRequest httpRequest, HttpHeaders httpHeaders)
        {
            return new HttpRequest(httpRequest.Host, httpRequest.HttpMethod, httpRequest.HttpHeaders.Concat(httpHeaders),
                httpRequest.Body,
                httpRequest.ContentType);
        }

        public static HttpRequest WithBody(this HttpRequest httpRequest, byte[] body)
        {
            return new HttpRequest(httpRequest.Host, httpRequest.HttpMethod, httpRequest.HttpHeaders,
                Maybe.Return(() => body),
                httpRequest.ContentType);
        }

        public static HttpRequest BareRequest(Uri uri, HttpMethod httpMethod)
        {
            return new HttpRequest(uri, httpMethod, HttpHeaders.Create(), Maybe.Nothing<byte[]>(),
                Maybe.Nothing<String>());
        }

        public static HttpWebRequest AsWebRequest(this HttpRequest httpRequest)
        {
//            Logging.Console.Printfn("Making HttpRequest: " + HttpRequest);
            var webRequest = WebRequest.Create(httpRequest.Host) as HttpWebRequest;
            webRequest.Headers = httpRequest.HttpHeaders.ToWebHeaders();
            webRequest.Method = httpRequest.HttpMethod.Name;
            using (var postStream = webRequest.GetRequestStream())
            {
                var body = httpRequest.Body.FromJustOrDefault(new byte[0], _ => _);
                postStream.Write(body, 0, body.Length);
                postStream.Close();
            }
            return webRequest;
        }

        public static IO<HttpResponse> RequestHttpResponse(this HttpRequest httpRequest)
        {
            return GetWebResponse(httpRequest).Bind(webResponse => webResponse.AsHttpResponse(httpRequest));
        }

        private static IO<HttpWebResponse> GetWebResponse(HttpRequest httpRequest)
        {
            return
                IO.Return(() =>
                {
                    try
                    {
                        return httpRequest.AsWebRequest().GetResponse() as HttpWebResponse;
                    }
                    catch (WebException webException)
                    {
                        return webException.Response as HttpWebResponse;
                    }
                });
        }
    }
}