using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using TestAgent = Wooga.Lambda.Control.Concurrent.Agent<Wooga.Lambda.Data.Tuple<System.String, Wooga.Lambda.Control.Concurrent.AsyncReplyChannel<System.String>>, System.String>;

namespace Wooga.Lambda.Tests.Control.Concurrent
{
    [TestFixture]
    public class AgentTests
    {
        [Test]
        public void AgentReturnsSynchronousViaReplyChannel()
        {
            var testAgent = TestAgent.Start<Unit>(Unit.Default, (inbox, u) =>
            {
                var msg = inbox.Receive().RunSynchronously();
                var str = msg.Item1;
                var ch = msg.Item2;
                ch.Reply(str+"-Ch");
                return u;
            });
            var reply = testAgent.PostAndReply(x => new Tuple<string, AsyncReplyChannel<string>>("Test1",x));
            Assert.AreEqual("Test1-Ch", reply);
        }

        [Test]
        public void AgentRepliesAsynchronousViaReplyChannel()
        {
            var testAgent = TestAgent.Start<Unit>(Unit.Default, (inbox, u) =>
            {
                var msg = inbox.Receive().RunSynchronously();
                var str = msg.Item1;
                var ch = msg.Item2;
                ch.Reply(str + "-Ch");
                return u;
            });
            var reply = testAgent.PostAndAsyncReply(x => new Tuple<string, AsyncReplyChannel<string>>("Test2", x));
            Assert.AreEqual("Test2-Ch", reply.RunSynchronously());
        }
    }
}
