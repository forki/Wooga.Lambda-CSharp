using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Tests.Control.Monad
{
    [TestFixture]
    public class MaybeTests
    {
        [Test]
        public void _MaybeAppliesFuncForJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual(99, maybe.Map(_ => 99).ValueOr(100));
        }

        [Test]
        public void _MaybeGetsDefaultForNothing()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.AreEqual("xzy", maybe.Map(_ => _).ValueOr("xzy"));
        }

        [Test]
        public void FromJustGetsValueOfJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual("abc", maybe.ValueOr("def"));
        }


        [Test]
        public void FromMaybeGetsDefaultForNothing()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.AreEqual("xzy", maybe.ValueOr("xzy"));
        }

        [Test]
        public void FromMaybeGetsDefaultForNothingDeferred()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.AreEqual("xzy", maybe.ValueOr(() => "xzy"));
        }

        [Test]
        public void FromMaybeGetsValueOfJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual("abc", maybe.ValueOr("xzy"));
        }

        [Test]
        public void JustIsJust()
        {
            var maybe = Maybe.Just("x");
            var isJust = maybe.IsJust();
            var isNothing = maybe.IsNothing();
            Assert.True(isJust);
            Assert.False(isNothing);
        }

        [Test]
        public void NothingIsNothing()
        {
            var maybe = Maybe.Nothing<string>();
            var isNothing = maybe.IsNothing();
            var isJust = maybe.IsJust();
            Assert.True(isNothing);
            Assert.False(isJust);
        }
    }

    [TestFixture]
    public class MaybeEqualityTests
    {
        [Test]
        public void JustsAreEqual()
        {
            var x = Maybe.Just<string>("a");
            var y = Maybe.Just<string>("a");
            Assert.AreEqual(x,y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void JustsAreNotEqual()
        {
            var x = Maybe.Just<string>("a");
            var y = Maybe.Just<string>("b");
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void NothingsAreEqual()
        {
            var x = Maybe.Nothing<int>();
            var y = Maybe.Nothing<int>();
            Assert.AreEqual(x, y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void JustAndNothingAreNotEqual()
        {
            var x = Maybe.Just<string>("a");
            var y = Maybe.Nothing<string>();
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }

        [Test]
        public void JustsAreEqualWithNestedStructs()
        {
            var x = Maybe.Just(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Maybe.Just(Tuple.Create("a", Tuple.Create("b", 1)));
            Assert.AreEqual(x, y);
            Assert.IsTrue(x.Equals(y));
        }

        [Test]
        public void JustsAreNotEqualWithNestedStructs()
        {
            var x = Maybe.Just(Tuple.Create("a", Tuple.Create("b", 1)));
            var y = Maybe.Just(Tuple.Create("a", Tuple.Create("b", 2)));
            Assert.AreNotEqual(x, y);
            Assert.IsFalse(x.Equals(y));
        }
    }

    [TestFixture]
    public class MaybeMonadTests
    {
        [Test]
        public void BindAppliesFuncForJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual(Maybe.Just(12).ValueOr(0), maybe.Bind(_ => Maybe.Just(12)).ValueOr(1));
        }

        [Test]
        public void BindIsNothingForNothing()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.True(maybe.Bind(_ => Maybe.Just(12)).IsNothing());
        }

        [Test]
        public void ReturnCreatesJustValue()
        {
            var maybe = Maybe.Return("x");
            Assert.True(maybe.IsJust());
        }

        [Test]
        public void ThenIsNothingWhenFirstIsNothing()
        {
            var maybe = Maybe.Nothing<string>().Then(Maybe.Just("abc"));
            Assert.True(maybe.IsNothing());
        }
    }

    [TestFixture]
    public class MaybeMonadLawsTests
    {
        [Test]
        public void FirstLaw()
        {
            var str = "abc";
            Func<string, Maybe<string>> f = s => Maybe.Just(s.ToUpper());
            Assert.AreEqual(Maybe.Return(str).Bind(f).ValueOr("def"), f(str).ValueOr("ghi"));
        }

        [Test]
        public void SecondLaw()
        {
            var str = "abc";
            var maybe = Maybe.Just(str).Bind(Maybe.Return);
            Assert.AreEqual(str, maybe.ValueOr("gfi"));
        }

        [Test]
        public void ThirdLaw()
        {
            var str = "asd";
            Func<string, Maybe<string>> f = Maybe.Just;
            Func<string, Maybe<int>> g = s => Maybe.Just(s.Length);
            var left = Maybe.Just(str).Bind(f).Bind(g);
            var right = Maybe.Just(str).Bind(x => f(x).Bind(g));
            Assert.AreEqual(left.ValueOr(-1), right.ValueOr(-2));
        }
    }

    [TestFixture]
    public class MaybeFunctorTests
    {
        [Test]
        public void FunctorWithJustAppliesFunctor()
        {
            var maybe = Maybe.Just(42);
            var res = maybe.Map(_ => "42");
            Assert.AreEqual("42", res.ValueOr("48"));
        }

        [Test]
        public void FunctorWithNothingIsNothing()
        {
            var maybe = Maybe.Nothing<string>();
            var res = maybe.Map(_ => 0);
            Assert.True(res.IsNothing());
        }
    }
}