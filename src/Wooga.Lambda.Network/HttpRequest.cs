using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Wooga.Lambda.Control.Monad;
using Headers = System.Collections.Immutable.ImmutableDictionary<string,Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;

namespace Wooga.Lambda.Network
{
    public struct HttpRequest : IStructuralEquatable, IEquatable<HttpRequest>
    {
        public static HttpRequest Create(string url, HttpMethod httpMethod)
        {
            return new HttpRequest(new Uri(url), httpMethod, Headers.Empty, Maybe.Nothing<Body>(), TimeSpan.MaxValue);
        }

        public static HttpRequest Create(string url, HttpMethod httpMethod, TimeSpan timeSpan)
        {
            return new HttpRequest(new Uri(url), httpMethod, Headers.Empty, Maybe.Nothing<Body>(), timeSpan);
        }

        public static HttpRequest Create(Uri endpoint, HttpMethod httpMethod)
        {
            return new HttpRequest(endpoint, httpMethod, Headers.Empty, Maybe.Nothing<Body>(), TimeSpan.MaxValue);
        }

        public static HttpRequest Create(Uri endpoint, HttpMethod httpMethod, TimeSpan timeSpan)
        {
            return new HttpRequest(endpoint, httpMethod, Headers.Empty, Maybe.Nothing<Body>(), timeSpan);
        }

        public static HttpRequest Create(string url, HttpMethod httpMethod, Headers httpHeaders, Maybe<Body> body)
        {
            return new HttpRequest(new Uri(url), httpMethod, httpHeaders, body, TimeSpan.MaxValue);
        }

        public static HttpRequest Create(string url, HttpMethod httpMethod, Headers httpHeaders, Maybe<Body> body, TimeSpan timeSpan)
        {
            return new HttpRequest(new Uri(url), httpMethod, httpHeaders, body, timeSpan);
        }

        public static HttpRequest Create(Uri endpoint, HttpMethod httpMethod, Headers httpHeaders, Maybe<Body> body)
        {
            return new HttpRequest(endpoint, httpMethod, httpHeaders, body, TimeSpan.MaxValue);
        }

        public static HttpRequest Create(Uri endpoint, HttpMethod httpMethod, Headers httpHeaders, Maybe<Body> body, TimeSpan timeSpan)
        {
            return new HttpRequest(endpoint, httpMethod, httpHeaders, body, timeSpan);
        }

        public readonly Maybe<Body> Body;
        public readonly Uri Endpoint;
        public readonly Headers HttpHeaders;
        public readonly HttpMethod HttpMethod;
        public readonly TimeSpan TimeOut;

        public HttpRequest(Uri endpoint, HttpMethod httpMethod, Headers httpHeaders, Maybe<Body> body, TimeSpan timeOut)
        {
            Endpoint = endpoint;
            HttpMethod = httpMethod;
            HttpHeaders = httpHeaders;
            Body = body;
            TimeOut = timeOut;
        }

        public HttpRequest With(Headers httpHeaders)
        {
            return Create(Endpoint, HttpMethod, HttpHeaders.AddRange(httpHeaders), Body);
        }

        public HttpRequest With(Body body)
        {
            return Create(Endpoint, HttpMethod, HttpHeaders, Validate(body));
        }

        private Maybe<Body> Validate(Body body)
        {
            return body == null || !body.Any() ? Maybe.Nothing<Body>() : Maybe.Just(body);
        }

        public bool Equals(HttpRequest other)
        {
            return ((IStructuralEquatable) this).Equals(other, EqualityComparer<Object>.Default);
        }

        public override Boolean Equals(Object obj)
        {
            return ((IStructuralEquatable)this).Equals(obj, EqualityComparer<Object>.Default);
        }

        Boolean IStructuralEquatable.Equals(Object other, IEqualityComparer comparer)
        {
            if (other is HttpRequest)
            {
                var otherH = ((HttpRequest) other);
                return comparer.Equals(Body, otherH.Body)
                       && comparer.Equals(Endpoint, otherH.Endpoint)
                       && comparer.Equals(HttpMethod, otherH.HttpMethod)
                       && comparer.Equals(HttpHeaders, otherH.HttpHeaders)
                       && comparer.Equals(TimeOut, otherH.TimeOut);
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
