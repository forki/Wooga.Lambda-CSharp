using System;
using System.Diagnostics;
using System.Globalization;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Stats.Backends;
using Wooga.Lambda.Storage.FileSystem;
using static System.Guid;
using static System.Text.Encoding;

namespace Wooga.Lambda.Stats
{
    public struct Stat
    {
        public static Stat Create(string name, DateTime time, string value, string unit)
        {
            return new Stat(name,time,value,unit);
        }
        
        public readonly string Name;
        public readonly DateTime Time;
        public readonly ImmutableList<byte> Bytes;

        private Stat(string name, DateTime time, string value, string unit)
        {
            Name = name;
            Time = time;
            Bytes = UTF8
                    .GetBytes($"{name}:{value}|{unit}")
                    .ToImmutableList();
        }

    }

    public class Stats
    {
        public static Stats Create(FileSystem fs, Location cache, Backend be)
        {
            return new Stats(fs,cache,be);    
        }
        
        private readonly FileSystem HDD;
        private readonly Location Cache;
        private readonly Backend Backend;
        private readonly Agent<AgentMsg, Unit> agent;

        private Stats(FileSystem fs, Location cache, Backend be)
        {
            HDD = fs;
            Cache = cache;
            Backend = be;

            fs.NewDirAsync(cache).RunSynchronously();

            agent = Agent<AgentMsg, Unit>.Start(
                Unit.Default,
                (inbox, _) =>
                {
                    var msg = inbox.Receive().RunSynchronously();
                    Console.WriteLine(msg);
                    Pattern<Unit>
                    .Match(msg)
                    .Case<Send>(m  => SendOrSaveStat(m.Stat).Start())
                    .Case<Save>(m  => SaveStat(m.Stat).Start())
                    .Case<Flush>(m => FlushStatsCache().RunSynchronously())
                    .Default(_)
                    .Run();
                    return _;
                });
        }

        private Async<Unit> SendOrSaveStat(Stat m)
        {
            return  Backend
                    .Send(m.Bytes)
                    .Catch()
                    .Map(e => e.SuccessOr(() => agent.Post(Save.Msg(m))));
        }
        
        private Async<Unit> SaveStat(Stat m)
        {
            var l = HDD.Locate(Cache, NewGuid()+".stat");
            return HDD.WriteFileAsync(l, m.Bytes);
        }

        private Async<Unit> FlushStatsCache()
        {
            return () =>
            {
                var dir = HDD.GetDirAsync(Cache)();
                foreach (var l in dir.Files)
                {
                    if (!l.Name.EndsWith(".stat")) continue;
                    var file = HDD.GetFileAsync(l)();
                    Backend.Send(file.Content)();
                    HDD.RmFileAsync(l)();
                }
                return Unit.Default;
            };
        }

        private Unit PostStat(Stat m)
        {
            return agent.Post(Send.Msg(m));
        }

        public Unit Count(string name, int value)
        {
            return PostStat(Stat.Create(name, DateTime.Now, value.ToString(), "c"));
        }

        public Unit Gauge(string name, double value)
        {
            return PostStat(Stat.Create(name, DateTime.Now, value.ToString(CultureInfo.InvariantCulture), "g"));
        }

        public Unit Time(string name, long value)
        {
            return PostStat(Stat.Create(name, DateTime.Now, value.ToString(), "ms"));
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

        public Unit FlushCache()
        {
            return agent.Post(Flush.Msg());
        }

        private interface AgentMsg
        {
        }

        private struct Send : AgentMsg
        {
            public static Send Msg(Stat m)
            {
                return new Send(m);
            }

            private Send(Stat stat)
            {
                Stat = stat;
            }

            public readonly Stat Stat;
        }

        private struct Flush : AgentMsg
        {
            public static Flush Msg()
            {
                return new Flush();    
            }
          }

        private struct Save : AgentMsg
        {
            public static Save Msg(Stat m)
            {
                return new Save(m);
            }

            public readonly Stat Stat;

            private Save(Stat stat)
            {
                Stat = stat;
            }
        }
    }
}