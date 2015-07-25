using System;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public sealed class ThreadPoolComputationQueue : AsyncComputationQueue
    {
        private readonly Agent<Unit, Unit> _agent;

        public ThreadPoolComputationQueue()
        {
            _agent = Agent<Unit, Unit>.Start(Unit.Default,
                (inbox, handlers) =>
                {
                    var msg = inbox.Receive().RunSynchronously();
                    return Pattern<Unit>
                            .Match(msg)
                            .Default(Unit.Default)
                            .Run();
                });
        }

        public Unit Enqueue(Async<Unit> a)
        {
            ThreadPool.QueueUserWorkItem(_=>a.RunSynchronously());
            return Unit.Default;
        }
    }
}
