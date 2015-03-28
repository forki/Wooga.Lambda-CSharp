using System;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    public struct HttpRequest
    {
        public readonly Maybe<byte[]> Body;
        public readonly Maybe<String> ContentType;
        public readonly Uri Endpoint;
        public readonly HttpHeaders HttpHeaders;
        public readonly HttpMethod HttpMethod;

        public HttpRequest(Uri endpoint, HttpMethod httpMethod, HttpHeaders httpHeaders, Maybe<byte[]> body,
            Maybe<String> contentType)
        {
            Endpoint = endpoint;
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
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod,
                httpRequest.HttpHeaders.Concat(httpHeaders),
                httpRequest.Body,
                httpRequest.ContentType);
        }

        public static HttpRequest WithBody(this HttpRequest httpRequest, byte[] body)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod, httpRequest.HttpHeaders,
                Maybe.Return(() => body),
                httpRequest.ContentType);
        }

        
    }
}