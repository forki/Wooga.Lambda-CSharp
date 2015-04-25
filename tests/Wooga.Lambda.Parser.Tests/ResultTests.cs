using NUnit.Framework;

namespace Wooga.Lambda.Parser.Tests
{
    [TestFixture]
    public class ResultTests
    {
        [Test]
        public void FailShouldProduceFailureResultWithCharPosition()
        {
            var r = Result.Fail<int>("aaa", new CharStreamPosition(1, 2, 3));
            var rs = ((Result<int>.Failure) r);
            Assert.AreEqual(1, rs.Peek.Index);
            Assert.AreEqual(2, rs.Peek.Line);
            Assert.AreEqual(3, rs.Peek.Column);
        }

        [Test]
        public void FailShouldProduceFailureResultWithValue()
        {
            var r = Result.Fail<int>("aaa", new CharStreamPosition(1, 2, 3));
            var rs = ((Result<int>.Failure) r);
            Assert.AreEqual("aaa", rs.Message);
        }

        [Test]
        public void MatchShouldCallFailOnFailureValue()
        {
            var r = Result.Fail<int>("xxx", new CharStreamPosition());
            var t = r.MatchResult(s => "s", f => "f");
            Assert.AreEqual(t, "f");
        }

        [Test]
        public void MatchShouldCallSuccessOnSuccessValue()
        {
            var r = Result.Succeed(100, new CharStreamPosition());
            var t = r.MatchResult(s => "s", f => "f");
            Assert.AreEqual(t, "s");
        }

        [Test]
        public void SucceedShouldProduceSuccessResultWithCharPosition()
        {
            var r = Result.Succeed(5, new CharStreamPosition(1, 2, 3));
            var rs = ((Result<int>.Success) r);
            Assert.AreEqual(1, rs.Peek.Index);
            Assert.AreEqual(2, rs.Peek.Line);
            Assert.AreEqual(3, rs.Peek.Column);
        }

        [Test]
        public void SucceedShouldProduceSuccessResultWithValue()
        {
            var r = Result.Succeed(5, new CharStreamPosition());
            var rs = ((Result<int>.Success) r);
            Assert.AreEqual(5, rs.Value);
        }
    }
}