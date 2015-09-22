using System;
using System.Collections.Immutable;
using System.Diagnostics;
using System.Linq;
using System.Threading;
using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Tests.Control.Concurrent
{
    [TestFixture]
    public class AsyncTests
    {
        [Test]
        public void CatchesException()
        {
            var ch = Async
                .Return(() =>
                {
                    throw new Exception("exception");
#pragma warning disable 162
                    return Unit.Default;
#pragma warning restore 162
                })
                .Catch()
                .RunSynchronously();
            Assert.IsTrue(ch.IsFailure());
            Assert.AreEqual("exception", ch.FailureOr(new Exception("default")).Message);
        }

        [Test]
        public void CatchPropagatesRightValue()
        {
            var ch = Async
                .Return(() => "no exception")
                .Catch()
                .RunSynchronously();
            Assert.IsTrue(ch.IsSuccess());
            Assert.AreEqual("no exception", ch.SuccessOr("default"));
        }

        [Test]
        public void IgnoreExecutesOriginalComputation()
        {
            var check = false;
            Async.Return(() =>
            {
                check = true;
                return 1;
            })
                .Ignore()
                .RunSynchronously();
            Assert.True(check);
        }

        [Test]
        public void RunParallelWithEmptyShouldBeFine()
        {
            var asyncs = ImmutableList<Async<int>>.Empty;
            var vals = asyncs.Parallel().RunSynchronously();
            Assert.AreEqual(vals.Distinct().Count(), 0, "Nothing shoul have happened");
        }

        [Test]
        public void RunParallelWithOnlyAFewShouldBeFine()
        {
            const int wait = 3;
            var rnd = new Random();
            const int num = 4;
            var asyncs = ImmutableList<Async<int>>.Empty;
            for (var i = 0; i < num; i++)
            {
                asyncs = asyncs.Add(() =>
                {
                    Async
                        .Sleep(rnd.Next(10) + wait)
                        .RunSynchronously();
                    return Thread.CurrentThread.ManagedThreadId;
                });
            }

            var vals = asyncs.Parallel().RunSynchronously();
            Assert.True(!vals.Contains(Thread.CurrentThread.ManagedThreadId),
                "Used threads are different from the launcher thread.");
            Assert.GreaterOrEqual(vals.Distinct().Count(), 2, "Used threads are multiple worker threads.");
        }

        [Test]
        public void RunParallelShouldSpawnWorkerThreads()
        {
            const int wait = 3;
            var rnd = new Random();
            const int num = 10000;
            var asyncs = ImmutableList<Async<int>>.Empty;
            for (var i = 0; i < num; i++)
            {
                asyncs = asyncs.Add(() =>
                {
                    Async
                        .Sleep(rnd.Next(10) + wait)
                        .RunSynchronously();
                    return Thread.CurrentThread.ManagedThreadId;
                });
            }

            var vals = asyncs.Parallel().RunSynchronously();
            Assert.True(!vals.Contains(Thread.CurrentThread.ManagedThreadId),"Used threads are different from the launcher thread.");
            Assert.GreaterOrEqual(vals.Distinct().Count(), 2, "Used threads are multiple worker threads.");
        }

        [Test]
        public void RunSynchronouslyReturnsMonadValue()
        {
            const string v = "gdahdhsa";
            var x = Async.Return(v).RunSynchronously();
            Assert.AreEqual(v, x);
        }

        [Test]
        public void SleepBlocksThread()
        {
            const int wait = 200;
            var watch = Stopwatch.StartNew();
            watch.Start();
            Async
                .Return(1)
                .Then(Async.Sleep(wait))
                .RunSynchronously();
            watch.Stop();
            Assert.GreaterOrEqual(watch.ElapsedMilliseconds, wait - 3);
        }

        [Test]
        public void StartAndReplySendsAReply()
        {
            var handle = new AsyncEventHandle<Unit>();
            var ch = new AsyncReplyChannel<Unit>(handle.Complete);
            Func<AsyncReplyChannel<Unit>, AsyncReplyChannel<Unit>> f = _ => ch;
            Async
                .Return(Unit.Default)
                .StartAndReply(f);
            handle.DoneEvent.WaitOne();
            Assert.AreEqual(Unit.Default, handle.Result());
        }

        [Test]
        public void StartChildProducesAValue()
        {
            var ch = Async
                .Return("Child")
                .StartChild()
                .Bind(_ => _)
                .RunSynchronously();
            Assert.AreEqual("Child", ch);
        }

        [Test]
        public void StartChildProducesAValueWhenMissingHandle()
        {
            var ch = Async
                .Return("Child")
                .StartChild()
                .Bind(_ =>
                {
                    Async
                        .Sleep(100)
                        .RunSynchronously();
                    return _;
                })
                .RunSynchronously();
            Assert.AreEqual("Child", ch);
        }

        [Test]
        public void StartSwitchesToWorkerThread()
        {
            var handle = new AsyncEventHandle<Unit>();
            Async
                .Return(() =>
                {
                    handle.DoneEvent.Set();
                    return Unit.Default;
                })
                .Then(Async.Sleep(50))
                .Start();
            handle.DoneEvent.WaitOne();
            Assert.True(true);
        }
    }

    [TestFixture]
    public class AsyncMonadTests
    {
        [Test]
        public void BindAppliesFuncToAsync()
        {
            var asnc = Async.Return("a").Bind<string, int>(s => () => 2);
            Assert.AreEqual(2, asnc.RunSynchronously());
        }

        [Test]
        public void ReturnCreatesAsync()
        {
            Assert.AreEqual("abc", Async.Return("abc").RunSynchronously());
        }

        [Test]
        public void ThenExecutesLeftHandAsync()
        {
            var check = false;
            var asnc = Async.Return(() =>
            {
                check = true;
                return "a";
            }).Then(() => 4);
            Assert.AreEqual(4, asnc.RunSynchronously());
            Assert.True(check);
        }

        [Test]
        public void ThenIsRightHandAsync()
        {
            var asnc = Async.Return("a").Then(() => 4);
            Assert.AreEqual(4, asnc.RunSynchronously());
        }
    }
}
