using NUnit.Framework;
using Wooga.Lambda.Parser.Combinators;

namespace Wooga.Lambda.Parser.Tests.CombinatorsTests
{
    [TestFixture]
    public class CommonTests
    {
        [Test]
        public void ReturnShouldProduceAlwaysSuccessParser()
        {
            var p = Common.Return(100);
            var r = p((new CharStream("x")));
            var rs = ((Result<int>.Success) r);
            Assert.AreEqual(100, rs.Value);
        }

        [Test]
        public void ZeroShouldProduceAlwaysFailureParser()
        {
            var p = Common.Zero<int>();
            Assert.IsInstanceOf<Result<int>.Failure>(p((new CharStream("a"))));
        }

        [Test]
        public void BindAFailureProducesFailure()
        {
            var p = Common.Zero<int>().Bind(_ => Common.Return(100));
            Assert.IsInstanceOf<Result<int>.Failure>(p((new CharStream("a"))));
            var p2 = Common.Return(100).Bind(_ => Common.Zero<int>());
            Assert.IsInstanceOf<Result<int>.Failure>(p2((new CharStream("a"))));
        }

        [Test]
        public void BindSuccessesProducesSuccess()
        {
            var p = Common.Return(20).Bind(_ => Common.Return(100));
            Assert.IsInstanceOf<Result<int>.Success>(p((new CharStream("a"))));
        }

        [Test]
        public void BindValueProducedByFIsUsed()
        {
            var p = Common.Return(20).Bind(_ => Common.Return(100));
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(100,r.Value);
        }

        [Test]
        public void ThenProducesValueOnSuccess()
        {
            var p = Common.Return(20).Then(100);
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(100, r.Value);
        }

        [Test]
        public void ThenProducedFailureOnFail()
        {
            var p = Common.Zero<int>().Then(100);
            Assert.IsInstanceOf<Result<int>.Failure>(p((new CharStream("a"))));
        }

        [Test]
        public void ManyShouldProduceSuccessValueWithNoMatch()
        {
            var p = Common.Zero<int>().Many();
            var r = ((Result<int[]>.Success)p((new CharStream("a"))));
            Assert.AreEqual(new int[0],r.Value);
        }

        [Test]
        public void ManyShouldProduceSuccessWithMultipleMatches()
        {
            var p = Chars.Eq('a').Many();
            var r = ((Result<char[]>.Success)p((new CharStream("aaaa"))));
            Assert.AreEqual(new[] { 'a', 'a', 'a', 'a' }, r.Value);
        }

        [Test]
        public void ManyShouldIncreasePeekWithMultipleMatches()
        {
            var p = Chars.Eq('a').Many();
            var r = ((Result<char[]>.Success)p((new CharStream("aaaa"))));
            Assert.IsInstanceOf<Result<char[]>.Success>(r);
        }

        [Test]
        public void Many1ShouldNotProduceSuccessValueWithNoMatch()
        {
            var p = Common.Zero<int>().Many1();
            var r = p((new CharStream("a")));
            Assert.IsInstanceOf<Result<int[]>.Failure>(r);
        }
    }
}
