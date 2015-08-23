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

        [Test]
        public void FromSuccessOnFailureReturnsDefault()
        {
            var x = Either.Failure<int, Unit>(Unit.Default);
            Assert.AreEqual(17,x.SuccessOr(17));
        }

        [Test]
        public void FromSuccessOnFailureReturnsDeferredDefault()
        {
            var x = Either.Failure<int, Unit>(Unit.Default);
            Assert.AreEqual(17, x.SuccessOr(()=>17));
        }

        [Test]
        public void FromFailureOnSuccessReturnsDefault()
        {
            var x = Either.Success<Unit, int>(Unit.Default);
            Assert.AreEqual(17, x.FailureOr(17));
        }

        [Test]
        public void FromFailureOnSuccessReturnsDeferredDefault()
        {
            var x = Either.Success<Unit, int>(Unit.Default);
            Assert.AreEqual(17, x.FailureOr(() => 17));
        }
    }

    [TestFixture]
    public class EitherEqualityTests
    {
        [Test]
        public void SucccessesAreEqual()
        {
            var x = Either.Success<string, int>("a");
            var y = Either.Success<string, int>("a");
            Assert.AreEqual(x,y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void SucccessesAreNotEqual()
        {
            var x = Either.Success<string, int>("a");
            var y = Either.Success<string, int>("b");
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void FailuresAreEqual()
        {
            var x = Either.Failure<string, int>(1);
            var y = Either.Failure<string, int>(1);
            Assert.AreEqual(x, y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void FailuresAreNotEqual()
        {
            var x = Either.Failure<string, int>(1);
            var y = Either.Failure<string, int>(2);
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void SucccessesAndFailureAreNotEqual()
        {
            var x = Either.Success<string, int>("a");
            var y = Either.Failure<string, string>("a");
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void SuccessesAreEqualWithNestedStructs()
        {
            var x = Either.Success<Tuple<string,Tuple<string,int>>,Unit>(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Either.Success<Tuple<string,Tuple<string,int>>,Unit>(Tuple.Create("a", Tuple.Create("b", 1)));
            Assert.AreEqual(x, y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void SuccessesAreNotEqualWithNestedStructs()
        {
            var x = Either.Success<Tuple<string, Tuple<string, int>>, Unit>(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Either.Success<Tuple<string, Tuple<string, int>>, Unit>(Tuple.Create("a", Tuple.Create("b", 2)));
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void FailuresAreEqualWithNestedStructs()
        {
            var x = Either.Failure<Unit,Tuple<string, Tuple<string, int>>>(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Either.Failure<Unit,Tuple<string, Tuple<string, int>>>(Tuple.Create("a", Tuple.Create("b", 1)));
            Assert.AreEqual(x, y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void FailuresAreNotEqualWithNestedStructs()
        {
            var x = Either.Failure<Unit, Tuple<string, Tuple<string, int>>>(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Either.Failure<Unit, Tuple<string, Tuple<string, int>>>(Tuple.Create("a", Tuple.Create("b", 2)));
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

    }

    [TestFixture]
    public class EitherTryTests
    {
        [Test]
        public void WithExceptionEitherShouldBeLeft()
        {
            var tryIo = Either.Catch<Unit>(() => { throw new Exception("anError"); });
            Assert.True(tryIo.IsFailure());
            Assert.AreEqual("anError", tryIo.FailureValue.Message);
        }

        [Test]
        public void WithoutExceptionEitherShouldBeRight()
        {
            var tryIo = Either.Catch(() => "noError");
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
            Assert.AreEqual(Either.Success<int, int>(100).SuccessOr(0), either.Bind(_ => Either.Success<int, int>(100)).SuccessOr(1));
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
            Assert.AreEqual(Either.Return<string,int>(str).Bind(f).SuccessOr("0"), f(str).SuccessOr("1"));
        }

        [Test]
        public void SecondLaw()
        {
            var str = "abc";
            var either = Either.Success<string,int>(str).Bind(Either.Return<string,int>);
            Assert.AreEqual(str, either.SuccessOr("0"));
        }

        [Test]
        public void ThirdLaw()
        {
            var str = "asd";
            Func<string, Either<string[],int>> f = s => Either.Success<string[],int>(s.Split(' '));
            Func<string[], Either<string[], int>> g = Either.Success<string[], int>;
            var left = Either.Success<string,int>(str).Bind(f).Bind(g);
            var right = Either.Success<string,int>(str).Bind(x => f(x).Bind(g));
            Assert.AreEqual(left.SuccessOr(new [] {"0"}), right.SuccessOr(new[] { "1" }));
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
            Assert.AreEqual(6, res.SuccessOr(1));
        }
    }
}