using System.Collections.Generic;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{
    public static class HttpHeaders
    {
        public static readonly ImmutableList<HttpHeader> Empty = ImmutableList.Empty<HttpHeader>();
        
        public static Maybe<HttpHeader> HeaderWithKey(this ImmutableList<HttpHeader> xs, string k)
        {
            return xs.Find(h => h.Key.Equals(k));
        }

        public static Dictionary<string, string> ToDictionary(this ImmutableList<HttpHeader> xs)
        {
            return xs.Fold((d, x) =>
            {
                d[x.Key] = x.Value;
                return d;
            }, new Dictionary<string, string>());
        }

        public static ImmutableList<HttpHeader> ToHttpHeaders(this Dictionary<string, string> xs)
        {
            return xs.Fold((h,k,v) => h.Add(new HttpHeader(k,v)), ImmutableList.Empty<HttpHeader>());
        }

        public static ImmutableList<HttpHeader> Unique(this ImmutableList<HttpHeader> xs)
        {
            return xs.ToDictionary().ToHttpHeaders();
        }
    }
}