using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public sealed class ThreadComputationQueue : AsyncComputationQueue
    {
        private readonly Agent<AgentMsg, Unit> Agent;
        private readonly uint ConcurrentThreads;

        public ThreadComputationQueue(uint concurrentThreads)
        {
            ConcurrentThreads = concurrentThreads;
            Agent = Agent<AgentMsg, Unit>.Start((uint)0,
                (inbox, threads) =>
                {
                    var msg = threads < ConcurrentThreads
                        ? inbox.Receive().RunSynchronously()
                        : inbox.Scan(m => m is CompletedComputation).RunSynchronously();

                    return Pattern<uint>
                            .Match(msg)
                            .Case<EnqueueComputation>(c =>
                            {
                                var thread = new Thread(() =>
                                    c.Computation
                                    .Catch()
                                    .Then(() => Agent.Post(new CompletedComputation()))
                                    .RunSynchronously());
                                thread.Start();

                                return threads + 1;
                            })
                            .Case<CompletedComputation>(_=>threads-1)
                            .Default(threads)
                            .Run();
                });
        }

        public Unit Enqueue(Async<Unit> a)
        {
            return Agent.Post(new EnqueueComputation(a));
        }

        private interface AgentMsg
        {
        }

        private struct EnqueueComputation : AgentMsg
        {
            public readonly Async<Unit> Computation;

            public EnqueueComputation(Async<Unit> computation)
            {
                Computation = computation;
            }
        }

        private struct CompletedComputation : AgentMsg
        {
        }
    }


}
