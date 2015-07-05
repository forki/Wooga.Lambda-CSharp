﻿using System;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{
    public struct HttpRequest
    {
        public readonly Maybe<ImmutableList<byte>> Body;
        public readonly Uri Endpoint;
        public readonly ImmutableList<HttpHeader> HttpHeaders;
        public readonly HttpMethod HttpMethod;
        public readonly int Timeout;

        public HttpRequest(Uri endpoint, HttpMethod httpMethod, 
            ImmutableList<HttpHeader> httpHeaders,
            Maybe<ImmutableList<byte>> body, 
            int timeout = 100000)
        {
            Endpoint = endpoint;
            HttpMethod = httpMethod;
            HttpHeaders = httpHeaders.Unique();
            Body = body;
            Timeout = timeout;
        }

        public static HttpRequest Basic(string url, HttpMethod httpMethod)
        {
            return new HttpRequest(new Uri(url), httpMethod, ImmutableList.Empty<HttpHeader>(),
                Maybe.Nothing<ImmutableList<byte>>());
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

        public static HttpRequest WithBody(this HttpRequest httpRequest, ImmutableList<byte> body)
        {
            return new HttpRequest(httpRequest.Endpoint, httpRequest.HttpMethod, httpRequest.HttpHeaders, CheckBody(body));
        }

        private static Maybe<ImmutableList<byte>> CheckBody(ImmutableList<byte> body)
        {
            return body == null || body.Count == 0 
                ? Maybe.Nothing<ImmutableList<byte>>() 
                : Maybe.Just(body);
        }
    }
}