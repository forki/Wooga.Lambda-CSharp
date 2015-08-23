using System.Collections.Generic;
using System.Linq;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Headers = System.Collections.Immutable.ImmutableList<Wooga.Lambda.Network.HttpHeader>;
using Body = System.Collections.Generic.IEnumerable<byte>;


namespace Wooga.Lambda.Network
{
    public static class HttpHeaders
    {
        public static Maybe<HttpHeader> HeaderWithKey(this Headers xs, string k)
        {
            var i = xs.FindIndex(h => h.Key.Equals(k));
            return i < 0 ? Maybe.Nothing<HttpHeader>() : Maybe.Just(xs.ElementAt(i));
        }

        public static Dictionary<string, string> ToDictionary(this Headers xs)
        {
            return xs.Aggregate(new Dictionary<string, string>(),(d, x) =>
            {
                d[x.Key] = x.Value;
                return d;
            });
        }

        public static Headers ToHttpHeaders(this Dictionary<string, string> xs)
        {
            return xs.Fold((h,k,v) => h.Add(new HttpHeader(k,v)), Headers.Empty);
        }

        public static Headers Unique(this Headers xs)
        {
            return xs.ToDictionary().ToHttpHeaders();
        }
    }
}