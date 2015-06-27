using NUnit.Framework;
using Wooga.Lambda.Control;

namespace Wooga.Lambda.Tests.Control.PatternMatching
{
    internal abstract class A
    {
        internal sealed class B : A
        {
        }

        internal sealed class C : A
        {
        }
    }

    [TestFixture]
    public class PatternTests
    {
        [Test]
        public static void ChooseDefaultWhenNoMatch()
        {
            var t = Pattern<int>
                .Match("hello")
                .Case(s => s == "cat", s => 0)
                .Default(_ => 1)
                .Run();
            Assert.AreEqual(1, t);
        }

        [Test]
        public static void ChooseFirstCorrectEqualityMatchAboveDefault()
        {
            var t = Pattern<string>
                .Match("cat")
                .Case(s => s == "fish", s => s)
                .Case("cat", _ => "dog")
                .Default(_ => "default")
                .Run();
            Assert.AreEqual("dog", t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern<int>
                .Match("cat")
                .Case(s => s == "fish", s => 0)
                .Case(s => s == "cat", _ => 2)
                .Run();
            Assert.AreEqual(2, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchAboveDefault()
        {
            var t = Pattern<string>
                .Match("cat")
                .Case(s => s == "fish", s => s)
                .Case(s => s == "cat", _ => "dog")
                .Default(_ => "default")
                .Run();
            Assert.AreEqual("dog", t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchDefaultWhenDefaultIsFirst()
        {
            var t = Pattern<string>
                .Match("cat")
                .Default(_ => "default")
                .Case(s => s == "fish", s => s)
                .Case(s => s == "cat", _ => "dog")
                .Run();
            Assert.AreEqual("default", t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern<int>
                .Match("cat")
                .Case(s => s == "cat", s => 0)
                .Case(s => s == "cat", _ => 1)
                .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        [ExpectedException("System.InvalidOperationException")]
        public static void ExceptionOnNoMatch()
        {
            Pattern<string>
                .Match("fish")
                .Case("cat", _ => "dog")
                .Run();
        }
    }

    [TestFixture]
    public class PatternMatchingTypeTests
    {
        [Test]
        public static void ChooseDefaultWhenNoMatch()
        {
            var t = Pattern<int>
                .Match<A>(new A.C())
                .Case<A.B>(s => 0)
                .Default(_ => 1)
                .Run();
            Assert.AreEqual(1, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern<int>
                .Match<A>(new A.B())
                .Case<A.C>(s => 0)
                .Case<A.B>(s => 2)
                .Case<A.B>(s => 1)
                .Run();
            Assert.AreEqual(2, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchAboveDefault()
        {
            var t = Pattern<int>
                .Match<A>(new A.C())
                .Case<A.C>(s => 0)
                .Case<A.B>(s => 2)
                .Case<A.B>(s => 1)
                .Default(_ => 5)
                .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchDefaultWhenDefaultIsFirst()
        {
            var t = Pattern<int>
                .Match<A>(new A.C())
                .Default(_ => 5)
                .Case<A.C>(s => 0)
                .Case<A.B>(s => 2)
                .Case<A.B>(s => 1)
                .Run();
            Assert.AreEqual(5, t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern<int>
                .Match(new A.B())
                .Case<A.B>(s => 0)
                .Case<A.B>(s => 1)
                .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        [ExpectedException("System.InvalidOperationException")]
        public static void ExceptionOnNoMatch()
        {
            var x = Pattern<int>
                    .Match<A>(new A.C())
                    .Case<A.B>(s => 2)
                    .Case<A.B>(s => 1)
                    .Run();

            var y = x;
        }
    }
}