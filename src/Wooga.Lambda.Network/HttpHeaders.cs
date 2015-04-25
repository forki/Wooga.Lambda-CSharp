using System.Collections;
using System.Collections.Generic;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    public sealed class HttpHeaders : IEnumerable<HttpHeader>
    {
        internal readonly Dictionary<string, HttpHeader> Headers;

        private HttpHeaders(Dictionary<string, HttpHeader> h)
        {
            Headers = h;
        }

        public IEnumerator<HttpHeader> GetEnumerator()
        {
            return Headers.Values.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public static HttpHeaders Create()
        {
            return new HttpHeaders(new Dictionary<string, HttpHeader>());
        }

        public static HttpHeaders Create(Dictionary<string, HttpHeader> h)
        {
            return new HttpHeaders(h);
        }
    }

    public static class HttpHeadersExt
    {
        public static HttpHeaders Concat(this HttpHeaders self, HttpHeaders other)
        {
            var r = new Dictionary<string, HttpHeader>();
            foreach (var h in self.Headers.Values)
            {
                r.Add(h.Key, h);
            }
            foreach (var h in other.Headers.Values)
            {
                r.Add(h.Key, h);
            }
            return HttpHeaders.Create(r);
        }

        public static Maybe<HttpHeader> TryFindValueWithKey(this HttpHeaders self, string key)
        {
            HttpHeader h;
            if (self.Headers.TryGetValue(key, out h))
            {
                return Maybe.Return(() => h);
            }
            return Maybe.Nothing<HttpHeader>();
        }

        public static HttpHeaders Append(this HttpHeaders self, string key, string value)
        {
            return
                self.Concat(HttpHeaders.Create(new Dictionary<string, HttpHeader> {{key, new HttpHeader(key, value)}}));
        }
    }
}