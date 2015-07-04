using System;
using System.Collections;
using System.Diagnostics;
using System.Globalization;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;
using Wooga.Lambda.Storage.FileSystem;
using static System.Guid;
using static System.Text.Encoding;
using static Wooga.Lambda.Data.ImmutableTuple;

namespace Wooga.Lambda.Stats
{
    public class Stats
    {
        public static readonly Stats Shared = new Stats();
        public static readonly Stats STATS = Shared;
        private static readonly FileSystem HDD = LocalFileSystem.Local();
        private static readonly HttpClient HTTP = WebRequestTransport.CreateHttpClient();
        private static readonly Location Cache = HDD.Locate(".lambda-stats");
        private static readonly HttpRequest BaseRequest = 
            HttpRequest.Basic("http://statsd.wooga.com/api",HttpMethod.Put);
        private static readonly uint MaxLogs = 100;
        private readonly Agent<AgentMsg, Unit> agent;

        private Stats()
        {
            agent = Agent<AgentMsg, Unit>.Start(Tuple("",0),
                (inbox, logs) =>
                {
                    if (logs.Item2 > MaxLogs)
                    {
                        agent.Post(new Persist());
                        agent.Post(new Send());
                    }

                    var msg = inbox.Receive().RunSynchronously();
                    return
                        Pattern<ImmutableTuple<string,int>>
                        .Match(msg)
                        .Case<Metric>(  m => LogMetric(logs, m))
                        .Case<Persist>( p => PersistMetrics(logs, p))
                        .Case<Send>(    s => SendMetrics(logs, s))
                        .Default(logs)
                        .Run();
                });
        }

        private ImmutableTuple<string, int> SendMetrics(ImmutableTuple<string, int> logs, Send send)
        {
            HDD.GetDirAsync(Cache)
            .Map(d => d.Files)
            .Bind<ImmutableList<Location>,Unit>(ls => 
            () =>
            {
                foreach (var l in ls)
                {
                    if (HDD.GetFileAsync(l)
                        .Bind(file => HTTP.TransportAsync(BaseRequest.WithBody(file.Content)))
                        .Then(HDD.RmFileAsync(l))
                        .Catch()
                        .RunSynchronously().IsFailure())
                    {
                        break;
                    };
                }
                return Unit.Default;
            });
            return logs;
        }

        private ImmutableTuple<string, int> PersistMetrics(ImmutableTuple<string, int> log, Persist persist)
        {
            var loc = HDD.Locate(Cache, NewGuid() + ".stats");
            var data = UTF8.GetBytes(log.Item1).ToImmutableList();
            HDD.NewDirAsync(Cache)
            .Then(HDD.WriteFileAsync(loc, data))
            .RunSynchronously();
            return Tuple("", 0);
        }

        private static ImmutableTuple<string, int> LogMetric(ImmutableTuple<string, int> log, Metric m)
        {
            var text = $"{log.Item1}\n{ToUnixTimestamp(m.Timestamp)}:{m.Serialize()}";
            return Tuple(text, log.Item2 + 1);
        }

        private static long ToUnixTimestamp(DateTime t)
        {
            return (long)((t.ToUniversalTime() - new DateTime(1970, 1, 1, 0, 0, 0, 0).ToUniversalTime()).TotalSeconds);
        }

        public Unit Count(string name, int value)
        {
            return agent.Post(new Metric(name, DateTime.Now, value.ToString(), "c"));
        }

        public Unit Gauge(string name, double value)
        {
            return agent.Post(new Metric(name, DateTime.Now, value.ToString(CultureInfo.InvariantCulture), "g"));
        }

        public Unit Time(string name, long value)
        {
            return agent.Post(new Metric(name, DateTime.Now, value.ToString(), "ms"));
        }

        public T Time<T>(string name, Func<T> f)
        {
            var sw = new Stopwatch();
            sw.Start();
            var r = f();
            sw.Stop();
            Time(name, sw.ElapsedMilliseconds);
            return r;
        }

        public interface AgentMsg
        {
        }

        public struct Send : AgentMsg
        {
        }

        public struct Persist : AgentMsg
        {
        }

        public struct Metric : AgentMsg
        {
            public Metric(string name, DateTime timestamp, string valueString, string metricString)
            {
                Name = name;
                Timestamp = timestamp;
                ValueString = valueString;
                MetricString = metricString;
            }

            public string Name { get; }
            public DateTime Timestamp { get; }
            string ValueString { get; }
            string MetricString { get; }

            public string Serialize()
            {
                return $"{Name}:{ValueString}|{MetricString}";
            }
        }
    }
}
