using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Network;
using static Wooga.Lambda.Data.ImmutableList;

namespace Wooga.Lambda.Stats.Network
{
    public static class HttpClientStats
    {
        public static HttpClient CollectStats(HttpClient http, Stats stats)
        {
            var clientWithStats = new HttpClient((c, r) =>
            {
                var verb = r.HttpMethod.Name;
                var host = r.Endpoint.Host;
                var path = r.Endpoint.AbsolutePath;
                var pre = $"http.request.{verb}.{host}.{path}";

                var result = stats.Time($"{pre}.response.time", () => http.TransportAsync(r).RunSynchronously());

                stats.Gauge($"{pre}.response.status", (double) result.StatusCode);
                stats.Gauge($"{pre}.response.body.size", (double)result.Body.ValueOr(Empty<byte>()).Count);

                return result;
            });
            return clientWithStats;
        }

    }
}
