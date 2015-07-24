using System;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public sealed class ThreadPoolComputationQueue : AsyncComputationQueue
    {
        public Unit Enqueue<T>(Async<T> a)
        {
            ThreadPool.QueueUserWorkItem(_=>a.RunSynchronously());
            return Unit.Default;
        }
    }
}
