using System;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public sealed class ThreadPoolComputationQueue : AsyncComputationQueue
    {
        public Unit Enqueue(Async<Unit> a)
        {
            ThreadPool.QueueUserWorkItem(_=>a.RunSynchronously());
            return Unit.Default;
        }
    }
}
