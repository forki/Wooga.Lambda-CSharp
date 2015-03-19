using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Control.Monad
{
    [TestFixture]
    public class TryTests
    {
        /// <summary> Without exception either should be right.</summary>
        [Test]
        public void WithoutExceptionEitherShouldBeRight()
        {
            var tryIo = Try.Return(() => "noError");
            var result = tryIo();
            Assert.True(result.IsRight());
            Assert.AreEqual("noError", result.FromRight());
        }

        [Test]
        public void WithExceptionEitherShouldBeLeft()
        {
            var tryIo = Try.Return<Unit>(() => { throw new Exception("anError"); });
            var result = tryIo();
            Assert.True(result.IsLeft());
            Assert.AreEqual("anError", result.FromLeft().Message);
        }
    }

    [TestFixture]
    public class TryMonadTests
    {
        [Test]
        public void BindingIOResultWithExceptionWontPropagate()
        {
            var fail = Try.Return<Unit>(() => { throw new Exception("anError"); });
            var result = fail.Bind(_ => Try.Return(() => Unit.Default)).Invoke();
            Assert.True(result.IsLeft());
            Assert.AreEqual("anError", result.FromLeft().Message);
        }

        [Test]
        public void BindingIOResultWithoutExceptionWillPropagate()
        {
            var fail = Try.Return(() => "abc");
            var result = fail.Bind(_ => Try.Return(() => "xyz")).Invoke();
            Assert.True(result.IsRight());
            Assert.AreEqual("xyz", result.FromRight());
        }

        [Test]
        public void BindingAsyncResultWithExceptionWontPropagate()
        {
            Func<Unit> async = () => Async.Return<Unit>(() => { throw new Exception("anError"); }).RunSynchronously();
            var fail = Try.Return(async);
            var result = fail.Bind(_ => Try.Return(() => Unit.Default)).Invoke();
            Assert.True(result.IsLeft());
            Assert.AreEqual("anError", result.FromLeft().Message);
        }

        [Test]
        public void BindingAsyncResultWithoutExceptionWillPropagate()
        {
            var fail = Try.Return(() => Async.Return(() => "abc").RunSynchronously() );
            var result = fail.Bind(_ => Try.Return(() => "xyz")).Invoke();
            Assert.True(result.IsRight());
            Assert.AreEqual("xyz", result.FromRight());
        }
    }
    
}
