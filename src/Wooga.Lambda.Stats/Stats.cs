using System;
using System.Diagnostics;
using System.Globalization;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Wooga.Lambda.Stats.Backends;
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
        private static readonly Location Cache = HDD.Locate(".lambda-stats");
        private const uint MaxLogs = 2;
        private static readonly Backend Backend = Statsd.UDP.Create("192.168.59.103", 8125);
        private readonly Agent<AgentMsg, Unit> agent;

        private Stats()
        {
            agent = Agent<AgentMsg, Unit>.Start(Tuple("", 0),
                (inbox, logs) =>
                {
                    var msg = logs.Item2 > MaxLogs
                        ? new Persist()
                        : inbox.Receive().RunSynchronously();
                    return
                        Pattern<ImmutableTuple<string, int>>
                            .Match(msg)
                            .Case<Metric>(m => LogMetric(logs, m))
                            .Case<Persist>(p => PersistMetrics(logs, p))
                            .Case<Send>(s => SendMetrics(logs, s)())
                            .Default(logs)
                            .Run();
                });
        }

        private Async<ImmutableTuple<string, int>> SendMetrics(ImmutableTuple<string, int> logs, Send send)
        {
            return () =>
            {
                var dir = HDD.GetDirAsync(Cache)();
                foreach (var l in dir.Files)
                {
                    var file = HDD.GetFileAsync(l)();
                    Backend.Send(file.Content)();
                    HDD.RmFileAsync(l)();
                }
                return logs;
            };
        }

        private ImmutableTuple<string, int> PersistMetrics(ImmutableTuple<string, int> log, Persist persist)
        {
            var loc = HDD.Locate(Cache, NewGuid() + ".stats");
            var data = UTF8.GetBytes(log.Item1).ToImmutableList();
            HDD.NewDirAsync(Cache)
                .Then(HDD.WriteFileAsync(loc, data))
                .RunSynchronously();
            agent.Post(new Send());
            return Tuple("", 0);
        }

        private static ImmutableTuple<string, int> LogMetric(ImmutableTuple<string, int> log, Metric m)
        {
            var text = $"{log.Item1}\n{m.Serialize()}";
            return Tuple(text.TrimStart(), log.Item2 + 1);
        }

        private static long ToUnixTimestamp(DateTime t)
        {
            return (long) ((t.ToUniversalTime() - new DateTime(1970, 1, 1, 0, 0, 0, 0).ToUniversalTime()).TotalSeconds);
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
            private string ValueString { get; }
            private string MetricString { get; }

            public string Serialize()
            {
                return $"{Name}:{ValueString}|{MetricString}";
            }
        }
    }
}