using NUnit.Framework;
using Wooga.Lambda.Control.PatternMatching;

namespace Wooga.Lambda.Tests.Control.PatternMatching
{
    internal abstract class A {

        internal sealed class B : A {
            internal B(){}
        }
        internal sealed class C : A {
            internal C(){}
        }

    }

    [TestFixture]
    public class PatternMatchingBasicTests
    {
        [Test]
        public static void ChooseDefaultWhenNoMatch()
        {
            var t = Pattern
                    .Match<string, int>("hello")
                    .Case(s => s == "cat", s => 0)
                    .Default(()=> 1)
                    .Run();
            Assert.AreEqual(1, t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern
                    .Match<string, int>("cat")
                    .Case(s => s == "cat", s => 0)
                    .Case(s => s == "cat", _ => 1)
                    .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern
                    .Match<string, int>("cat")
                    .Case(s => s == "fish", s => 0)
                    .Case(s => s == "cat", _ => 2)
                    .Run();
            Assert.AreEqual(2, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchAboveDefault()
        {
            var t = Pattern
                    .Match<string, string>("cat")
                    .Case(s => s == "fish", s => s)
                    .Case(s => s == "cat", _ => "dog")
                    .Default(() => "default")
                    .Run();
            Assert.AreEqual("dog", t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchDefaultWhenDefaultIsFirst()
        {
            var t = Pattern
                    .Match<string, string>("cat")
                    .Default(() => "default")
                    .Case(s => s == "fish", s => s)
                    .Case(s => s == "cat", _ => "dog")
                    .Run();
            Assert.AreEqual("default", t);
        }

        [Test]
        public static void ChooseFirstCorrectEqualityMatchAboveDefault()
        {
            var t = Pattern
                .Match<string, string>("cat")
                .Case(s => s == "fish", s => s)
                .Case("cat", _ => "dog")
                .Default(() => "default")
                .Run();
            Assert.AreEqual("dog", t);
        }

    }

    [TestFixture]
    public class PatternMatchingTypeTests
    {
        [Test]
        public static void ChooseDefaultWhenNoMatch()
        {
            var t = Pattern
                    .Match<A, int>(new A.C())
                    .Case<A, int, A.B>(s => s is A.B, s => 0)
                    .Default(()=> 1)
                    .Run();
            Assert.AreEqual(1, t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern
                .Match<A, int>(new A.B())
                .Case<A, int, A.B>(_ => true, s => 0)
                .Case<A, int, A.B>(_ => true, s => 1)
                .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern
                .Match<A, int>(new A.B())
                .Case<A, int, A.C>(_ => true, s => 0)
                .Case<A, int, A.B>(_ => true, s => 2)
                .Case<A, int, A.B>(_ => true, s => 1)
                .Run();
            Assert.AreEqual(2, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchAboveDefault()
        {
            var t = Pattern
                .Match<A, int>(new A.C())
                .Case<A, int, A.C>(_ => true, s => 0)
                .Case<A, int, A.B>(_ => true, s => 2)
                .Case<A, int, A.B>(_ => true, s => 1)
                .Default(() => 5)
                .Run();
            Assert.AreEqual(0, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatchDefaultWhenDefaultIsFirst()
        {
            var t = Pattern
                .Match<A, int>(new A.C())
                .Default(() => 5)
                .Case<A, int, A.C>(_ => true, s => 0)
                .Case<A, int, A.B>(_ => true, s => 2)
                .Case<A, int, A.B>(_ => true, s => 1)
                .Run();
            Assert.AreEqual(5, t);

        }
    }
}
