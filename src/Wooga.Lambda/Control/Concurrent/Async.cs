using System;
using System.Collections.Generic;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    /// <summary>
    /// A delegate to label lambdas as Async
    /// </summary>
    /// <typeparam name="T">Result type</typeparam>
    /// <returns>Result</returns>
    public delegate T Async<T>();

    internal sealed class AsyncEventHandle<T>
    {
        public readonly ManualResetEvent DoneEvent = new ManualResetEvent(false);

        private T _result;

        public Unit Complete(T result)
        {
            _result = result;
            DoneEvent.Set();
            return Unit.Default;
        }

        public T Result()
        {
            return _result;
        }
    }

    public sealed class AsyncReplyChannel<TReply>
    {
        private readonly Func<TReply, Unit> replyf;

        public AsyncReplyChannel(Func<TReply, Unit> reply)
        {
            replyf = reply;
        }

        public void Reply(TReply msg)
        {
            replyf(msg);
        }
    }

    public static class Async
    {
        public static TReturn Do<T1, T2, TReturn>(Async<T1> m, Async<T2> h, Func<T1, T2, TReturn> f)
        {
            return f(m(), h());
        }

        public static TReturn Do<T1, T2, T3, TReturn>(Async<T1> m, Async<T2> h, Async<T3> i, Func<T1, T2, T3, TReturn> f)
        {
            return f(m(), h(), i());
        }

        public static TReturn Do<T1, T2, T3, T4, TReturn>(Async<T1> m, Async<T2> h, Async<T3> i, Async<T4> k,
            Func<T1, T2, T3, T4, TReturn> f)
        {
            return f(m(), h(), i(), k());
        }

        public static Async<Unit> Ignore<T>(this Async<T> m)
        {
            return () =>
            {
                m.RunSynchronously();
                return Unit.Default;
            };
        }

        public static Async<T[]> Parallel<T>(this Async<T>[] ms)
        {
            return () =>
            {
                var results = new List<T>();
                while (ms.Length > 0)
                {
                    const int limit = 32; // 64 is maximum here
                    var take = Math.Min(limit, ms.Length);
                    var ps = ms.RangeSubset(0, take);
                    ms = ms.RangeSubset(take, ms.Length - take);

                    var handles = ps.Map(m =>
                    {
                        var handle = new AsyncEventHandle<T>();
                        var ma = m.Bind<T, Unit>(v => () => handle.Complete(v));
                        return new Tuple<Async<Unit>, AsyncEventHandle<T>>(ma, handle);
                    });

                    Array.ForEach(handles, ah => ah.Item1.Start());
                    WaitHandle.WaitAll(handles.Map(ah => (WaitHandle) ah.Item2.DoneEvent));
                    results.AddRange(handles.Map(ah => ah.Item2.Result()));
                }
                return results.ToArray();
            };
        }

        public static T RunSynchronously<T>(this Async<T> m)
        {
            return m.Invoke();
        }

        public static Async<Unit> Sleep(int ms)
        {
            return () =>
            {
                var e = new ManualResetEvent(false);
                e.WaitOne(ms);
                return Unit.Default;
            };
        }

        public static Unit Start<T>(this Async<T> m)
        {
            ThreadPool.QueueUserWorkItem(_ => m.RunSynchronously());
            return Unit.Default;
        }

        public static Unit StartAndReply<T>(this Async<T> m, Func<AsyncReplyChannel<T>, AsyncReplyChannel<T>> f)
        {
            var ch = f(new AsyncReplyChannel<T>(_ => Unit.Default));
            m.Bind<T, Unit>(v =>
            {
                ch.Reply(v);
                return () => Unit.Default;
            }).Start();
            return Unit.Default;
        }

        public static Async<Async<T>> StartChild<T>(this Async<T> m)
        {
            return () =>
            {
                var handle = new AsyncEventHandle<T>();
                m.StartAndReply(ch => new AsyncReplyChannel<T>(r =>
                {
                    ch.Reply(r);
                    handle.Complete(r);
                    return Unit.Default;
                }));
                return () =>
                {
                    handle.DoneEvent.WaitOne();
                    return handle.Result();
                };
            };
        }

        public static Async<T2> Bind<T1, T2>(this Async<T1> m, Func<T1, Async<T2>> f)
        {
            return () =>
            {
                var xm = m.RunSynchronously();
                var xf = f(xm).RunSynchronously();
                return xf;
            };
        }

        public static Async<T2> Then<T1, T2>(this Async<T1> m, Async<T2> h)
        {
            return m.Bind(_ => h);
        }

        public static Async<T> Return<T>(Func<T> f)
        {
            return () => f();
        }

        public static Async<T> Return<T>(T f)
        {
            return () => f;
        }
    }
}