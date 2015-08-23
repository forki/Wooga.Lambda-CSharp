using System.Collections.Generic;
using NUnit.Framework;
using System;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class TupleTests
    {
        [Test]
        public void DifferentTuplesAreNotEqual()
        {
            var x2 = Tuple.Create(12, "something");
            var y2 = Tuple.Create(12, "somethingElse");
            Assert.AreNotEqual(x2, y2);

            var x3 = Tuple.Create(12, "something", 'a');
            var y3 = Tuple.Create(17, "something", 'a');
            Assert.AreNotEqual(x3, y3);
        }

        [Test]
        public void SameTuplesAreEqual()
        {
            var x2 = Tuple.Create(12, "something");
            var y2 = Tuple.Create(12, "something");
            Assert.AreEqual(x2, y2);

            var x3 = Tuple.Create(12, "something", 'a');
            var y3 = Tuple.Create(12, "something", 'a');
            Assert.AreEqual(x3, y3);
        }
    }
}