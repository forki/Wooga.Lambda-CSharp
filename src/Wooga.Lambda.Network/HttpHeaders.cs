using System;
using System.Collections.Generic;
using System.Net;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{
    public struct HttpHeaders
    {
        internal Dictionary<String, HttpHeader> _headers;

        internal HttpHeaders(Dictionary<string, HttpHeader> h)
        {
            _headers = h;
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
            foreach (var h in self._headers.Values)
            {
                r.Add(h.Key, h);
            }
            foreach (var h in other._headers.Values)
            {
                r.Add(h.Key, h);
            }
            return new HttpHeaders(r);
        }

        public static Maybe<HttpHeader> TryFindValueWithKey(this HttpHeaders self, String key)
        {
            HttpHeader h;
            if (self._headers.TryGetValue(key, out h))
            {
                return Maybe.Return(() => h);
            }
            return Maybe.Nothing<HttpHeader>();
        }

        public static HttpHeaders Append(this HttpHeaders self, String key, String value)
        {
            return self.Concat(new HttpHeaders(new Dictionary<String, HttpHeader> {{key, new HttpHeader(key, value)}}));
        }

        public static WebHeaderCollection ToWebHeaders(this HttpHeaders self)
        {
            return self._headers.Fold((headers, _, header) =>
            {
                headers.Add(header.Key, header.Value);
                return headers;
            },
                new WebHeaderCollection());
        }

        public static HttpWebRequest AppendToRequest(this HttpHeaders self, HttpWebRequest request)
        {
            foreach (var h in self._headers.Values)
            {
                request.Headers.Add(h.Key, h.Value);
            }
            return request;
        }

        public static HttpHeaders OfWebHeaders(WebHeaderCollection webHeaders)
        {
            return webHeaders.AllKeys.Fold((headers, key) => headers.Append(key, webHeaders.Get(key)),
                HttpHeaders.Create());
        }
    }
}