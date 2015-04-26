using System.Net;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse
    {
        public HttpResponse(HttpRequest httpRequest)
            : this(httpRequest, ImmutableList.Empty<HttpHeader>(), 0, Maybe.Nothing<ImmutableList<byte>>())
        {
        }

        public HttpResponse(HttpRequest httpRequest, ImmutableList<HttpHeader> httpHeaders, HttpStatusCode statusCode,
            Maybe<ImmutableList<byte>> body) : this()
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
        }

        public Maybe<ImmutableList<byte>> Body { get; private set; }
        public ImmutableList<HttpHeader> HttpHeaders { get; private set; }
        public HttpRequest HttpRequest { get; private set; }
        public HttpStatusCode StatusCode { get; private set; }

        public HttpResponse With(ImmutableList<HttpHeader> httpHeaders)
        {
            return new HttpResponse(HttpRequest, HttpHeaders.AddRange(httpHeaders), StatusCode, Body);
        }

        public HttpResponse With(HttpStatusCode statusCode)
        {
            return new HttpResponse(HttpRequest, HttpHeaders, statusCode, Body);
        }
    }
}