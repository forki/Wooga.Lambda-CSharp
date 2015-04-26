using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{
    public static class HttpHeaders
    {
        public static Maybe<HttpHeader> HeaderWithKey(this ImmutableList<HttpHeader> xs, string k)
        {
            return xs.Find(h => h.Key.Equals(k));
        }
    }
}