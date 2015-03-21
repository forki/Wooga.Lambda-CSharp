using System;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class MaybeTests
    {
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
            var maybe = Maybe.Nothing<String>();
            var isNothing = maybe.IsNothing();
            var isJust = maybe.IsJust();
            Assert.True(isNothing);
            Assert.False(isJust);
        }

        [Test]
        public void FromJustGetsValueOfJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual("abc", maybe.FromJust());
        }

        [Test]
        [ExpectedException(typeof (InvalidOperationException))]
        public void FromJustThrowsExceptionForNothing()
        {
            Maybe.Nothing<string>().FromJust();
        }

        [Test]
        public void FromMaybeGetsValueOfJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual("abc", maybe.FromMaybe("xzy"));
        }

        [Test]
        public void FromMaybeGetsDefaultForNothing()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.AreEqual("xzy", maybe.FromMaybe("xzy"));
        }

        [Test]
        public void _MaybeGetsDefaultForNothing()
        {
            var maybe = Maybe.Nothing<string>();
            Assert.AreEqual("xzy", maybe.FromJustOrDefault("xzy", _ => _));
        }

        [Test]
        public void _MaybeAppliesFuncForJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual(99, maybe.FromJustOrDefault(100, _ => 99));
        }
    }

    [TestFixture]
    public class MaybeMonadTests
    {
        [Test]
        public void BindAppliesFuncForJust()
        {
            var maybe = Maybe.Just("abc");
            Assert.AreEqual(Maybe.Just(12).FromJust(), maybe.Bind(_ => Maybe.Just(12)).FromJust());
        }

        [Test]
        public void BindIsNothingForNothing()
        {
            var maybe = Maybe.Nothing<String>();
            Assert.True(maybe.Bind(_ => Maybe.Just(12)).IsNothing());
        }

        [Test]
        public void ThenIsNothingWhenFirstIsNothing()
        {
            var maybe = Maybe.Nothing<String>().Then(Maybe.Just("abc"));
            Assert.True(maybe.IsNothing());
        }

        [Test]
        public void ReturnCreatesJustValue()
        {
            var maybe = Maybe.Return(() => "x");
            Assert.True(maybe.IsJust());
        }
    }

    [TestFixture]
    public class MaybeMonadLawsTests
    {
        [Test]
        public void FirstLaw()
        {
            var str = "abc";
            Func<String, Maybe<String>> f = s => Maybe.Just(s.ToUpper());
            Assert.AreEqual(Maybe.Return(() => str).Bind(f).FromJust(), f(str).FromJust());
        }

        [Test]
        public void SecondLaw()
        {
            var str = "abc";
            var maybe = Maybe.Just(str).Bind(x => Maybe.Return(() => x));
            Assert.AreEqual(str, maybe.FromJust());
        }

        [Test]
        public void ThirdLaw()
        {
            var str = "asd";
            Func<string, Maybe<string>> f = Maybe.Just;
            Func<string, Maybe<int>> g = s => Maybe.Just(s.Length);
            var left = Maybe.Just(str).Bind(f).Bind(g);
            var right = Maybe.Just(str).Bind(x => f(x).Bind(g));
            Assert.AreEqual(left.FromJust(), right.FromJust());
        }
    }

    [TestFixture]
    public class MaybeFunctorTests
    {
        [Test]
        public void FunctorWithNothingIsNothing()
        {
            var maybe = Maybe.Nothing<String>();
            var res = maybe.FMap(_ => 0);
            Assert.True(res.IsNothing());
        }

        [Test]
        public void FunctorWithJustAppliesFunctor()
        {
            var maybe = Maybe.Just(42);
            var res = maybe.FMap(_ => "42");
            Assert.AreEqual("42", res.FromJust());
        }
    }
}