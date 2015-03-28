using System;
using System.Net;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse
    {
        public String Body { get; private set; }
        public String ContentType { get; private set; }
        public HttpHeaders HttpHeaders { get; private set; }
        public HttpRequest HttpRequest { get; private set; }
        public HttpStatusCode StatusCode { get; private set; }

        public HttpResponse(HttpRequest httpRequest)
            : this(httpRequest, HttpHeaders.Create(), 0, "", "")
        {
        }

        public HttpResponse(HttpRequest httpRequest, HttpHeaders httpHeaders, HttpStatusCode statusCode, String body,String contentType) : this()
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
            ContentType = contentType;
        }

        public HttpResponse With(HttpHeaders httpHeaders)
        {
            return new HttpResponse(HttpRequest, HttpHeaders.Concat(httpHeaders), StatusCode, Body, ContentType);        
        }

        public HttpResponse With(HttpStatusCode statusCode)
        {
            return new HttpResponse(HttpRequest, HttpHeaders, statusCode, Body, ContentType);
        }
    }
}