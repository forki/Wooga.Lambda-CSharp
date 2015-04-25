using NUnit.Framework;
using Wooga.Lambda.Control.PatternMatching;

namespace Wooga.Lambda.Tests.Control.PatternMatching
{
    [TestFixture]
    public class PatternMatchingTests
    {
        [Test]
        public static void ChooseDefaultWhenNoMatch()
        {
            var t = Pattern
                    .Match<string, int>("hello")
                    .Case(s => s == "cat", s => 0)
                    .Default(()=> 1)
                    .Evaluate();
            Assert.AreEqual(1, t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern
                    .Match<string, int>("cat")
                    .Case(s => s == "cat", s => 0)
                    .Case(s => s == "cat", _ => 1)
                    .Evaluate();
            Assert.AreEqual(0, t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern
                    .Match<string, int>("cat")
                    .Case(s => s == "fish", s => 0)
                    .Case(s => s == "cat", _ => 2)
                    .Evaluate();
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
                    .Evaluate();
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
                    .Evaluate();
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
                .Evaluate();
            Assert.AreEqual("dog", t);
        }

    }
}
