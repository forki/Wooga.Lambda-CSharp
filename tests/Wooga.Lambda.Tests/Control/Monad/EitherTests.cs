using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Control.Monad
{
    [TestFixture]
    public class EitherTests
    {
        [Test]
        public void LeftIsLeft()
        {
            var either = Either.Failure<int,string>("twelve");
            var isRight = either.IsSuccess();
            var isLeft = either.IsFailure();
            Assert.False(isRight);
            Assert.True(isLeft);
        }

        [Test]
        public void RightIsRight()
        {
            var either = Either.Success<int,string>(12);
            var isRight = either.IsSuccess();
            var isLeft = either.IsFailure();
            Assert.True(isRight);
            Assert.False(isLeft);
        }
    }

    [TestFixture]
    public class EitherTryTests
    {
        [Test]
        public void WithExceptionEitherShouldBeLeft()
        {
            var tryIo = Either.Try<Unit>(() => { throw new Exception("anError"); });
            Assert.True(tryIo.IsFailure());
            Assert.AreEqual("anError", tryIo.FailureValue.Message);
        }

        [Test]
        public void WithoutExceptionEitherShouldBeRight()
        {
            var tryIo = Either.Try(() => "noError");
            Assert.True(tryIo.IsSuccess());
            Assert.AreEqual("noError", tryIo.SuccessValue);
        }
    }

    [TestFixture]
    public class EitherMonadTests
    {
        [Test]
        public void BindAppliesFuncForRight()
        {
            var either = Either.Success<string,int>("abc");
            Assert.AreEqual(Either.Success<int, int>(100).FromSuccess(),
                either.Bind(_ => Either.Success<int, int>(100)).FromSuccess());
        }

        [Test]
        public void BindIsLeftForLeft()
        {
            var either = Either.Failure<string,int>(400);
            Assert.True(either.Bind(_ => Either.Success<string, int>("abc")).IsFailure());
        }

        [Test]
        public void ReturnCreatesRightValue()
        {
            var either = Either.Return<string, int>("abc");
            Assert.True(either.IsSuccess());
        }

        [Test]
        public void ThenIsLeftWhenFirstIsLeft()
        {
            var either = Either.Failure<string, int>(400).Then(Either.Success<string,int>("abc"));
            Assert.True(either.IsFailure());
        }
    }

    [TestFixture]
    public class EitherMonadLawsTests
    {
        [Test]
        public void FirstLaw()
        {
            var str = "abc";
            Func<string, Either<string,int>> f = s => Either.Success<string,int>(s.ToUpper());
            Assert.AreEqual(Either.Return<string,int>(str).Bind(f).FromSuccess(), f(str).FromSuccess());
        }

        [Test]
        public void SecondLaw()
        {
            var str = "abc";
            var either = Either.Success<string,int>(str).Bind(Either.Return<string,int>);
            Assert.AreEqual(str, either.FromSuccess());
        }

        [Test]
        public void ThirdLaw()
        {
            var str = "asd";
            Func<string, Either<string[],int>> f = s => Either.Success<string[],int>(s.Split(' '));
            Func<string[], Either<string[], int>> g = Either.Success<string[], int>;
            var left = Either.Success<string,int>(str).Bind(f).Bind(g);
            var right = Either.Success<string,int>(str).Bind(x => f(x).Bind(g));
            Assert.AreEqual(left.FromSuccess(), right.FromSuccess());
        }
    }

    [TestFixture]
    public class EitherFunctorTests
    {
        [Test]
        public void FunctorWithLeftIsLeft()
        {
            var either = Either.Failure<int,string>("hurra");
            var res = either.Map(i => i*2);
            Assert.True(res.IsFailure());
        }

        [Test]
        public void FunctorWithRightAppliesFunctor()
        {
            var either = Either.Success<int,string>(3);
            var res = either.Map(i => i*2);
            Assert.AreEqual(6, res.FromSuccess());
        }
    }
}