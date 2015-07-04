using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control
{
    public static class TestHelper
    {
        internal static Retry.Strategy OnDelay(this Retry.Strategy s, Func<Retry.Strategy, Func<Retry.Strategy, uint>> f)
        {
            return new Retry.Strategy(s.Retries, s.Attempts, s.DelayBase, f(s), s.next);
        }
    }

    [TestFixture]
    public class RetryTests
    {
        [Test]
        public static void FailedJobShouldRetryGivenTimes()
        {
            var x = -1;
            Async<int> job = () =>
            {
                x++;
                throw new Exception("rrr");
                return 0;
            };

            var r = job
                .Retry(Retry.Strategy.Default)
                .RunSynchronously()
                .FailureOr(default(Exception));

            Assert.AreEqual(Retry.Strategy.Default.Retries, x);
        }

        [Test]
        public static void FailedJobShouldRetryGivenTimesChanged()
        {
            var x = -1;
            Async<int> job = () =>
            {
                x++;
                throw new Exception("rrr");
                return 0;
            };

            var r = job
                .Retry(Retry.Strategy.Default.LimitRetries(3))
                .RunSynchronously()
                .FailureOr(default(Exception));

            Assert.AreEqual(3, x);
        }

        [Test]
        public static void FailedJobShouldRetryWithGivenDelays()
        {
            Async<int> job = () => { throw new Exception("rrr"); };

            var delays = new ImmutableList<long>();
            var r = job
                .Retry(Retry.Strategy.Default.LimitRetries(5).DelayRetries(10)
                    .OnDelay(os => s =>
                    {
                        var d = os.delay(s);
                        delays = delays.Add(d);
                        return d;
                    }))
                .RunSynchronously()
                .FailureOr(default(Exception));
            Assert.AreEqual(new long[] {10, 10, 10, 10, 10}, delays.ToArray());
        }

        [Test]
        public static void FailedJobShouldReturnLeftValue()
        {
            Async<int> job = () =>
            {
                throw new Exception("rrr");
                return 0;
            };

            var r = job
                .Retry(Retry.Strategy.Default)
                .RunSynchronously()
                .FailureOr(default(Exception));

            Assert.AreEqual("rrr", r.Message);
        }

        [Test]
        public static void FailedJobWithExponentialBackoffShouldIncreaseDelay()
        {
            const uint D = 10;
            var delays = new ImmutableList<long>();
            var strategy = Retry.Strategy.Default
                .DelayRetries(D)
                .LimitRetries(5)
                .ExponentialBackoff()
                .OnDelay(os => s =>
                {
                    var d = os.delay(s);
                    delays = delays.Add(d);
                    return d;
                });

            Async<int> job = () => { throw new Exception("rrr"); };
            var result = job
                .Retry(strategy)
                .RunSynchronously();

            Assert.IsTrue(result.IsFailure());
            Assert.AreEqual(new long[] {0, D, 2*2*D, 3*3*D, 4*4*D}, delays.ToArray());
        }

        [Test]
        public static void SuccesfulJobShouldReturnRightValue()
        {
            Async<int> job = () => 5;

            var r = job
                .Retry(Retry.Strategy.Default)
                .RunSynchronously()
                .SuccessOr(default(int));

            Assert.AreEqual(5, r);
        }
    }
}