using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public sealed class ThreadComputationQueue : AsyncComputationQueue
    {
        public Unit Enqueue<T>(Async<T> a)
        {
            new Thread(() => a.RunSynchronously()).Start();
            return Unit.Default;
        }
    }
}
