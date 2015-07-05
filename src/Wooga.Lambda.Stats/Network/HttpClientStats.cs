using System;
using System.Net;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Network;
using static Wooga.Lambda.Data.ImmutableList;

namespace Wooga.Lambda.Stats.Network
{
    public static class HttpClientStats
    {
        private static string StatsName(HttpRequest r, string stat)
        {
            var host = r.Endpoint.Host.Replace(".","-");
            var path = r.Endpoint.AbsolutePath.Replace(".", "-").Replace("/", "_");
            var meth = r.HttpMethod.Name;
            var prot = r.Endpoint.Scheme;

            return $"http.request.{stat}.{meth}.{prot}.{host}{path}";
        }

        public static HttpClient CollectStats(HttpClient http, Stats stats)
        {
            return new HttpClient((c, r) =>
            {
                var res = stats.Time(StatsName(r,"response_time"), () =>
                {
                    try
                    {
                        return http.TransportAsync(r).RunSynchronously();
                    }
                    catch (Exception e)
                    {
                        stats.Count(StatsName(r,"response_exception"),1);
                        throw e;
                    }
                });

                stats.Gauge(StatsName(r, "request_body_size"), (double)r.Body.ValueOr(Empty<byte>()).Count);
                stats.Gauge(StatsName(r, "response_status_code"), (double) res.StatusCode);
                stats.Gauge(StatsName(r, "response_body_size"), (double) res.Body.ValueOr(Empty<byte>()).Count);

                return res;
            });
        }

    }
}
