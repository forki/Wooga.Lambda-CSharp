using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Net;
using System.Text;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network.Tests
{
    [TestFixture]
    public class HttpRequestTests
    {
        [TestFixture]
        public class Creation
        {
            [Test]
            public void StringAndMethod()
            {
                var req = HttpRequest.Create("http://google.com", HttpMethod.Get);
                Assert.AreEqual(new Uri("http://google.com"), req.Endpoint);
                Assert.AreEqual(HttpMethod.Get, req.HttpMethod);
                Assert.AreEqual(ImmutableDictionary<string,HttpHeader>.Empty, req.HttpHeaders);
                Assert.AreEqual(Maybe.Nothing<IEnumerable<byte>>(), req.Body);
            }

            [Test]
            public void UriAndMethod()
            {
                var req = HttpRequest.Create(new Uri("http://google.com"), HttpMethod.Get);
                Assert.AreEqual(new Uri("http://google.com"), req.Endpoint);
                Assert.AreEqual(HttpMethod.Get, req.HttpMethod);
                Assert.AreEqual(ImmutableDictionary<string, HttpHeader>.Empty, req.HttpHeaders);
                Assert.AreEqual(Maybe.Nothing<IEnumerable<byte>>(), req.Body);
            }

            [Test]
            public void StringAndRest()
            {
                var key = "Accept";
                var req = HttpRequest.Create("http://google.com", 
                    HttpMethod.Get, 
                    ImmutableDictionary<string, HttpHeader>.Empty.Add(key,HttpHeader.Create(key,"*")), 
                    Maybe.Nothing<IEnumerable<byte>>());
                Assert.AreEqual(new Uri("http://google.com"), req.Endpoint);
                Assert.AreEqual(HttpMethod.Get, req.HttpMethod);
                Assert.AreEqual("*", req.HttpHeaders.TryFind(kv=>kv.Key==key).Map(kv=>kv.Value.Value).ValueOr("FAIL"));
                Assert.AreEqual(Maybe.Nothing<IEnumerable<byte>>(), req.Body);
            }

            [Test]
            public void UriAndRest()
            {
                var key = "Accept";
                var req = HttpRequest.Create(new Uri("http://google.com"),
                    HttpMethod.Get,
                    ImmutableDictionary<string, HttpHeader>.Empty.Add(key, HttpHeader.Create(key, "*")),
                    Maybe.Nothing<IEnumerable<byte>>());
                Assert.AreEqual(new Uri("http://google.com"), req.Endpoint);
                Assert.AreEqual(HttpMethod.Get, req.HttpMethod);
                Assert.AreEqual("*", req.HttpHeaders.TryFind(kv => kv.Key == key).Map(kv => kv.Value.Value).ValueOr("FAIL"));
                Assert.AreEqual(Maybe.Nothing<IEnumerable<byte>>(), req.Body);
            }
        }

        [TestFixture]
        public class Equality
        {
            [Test]
            public void RequestsAreEqual()
            {
                var a = HttpRequest.Create("http://google.com", HttpMethod.Get);
                var b = HttpRequest.Create("http://google.com", HttpMethod.Get);
                Assert.AreEqual(a,b);
                Assert.IsTrue(a.Equals(b));
            }

            [Test]
            public void RequestsAreNotEqual()
            {
                var a = HttpRequest.Create("http://google.com", HttpMethod.Get);
                var b = HttpRequest.Create("http://google.com/as", HttpMethod.Get);
                Assert.AreNotEqual(a, b);
                Assert.IsFalse(a.Equals(b));
            }
        }

        [TestFixture]
        public class Append
        {
            [Test]
            public void AddHeaders()
            {
                var key = "Accept";
                var a = HttpRequest.Create("http://google.com", HttpMethod.Get);
                var b = a.With(ImmutableDictionary<string, HttpHeader>.Empty.Add(key, HttpHeader.Create(key, "*")));
                Assert.AreEqual("*", b.HttpHeaders.TryFind(kv => kv.Key == key).Map(kv => kv.Value.Value).ValueOr("FAIL"));
            }

            [Test]
            public void AddBody()
            {
                var a = HttpRequest.Create("http://google.com", HttpMethod.Get);
                var bytes = Encoding.UTF8.GetBytes("abcdefg");
                var b = a.With(bytes);
                Assert.AreEqual(bytes, b.Body.ValueOr(Seq.Empty<byte>()));
            }
        }
    }
}
