using System;
using System.IO;
using System.Net;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse
    {
        public readonly String Body;
        public readonly String ContentType;
        public readonly HttpHeaders HttpHeaders;
        public readonly HttpRequest HttpRequest;
        public readonly HttpStatusCode StatusCode;

        public HttpResponse(HttpRequest httpRequest, HttpHeaders httpHeaders, HttpStatusCode statusCode, String body,
            String contentType)
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
            ContentType = contentType;
        }
    }

    public static class HttpResponseExt
    {
        public static IO<HttpResponse> AsHttpResponse(this HttpWebResponse response, HttpRequest httpRequest)
        {
            var headers = HttpHeadersExt.OfWebHeaders(response.Headers);
            var body = ReadEntireStream(response.GetResponseStream());
            return
                () => new HttpResponse(httpRequest, headers, response.StatusCode, body.Invoke(), response.ContentType);
        }

        private static IO<String> ReadEntireStream(Stream stream)
        {
            return () => new StreamReader(stream).ReadToEnd();
        }
    }
}