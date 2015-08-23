using System.Collections.Immutable;
using NUnit.Framework;
using Wooga.Lambda.Parser.Combinators;

namespace Wooga.Lambda.Parser.Tests.CombinatorsTests
{
    [TestFixture]
    public class CharsTests
    {
        [Test]
        public void AnyOfShouldFailOnAnyNotGivenChar()
        {
            var p = Chars.AnyOf(ImmutableList.Create('a', 'b', 'c'));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("x"))));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("y"))));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("z"))));
        }

        [Test]
        public void AnyOfShouldSuccedOnAnyGivenChar()
        {
            var p = Chars.AnyOf(ImmutableList.Create('a', 'b', 'c' ));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("a"))));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("b"))));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("c"))));
        }

        [Test]
        public void EqShouldFailOnDifferentChar()
        {
            var p = Chars.Eq('x');
            var r = p((new CharStream("y")));
            Assert.IsInstanceOf<Result<char>.Failure>(r);
        }

        [Test]
        public void EqShouldSucceedOnSameChar()
        {
            var p = Chars.Eq('x');
            var r = p((new CharStream("x")));
            Assert.IsInstanceOf<Result<char>.Success>(r);
        }

        [Test]
        public void NoneOfShouldFailOnAnyGivenChar()
        {
            var p = Chars.NoneOf(ImmutableList.Create('a', 'b', 'c'));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("a"))));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("b"))));
            Assert.IsInstanceOf<Result<char>.Failure>(p((new CharStream("c"))));
        }

        [Test]
        public void NoneOfShouldSuccedOnAnyNotGivenChar()
        {
            var p = Chars.NoneOf(ImmutableList.Create('a', 'b', 'c'));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("x"))));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("y"))));
            Assert.IsInstanceOf<Result<char>.Success>(p((new CharStream("z"))));
        }

        [Test]
        public void SatisfyShouldFailOnNoMatch()
        {
            var p = Chars.Satisfy(c => false);
            var r = p((new CharStream("x")));
            Assert.IsInstanceOf<Result<char>.Failure>(r);
        }

        [Test]
        public void SatisfyShouldIncrementPeekOnFailure()
        {
            var p = Chars.Satisfy(c => false);
            var r = p((new CharStream("x")));
            Assert.AreEqual(1, r.Peek.Index);
        }

        [Test]
        public void SatisfyShouldIncrementPeekOnSuccess()
        {
            var p = Chars.Satisfy(c => true);
            var r = p((new CharStream("x")));
            Assert.AreEqual(1, r.Peek.Index);
        }

        [Test]
        public void SatisfyShouldSucceedWithCharOnMatch()
        {
            var p = Chars.Satisfy(c => true);
            var r = p((new CharStream("x")));
            var rs = ((Result<char>.Success) r);
            Assert.AreEqual('x', rs.Value);
        }

        [Test]
        public void SeqOfShouldFailOnCharsNotInSequence()
        {
            var p = Chars.SeqOf(ImmutableList.Create('a', 'b', 'c'));
            Assert.IsInstanceOf<Result<ImmutableList<char>>.Failure>(p((new CharStream("a"))));
            Assert.IsInstanceOf<Result<ImmutableList<char>>.Failure>(p((new CharStream("ab"))));
            Assert.IsInstanceOf<Result<ImmutableList<char>>.Failure>(p((new CharStream("x"))));
        }

        [Test]
        public void SeqOfShouldIncrementPeekOnSuccess()
        {
            var p = Chars.SeqOf(ImmutableList.Create('a', 'b', 'c'));
            var r = p((new CharStream("abc")));
            Assert.AreEqual(3, r.Peek.Index);
        }

        [Test]
        public void SeqOfShouldReturnValueOnSuccess()
        {
            var p = Chars.SeqOf(ImmutableList.Create('a', 'b', 'c'));
            var r = p((new CharStream("abc")));
            var rs = ((Result<ImmutableList<char>>.Success)r);
            Assert.AreEqual(new[] {'a', 'b', 'c'}, rs.Value);
        }

        [Test]
        public void SeqOfShouldSuccedOnSequenceOfGivenChars()
        {
            var p = Chars.SeqOf(ImmutableList.Create('a', 'b', 'c'));
            Assert.IsInstanceOf<Result<ImmutableList<char>>.Success>(p((new CharStream("abc"))));
        }
    }
}