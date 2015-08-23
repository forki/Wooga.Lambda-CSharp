using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using Wooga.Lambda.Control.Monad;
using Headers = System.Collections.Immutable.ImmutableList<Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;


namespace Wooga.Lambda.Network
{
    public struct HttpRequest
    {
        public readonly Maybe<Body> Body;
        public readonly Uri Endpoint;
        public readonly Headers HttpHeaders;
        public readonly HttpMethod HttpMethod;

        public HttpRequest(Uri endpoint, HttpMethod httpMethod, Headers httpHeaders,
            Maybe<Body> body)
        {
            Endpoint = endpoint;
            HttpMethod = httpMethod;
            HttpHeaders = httpHeaders.Distinct().ToImmutableList();
            Body = body;
        }

        public static HttpRequest Basic(string url, HttpMethod httpMethod)
        {
            return new HttpRequest(new Uri(url), httpMethod, Headers.Empty, Maybe.Nothing<Body>());
        }
    }

    public static class HttpRequestExt
    {
        public static HttpRequest WithHeaders(this HttpRequest httpRequest, ImmutableList<HttpHeader> httpHeaders)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod,
                httpRequest.HttpHeaders.AddRange(httpHeaders),
                httpRequest.Body);
        }

        public static HttpRequest WithBody(this HttpRequest httpRequest, IEnumerable<byte> body)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod, httpRequest.HttpHeaders, CheckBody(body));
        }

        private static Maybe<Body> CheckBody(Body body)
        {
            return body == null || !body.Any() 
                ? Maybe.Nothing<Body>() 
                : Maybe.Just(body);
        }
    }
}