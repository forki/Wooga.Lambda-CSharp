using NUnit.Framework;

namespace Wooga.Lambda.Parser.Tests
{
    [TestFixture]
    internal class CharStreamTests
    {
        [Test]
        public void AtPositionWithIndex2ShouldHavePositionIndex2()
        {
            var s = new CharStream("xyz");
            var p = s.PeekPosition(2);
            Assert.AreEqual(2, s.AtPosition(p).Position.Index);
        }

        [Test]
        public void AtPositionWithIndex2ShouldPeek3RdChar()
        {
            var s = new CharStream("xyz");
            var p = s.PeekPosition(2);
            Assert.AreEqual('z', s.AtPosition(p).Peek());
        }

        [Test]
        public void InitialPositionShouldBeZero()
        {
            var s = new CharStream("x");
            Assert.AreEqual(0, s.Position.Index);
        }

        [Test]
        public void Peek0ShouldReturnNoChars()
        {
            var s = new CharStream("xyz");
            Assert.AreEqual(new char[0], s.Peek(0));
        }

        [Test]
        public void Peek3ShouldReturnTheFirst3Chars()
        {
            var s = new CharStream("xyz");
            Assert.AreEqual(new[] {'x', 'y', 'z'}, s.Peek(3));
        }

        [Test]
        public void PeekBeyondStreamReturnsEndOfStreamChar()
        {
            var s = new CharStream("");
            Assert.AreEqual(CharStream.EndOfStream, s.Peek());
        }

        [Test]
        public void PeekPosition3ShouldHaveIndex3()
        {
            var s = new CharStream("xyz");
            Assert.AreEqual(3, s.PeekPosition(3).Index);
        }

        [Test]
        public void PeekShouldReturnTheFirstChar()
        {
            var s = new CharStream("x");
            Assert.AreEqual('x', s.Peek());
        }

        [Test]
        public void PeekShouldReturnTheFirstCharWithChars()
        {
            var s = new CharStream(new[] {'x'});
            Assert.AreEqual('x', s.Peek());
        }

        [Test]
        public void PositionAfterPeekShouldBeZero()
        {
            var s = new CharStream("x");
            var x = s.Peek();
            Assert.AreEqual(0, s.Position.Index);
        }
    }
}