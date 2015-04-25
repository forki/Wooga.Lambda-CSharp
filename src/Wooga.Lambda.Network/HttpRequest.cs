using System;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    public struct HttpRequest
    {
        public readonly Maybe<byte[]> Body;
        public readonly Uri Endpoint;
        public readonly HttpHeaders HttpHeaders;
        public readonly HttpMethod HttpMethod;

        public HttpRequest(Uri endpoint, HttpMethod httpMethod, HttpHeaders httpHeaders, Maybe<byte[]> body)
        {
            Endpoint = endpoint;
            HttpMethod = httpMethod;
            HttpHeaders = httpHeaders;
            Body = body;
        }

        public static HttpRequest Basic(string url, HttpMethod httpMethod)
        {
            return new HttpRequest(new Uri(url), httpMethod, HttpHeaders.Create(), Maybe.Nothing<byte[]>());
        }
    }

    public static class HttpRequestExt
    {
        public static HttpRequest WithHeaders(this HttpRequest httpRequest, HttpHeaders httpHeaders)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod,
                httpRequest.HttpHeaders.Concat(httpHeaders),
                httpRequest.Body);
        }

        public static HttpRequest WithBody(this HttpRequest httpRequest, byte[] body)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod, httpRequest.HttpHeaders,
                Maybe.Return(() => body));
        }
    }
}