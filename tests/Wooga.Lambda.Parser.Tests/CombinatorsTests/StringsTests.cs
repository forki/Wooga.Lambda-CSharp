using NUnit.Framework;
using Wooga.Lambda.Parser.Combinators;

namespace Wooga.Lambda.Parser.Tests.CombinatorsTests
{
    [TestFixture]
    public class StringsTests
    {
        [Test]
        public void EqShouldFailOnCharsNotInSequence()
        {
            var p = Strings.Eq("abc");
            Assert.IsInstanceOf<Result<string>.Failure>(p((new CharStream("a"))));
            Assert.IsInstanceOf<Result<string>.Failure>(p((new CharStream("ab"))));
            Assert.IsInstanceOf<Result<string>.Failure>(p((new CharStream("x"))));
        }

        [Test]
        public void EqShouldReturnValueOnSuccess()
        {
            var p = Strings.Eq("abc");
            var r = p((new CharStream("abc")));
            var rs = ((Result<string>.Success) r);
            Assert.AreEqual("abc", rs.Value);
        }

        [Test]
        public void EqShouldSuccedOnSequenceOfGivenChars()
        {
            var p = Strings.Eq("abc");
            Assert.IsInstanceOf<Result<string>.Success>(p((new CharStream("abc"))));
        }
    }
}