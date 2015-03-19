using System;
using System.Collections.Generic;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public class Agent<TM, TR>
    {
        private readonly Queue<TM> _inbox = new Queue<TM>();

        private volatile Boolean _shouldCancel;

        private static Async<Unit> Watchdog<TS>(Agent<TM, TR> inbox, Func<Agent<TM, TR>, TS, TS> body, TS state)
        {
            return () =>
            {
                var mstate = state;
                inbox.IsRunning = true;
                while (!inbox.CancellationRequested())
                {
                    mstate = body(inbox, mstate);
                }
                inbox.IsRunning = false;
                return Unit.Default;
            };
        }

        public static Agent<TM, TR> Start<TS>(TS state, Func<Agent<TM, TR>, TS, TS> body)
        {
            var agent = new Agent<TM, TR>();
            Watchdog(agent, body, state).Start();
            return agent;
        }

        public static Async<Agent<TM, TR>> StartAsync<TS>(TS state, Func<Agent<TM, TR>, TS, TS> body)
        {
            return () =>
            {
                var agent = new Agent<TM, TR>();
                Watchdog(agent, body, state).RunSynchronously();
                return agent;
            };

        }

        public Boolean CancellationRequested()
        {
            return _shouldCancel;
        }

        public bool IsRunning { get; private set; }
        
        public void Cancel()
        {
            CancelAsync().RunSynchronously();
        }

        public Async<Unit> CancelAsync()
        {
            return () =>
            {
                _shouldCancel = true;
                while (IsRunning) {}
                return Unit.Default;
            };
        }

        public Unit Post(TM msg)
        {
            return Async.Return(() =>
            {
                lock (_inbox)
                {
                    _inbox.Enqueue(msg);
                    Monitor.Pulse(_inbox);
                }
                return Unit.Default;
            }).Start();
        }

        public TR PostAndReply(Func<AsyncReplyChannel<TR>, TM> f)
        {
            var handle = new AsyncEventHandle<TR>();
            Post(f(new AsyncReplyChannel<TR>(handle.Complete)));
            handle.DoneEvent.WaitOne();
            return handle.Result();
        }

        public Async<TR> PostAndAsyncReply(Func<AsyncReplyChannel<TR>, TM> f)
        {
            return () => PostAndReply(f);
        }

        public Async<TM> Receive()
        {
            return () =>
            {
                lock (_inbox)
                {
                    while (_inbox.Count == 0)
                    {
                        Monitor.Wait(_inbox);
                    }
                    return _inbox.Dequeue();
                }
            };
        }
    }
}