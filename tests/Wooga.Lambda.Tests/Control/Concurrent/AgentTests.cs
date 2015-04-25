using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using TestAgent =
    Wooga.Lambda.Control.Concurrent.Agent
        <Wooga.Lambda.Data.ImmutableTuple<string, Wooga.Lambda.Control.Concurrent.AsyncReplyChannel<string>>, string>;

namespace Wooga.Lambda.Tests.Control.Concurrent
{
    [TestFixture]
    public class AgentTests
    {
        [Test]
        public void AgentRepliesAsynchronousViaReplyChannel()
        {
            var testAgent = TestAgent.Start(Unit.Default, (inbox, u) =>
            {
                var msg = inbox.Receive().RunSynchronously();
                var str = msg.Item1;
                var ch = msg.Item2;
                ch.Reply(str + "-Ch");
                return u;
            });
            var reply = testAgent.PostAndAsyncReply(x => new ImmutableTuple<string, AsyncReplyChannel<string>>("Test2", x));
            Assert.AreEqual("Test2-Ch", reply.RunSynchronously());
        }

        [Test]
        public void AgentReturnsSynchronousViaReplyChannel()
        {
            var testAgent = TestAgent.Start(Unit.Default, (inbox, u) =>
            {
                var msg = inbox.Receive().RunSynchronously();
                var str = msg.Item1;
                var ch = msg.Item2;
                ch.Reply(str + "-Ch");
                return u;
            });
            var reply = testAgent.PostAndReply(x => new ImmutableTuple<string, AsyncReplyChannel<string>>("Test1", x));
            Assert.AreEqual("Test1-Ch", reply);
        }
    }
}