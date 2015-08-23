using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using Wooga.Lambda.Control.Monad;
using Headers = System.Collections.Immutable.ImmutableDictionary<string,Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;

namespace Wooga.Lambda.Network
{
    public struct HttpResponse : IStructuralEquatable, IEquatable<HttpResponse>
    {
        public static HttpResponse Create(HttpRequest httpRequest)
        {
            return Create(httpRequest, Headers.Empty, 0, Maybe.Nothing<Body>());    
        }

        public static HttpResponse Create(HttpRequest httpRequest, Headers httpHeaders, HttpStatusCode statusCode, Maybe<Body> body)
        {
            return new HttpResponse(httpRequest, httpHeaders, statusCode, body);    
        }

        public readonly Maybe<Body> Body;
        public readonly Headers HttpHeaders;
        public readonly HttpRequest HttpRequest;
        public readonly HttpStatusCode StatusCode;

        public HttpResponse(HttpRequest httpRequest, Headers httpHeaders, HttpStatusCode statusCode,Maybe<Body> body)
        {
            HttpRequest = httpRequest;
            HttpHeaders = httpHeaders;
            StatusCode = statusCode;
            Body = body;
        }

        public HttpResponse With(Headers httpHeaders)
        {
            return Create(HttpRequest, HttpHeaders.AddRange(httpHeaders), StatusCode, Body);
        }

        public HttpResponse With(HttpStatusCode statusCode)
        {
            return Create(HttpRequest, HttpHeaders, statusCode, Body);
        }

        public bool Equals(HttpResponse other)
        {
            return ((IStructuralEquatable)this).Equals(other, EqualityComparer<Object>.Default);
        }

        public override Boolean Equals(Object obj)
        {
            return ((IStructuralEquatable)this).Equals(obj, EqualityComparer<Object>.Default);
        }

        Boolean IStructuralEquatable.Equals(Object other, IEqualityComparer comparer)
        {
            if (other is HttpResponse)
            {
                var otherH = ((HttpResponse)other);
                return comparer.Equals(Body, otherH.Body)
                       && comparer.Equals(HttpRequest, otherH.HttpRequest)
                       && comparer.Equals(StatusCode, otherH.StatusCode)
                       && comparer.Equals(HttpHeaders, otherH.HttpHeaders);
            }
            return false;
        }

        public override int GetHashCode()
        {
            return ((IStructuralEquatable)this).GetHashCode(EqualityComparer<Object>.Default);
        }

        Int32 IStructuralEquatable.GetHashCode(IEqualityComparer comparer)
        {
            return comparer.GetHashCode(this);
        }
    }
}