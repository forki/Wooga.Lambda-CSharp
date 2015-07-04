using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Network;
using static Wooga.Lambda.Data.ImmutableList;

namespace Wooga.Lambda.Stats.Network
{
    public static class HttpClientStats
    {
        public static HttpClient CollectStats(HttpClient http, Stats stats, string prefix = "HttpClientStats")
        {
            var clientWithStats = new HttpClient((c, r) =>
            {
                var p = $"{prefix}.request.[{r.Endpoint.ToString()}]";
                stats.Count($"{p}.start", 1);
                var result = stats.Time($"{p}.duration", () => http.TransportAsync(r).RunSynchronously());
                stats.Gauge($"{p}.response.code", (double) result.StatusCode);
                stats.Gauge($"{p}.response.body.size", (double)result.Body.ValueOr(Empty<byte>()).Count);
                return result;
            });
            return clientWithStats;
        }

    }
}
