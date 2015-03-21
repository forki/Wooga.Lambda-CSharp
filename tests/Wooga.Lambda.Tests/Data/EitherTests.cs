using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class EitherTests
    {
        [Test]
        public void RightIsRight()
        {
            var either = Either.Right<string, int>(12);
            var isRight = either.IsRight();
            var isLeft = either.IsLeft();
            Assert.True(isRight);
            Assert.False(isLeft);
        }

        [Test]
        public void LeftIsLeft()
        {
            var either = Either.Left<string, int>("twelve");
            var isRight = either.IsRight();
            var isLeft = either.IsLeft();
            Assert.False(isRight);
            Assert.True(isLeft);
        }
    }

    [TestFixture]
    public class EitherMonadTests
    {
        [Test]
        public void BindAppliesFuncForRight()
        {
            var either = Either.Right<int, string>("abc");
            Assert.AreEqual(Either.Right<int, int>(100).FromRight(),
                either.Bind(_ => Either.Right<int, int>(100)).FromRight());
        }

        [Test]
        public void BindIsLeftForLeft()
        {
            var either = Either.Left<int, string>(400);
            Assert.True(either.Bind(_ => Either.Right<int, string>("abc")).IsLeft());
        }

        [Test]
        public void ThenIsLeftWhenFirstIsLeft()
        {
            var either = Either.Left<int, string>(400).Then(Either.Right<int, string>("abc"));
            Assert.True(either.IsLeft());
        }

        [Test]
        public void ReturnCreatesRightValue()
        {
            var either = Either.Return<int,string>(() => "abc");
            Assert.True(either.IsRight());
        }
    }

    [TestFixture]
    public class EitherMonadLawsTests
    {
        [Test]
        public void FirstLaw()
        {
            var str = "abc";
            Func<String, Either<int, String>> f = s => Either.Right<int, String>(s.ToUpper());
            Assert.AreEqual(Either.Return<int, String>(() => str).Bind(f).FromRight(), f(str).FromRight());
        }

        [Test]
        public void SecondLaw()
        {
            var str = "abc";
            var either = Either.Right<int, string>(str).Bind(x => Either.Return<int, string>(() => x));
            Assert.AreEqual(str, either.FromRight());
        }

        [Test]
        public void ThirdLaw()
        {
            var str = "asd";
            Func<string, Either<int, string[]>> f = s=>Either.Right<int,string[]>(s.Split(' '));
            Func<string[], Either<int, string[]>> g = Either.Right<int, string[]>;
            var left = Either.Right<int, string>(str).Bind(f).Bind(g);
            var right = Either.Right<int, string>(str).Bind(x => f(x).Bind(g));
            Assert.AreEqual(left.FromRight(), right.FromRight());
        }
    }

    [TestFixture]
    public class EitherFunctorTests
    {
        [Test]
        public void FunctorWithLeftIsLeft()
        {
            var either = Either.Left<string, int>("hurra");
            var res = either.FMap(i => i*2);
            Assert.True(res.IsLeft());
        }

        [Test]
        public void FunctorWithRightAppliesFunctor()
        {
            var either = Either.Right<string, int>(3);
            var res = either.FMap(i => i*2);
            Assert.AreEqual(6, res.FromRight());
        }
    }
}