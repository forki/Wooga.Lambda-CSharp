using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class ArrayExt
    {
        [Test]
        public void ShouldGetTheHeadOfNonEmptyArray()
        {
            var xs = new []{"a","b","v"};
            var x = xs.TryHead();
            Assert.IsTrue(x.IsJust());
            Assert.AreEqual(x.FromJust(),"a");
        }

        [Test]
        public void ShouldNotGetTheHeadOfEmptyArray()
        {
            var xs = new String[0];
            var x = xs.TryHead();
            Assert.IsTrue(x.IsNothing());
        }

        [Test]
        public void ShouldGetTheTailOfNonEmptyArray()
        {
            var xs = new[] { "a", "b", "v" };
            var x = xs.TryTail();
            Assert.IsTrue(x.IsJust());
            Assert.AreEqual(x.FromJust(), new[] { "b", "v" });
        }

        [Test]
        public void ShouldNotGetTailOfSingleElementArray()
        {
            var xs = new[] { "a" };
            var x = xs.TryTail();
            Assert.IsTrue(x.IsNothing());
        }

        [Test]
        public void ShouldNotGetTailOfEmptyArray()
        {
            var xs = new String[0];
            var x = xs.TryTail();
            Assert.IsTrue(x.IsNothing());
        }

    }
}
