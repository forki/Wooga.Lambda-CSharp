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
                    .Match<string, string>("hello")
                    .Case(s => s == "cat", s => s)
                    .Default(()=> "dog")
                    .Evaluate();
            Assert.AreEqual("dog", t);
        }

        [Test]
        public static void ChooseFirstOfMultipleCorrectMatch()
        {
            var t = Pattern
                    .Match<string, string>("cat")
                    .Case(s => s == "cat", s => s)
                    .Case(s => s == "cat", _ => "dog")
                    .Evaluate();
            Assert.AreEqual("cat", t);
        }

        [Test]
        public static void ChooseFirstCorrectMatch()
        {
            var t = Pattern
                    .Match<string, string>("cat")
                    .Case(s => s == "fish", s => s)
                    .Case(s => s == "cat", _ => "dog")
                    .Evaluate();
            Assert.AreEqual("dog", t);
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
        public static void ChooseFirstCorrectMatchDefaultWhenDefaultIsFist()
        {
            var t = Pattern
                    .Match<string, string>("cat")
                    .Default(() => "default")
                    .Case(s => s == "fish", s => s)
                    .Case(s => s == "cat", _ => "dog")
                    .Evaluate();
            Assert.AreEqual("default", t);
        }

    }
}
