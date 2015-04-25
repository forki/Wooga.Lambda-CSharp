using System;
using System.Net;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse
    {
        public Maybe<byte[]> Body { get; private set; }
        public HttpHeaders HttpHeaders { get; private set; }
        public HttpRequest HttpRequest { get; private set; }
        public HttpStatusCode StatusCode { get; private set; }

        public HttpResponse(HttpRequest httpRequest)
            : this(httpRequest, HttpHeaders.Create(), 0, Maybe.Nothing<byte[]>())
        {
        }

        public HttpResponse(HttpRequest httpRequest, HttpHeaders httpHeaders, HttpStatusCode statusCode, Maybe<byte[]> body) : this()
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
        }

        public HttpResponse With(HttpHeaders httpHeaders)
        {
            return new HttpResponse(HttpRequest, HttpHeaders.Concat(httpHeaders), StatusCode, Body);        
        }

        public HttpResponse With(HttpStatusCode statusCode)
        {
            return new HttpResponse(HttpRequest, HttpHeaders, statusCode, Body);
        }
    }
}