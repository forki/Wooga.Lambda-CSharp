using System.Net;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Headers = System.Collections.Immutable.ImmutableList<Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse
    {
        public HttpResponse(HttpRequest httpRequest)
            : this(httpRequest, Headers.Empty, 0, Maybe.Nothing<Body>())
        {
        }

        public HttpResponse(HttpRequest httpRequest, Headers httpHeaders, HttpStatusCode statusCode,
            Maybe<Body> body) : this()
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
        }

        public Maybe<Body> Body { get; private set; }
        public Headers HttpHeaders { get; private set; }
        public HttpRequest HttpRequest { get; private set; }
        public HttpStatusCode StatusCode { get; private set; }

        public HttpResponse With(Headers httpHeaders)
        {
            return new HttpResponse(HttpRequest, HttpHeaders.AddRange(httpHeaders), StatusCode, Body);
        }

        public HttpResponse With(HttpStatusCode statusCode)
        {
            return new HttpResponse(HttpRequest, HttpHeaders, statusCode, Body);
        }
    }
}