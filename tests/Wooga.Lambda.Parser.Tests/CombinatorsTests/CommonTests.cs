using System;
using NUnit.Framework;
using System.Collections.Immutable;
using Wooga.Lambda.Parser.Combinators;

namespace Wooga.Lambda.Parser.Tests.CombinatorsTests
{
    [TestFixture]
    public class CommonTests
    {
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
            var r = ((Result<int>.Success) p((new CharStream("a"))));
            Assert.AreEqual(100, r.Value);
        }

        [Test]
        public void Many1ShouldNotProduceSuccessValueWithNoMatch()
        {
            var p = Common.Zero<int>().Many1();
            var r = p((new CharStream("a")));
            Assert.IsInstanceOf<Result<ImmutableList<int>>.Failure>(r);
        }

        [Test]
        public void ManyShouldIncreasePeekWithMultipleMatches()
        {
            var p = Chars.Eq('a').Many();
            var r = ((Result<ImmutableList<char>>.Success)p((new CharStream("aaaa"))));
            Assert.IsInstanceOf<Result<ImmutableList<char>>.Success>(r);
        }

        [Test]
        public void ManyShouldProduceSuccessValueWithNoMatch()
        {
            var p = Common.Zero<int>().Many();
            var r = ((Result<ImmutableList<int>>.Success)p((new CharStream("a"))));
            Assert.AreEqual(ImmutableList<int>.Empty, r.Value);
        }

        [Test]
        public void ManyShouldProduceSuccessWithMultipleMatches()
        {
            var p = Chars.Eq('a').Many();
            var r = ((Result<ImmutableList<char>>.Success)p((new CharStream("aaaa"))));
            var immutableList = ImmutableList.Create('a', 'a', 'a', 'a');
            Assert.AreEqual(immutableList, r.Value);
        }

        [Test]
        public void ReturnShouldProduceAlwaysSuccessParser()
        {
            var p = Common.Return(100);
            var r = p((new CharStream("x")));
            var rs = ((Result<int>.Success) r);
            Assert.AreEqual(100, rs.Value);
        }

        [Test]
        public void ThenProducedFailureOnFail()
        {
            var p = Common.Zero<int>().Then(100);
            Assert.IsInstanceOf<Result<int>.Failure>(p((new CharStream("a"))));
        }

        [Test]
        public void ThenProducesValueOnSuccess()
        {
            var p = Common.Return(20).Then(100);
            var r = ((Result<int>.Success) p((new CharStream("a"))));
            Assert.AreEqual(100, r.Value);
        }

        [Test]
        public void TakeLeftUsesLeftParserResult()
        {
            var p = Common.Return(20).TakeLeft(Common.Return(30));
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(20, r.Value);
        }

        [Test]
        public void TakeRightUsesRightParserResult()
        {
            var p = Common.Return(20).TakeRight(Common.Return(30));
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(30, r.Value);
        }

        [Test]
        public void TakeBothUsesBothParserResults()
        {
            var p = Common.Return(20).TakeBoth(Common.Return(30));
            var r = ((Result<Tuple<int,int>>.Success)p((new CharStream("a"))));
            Assert.AreEqual(Tuple.Create(20,30), r.Value);
        }

        [Test]
        public void OrShouldUseLeftWhenLeftSucceeds()
        {
            var p = Common.Return(20).Or(Common.Return(30));
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(20, r.Value);
        }

        [Test]
        public void OrShouldUseRightWhenLeftFailsAndRightSucceeds()
        {
            var p = Common.Zero<int>().Or(Common.Return(30));
            var r = ((Result<int>.Success)p((new CharStream("a"))));
            Assert.AreEqual(30, r.Value);
        }

        [Test]
        public void OrShouldFailWhenBothFail()
        {
            var p = Common.Zero<int>().Or(Common.Zero<int>());
            var r = ((Result<int>.Failure)p((new CharStream("a"))));
            Assert.AreEqual(0, r.Peek.Index);
        }

        [Test]
        public void ZeroShouldProduceAlwaysFailureParser()
        {
            var p = Common.Zero<int>();
            Assert.IsInstanceOf<Result<int>.Failure>(p((new CharStream("a"))));
        }
    }
}