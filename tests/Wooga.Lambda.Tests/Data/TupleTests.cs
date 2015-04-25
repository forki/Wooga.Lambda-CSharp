using NUnit.Framework;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class TupleTests
    {
        [Test]
        public void DifferentTuplesAreNotEqual()
        {
            var x2 = new ImmutableTuple<int, string>(12, "something");
            var y2 = new ImmutableTuple<int, string>(12, "somethingElse");
            Assert.AreNotEqual(x2, y2);

            var x3 = new ImmutableTuple<int, string, char>(12, "something", 'a');
            var y3 = new ImmutableTuple<int, string, char>(17, "something", 'a');
            Assert.AreNotEqual(x3, y3);
        }

        [Test]
        public void SameTuplesAreEqual()
        {
            var x2 = new ImmutableTuple<int, string>(12, "something");
            var y2 = new ImmutableTuple<int, string>(12, "something");
            Assert.AreEqual(x2, y2);

            var x3 = new ImmutableTuple<int, string, char>(12, "something", 'a');
            var y3 = new ImmutableTuple<int, string, char>(12, "something", 'a');
            Assert.AreEqual(x3, y3);
        }
    }
}