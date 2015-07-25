using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    /// <summary>
    ///     Actor/Agent implementation similar to Control.Async.MailboxProcessor in F#
    /// </summary>
    /// <typeparam name="TMessage">The type of the message consumed by the agent.</typeparam>
    /// <typeparam name="TReply">The type of the response produced by the agent.</typeparam>
    public class Agent<TMessage, TReply>
    {
        private readonly Queue<TMessage> _inbox = new Queue<TMessage>();
        private volatile bool _shouldCancel;

        /// <summary>
        ///     Gets a value indicating whether this agent is running.
        /// </summary>
        /// <value>
        ///     <c>true</c> if this agent is running; otherwise, <c>false</c>.
        /// </value>
        public bool IsRunning { get; private set; }

        private static Async<Unit> Watchdog<TS>(Agent<TMessage, TReply> inbox, Func<Agent<TMessage, TReply>, TS, TS> body, TS state)
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

        /// <summary>
        ///     Creates and starts an agent.
        /// </summary>
        /// <typeparam name="TState">The type of the state.</typeparam>
        /// <param name="state">The initial state.</param>
        /// <param name="body">The body to be executed.</param>
        /// <returns>The agent.</returns>
        public static Agent<TMessage, TReply> Start<TState>(TState state, Func<Agent<TMessage, TReply>, TState, TState> body)
        {
            var agent = new Agent<TMessage, TReply>();
            new Thread(_ => Watchdog(agent, body, state).RunSynchronously()).Start();
            return agent;
        }

        /// <summary>
        ///     Creates and starts an agent.
        /// </summary>
        /// <typeparam name="TState">The type of the state.</typeparam>
        /// <param name="state">The initial state.</param>
        /// <param name="body">The body to be executed.</param>
        /// <returns>An async computation producing & starting the agent.</returns>
        public static Async<Agent<TMessage, TReply>> StartAsync<TState>(TState state, Func<Agent<TMessage, TReply>, TState, TState> body)
        {
            return () =>
            {
                var agent = new Agent<TMessage, TReply>();
                Watchdog(agent, body, state).RunSynchronously();
                return agent;
            };
        }

        /// <summary>
        ///     Indicates if the agent should cancel and stop
        /// </summary>
        public bool CancellationRequested()
        {
            return _shouldCancel;
        }

        /// <summary>
        ///     Cancels this agent.
        /// </summary>
        public void Cancel()
        {
            CancelAsync().RunSynchronously();
        }

        /// <summary>
        ///     Cancels this agent.
        /// </summary>
        /// <returns>Async computation that cancels the agent.</returns>
        public Async<Unit> CancelAsync()
        {
            return () =>
            {
                _shouldCancel = true;
                while (IsRunning)
                {
                }
                return Unit.Default;
            };
        }

        /// <summary>
        ///     Posts a message to the message queue of the Agent, asynchronously.
        /// </summary>
        /// <param name="msg">The message to post.</param>
        public Unit Post(TMessage msg)
        {
            new Thread(() =>
            {
                lock (_inbox)
                {
                    _inbox.Enqueue(msg);
                    Monitor.Pulse(_inbox);
                }
            })
            .Start();
            return Unit.Default;
        }

        /// <summary>
        ///     Posts a message to an agent and await a reply on the channel, synchronously.
        /// </summary>
        /// <param name="f">The lambda providing the message.</param>
        /// <returns>The agents reply</returns>
        public TReply PostAndReply(Func<AsyncReplyChannel<TReply>, TMessage> f)
        {
            var handle = new AsyncEventHandle<TReply>();
            Post(f(new AsyncReplyChannel<TReply>(handle.Complete)));
            handle.DoneEvent.WaitOne();
            return handle.Result();
        }

        /// <summary>
        ///     Posts a message to an agent and await a reply on the channel, asynchronously.
        /// </summary>
        /// <param name="f">The lambda providing the message.</param>
        /// <returns>An async computation providing the agents reply.</returns>
        public Async<TReply> PostAndAsyncReply(Func<AsyncReplyChannel<TReply>, TMessage> f)
        {
            return () => PostAndReply(f);
        }

        /// <summary>
        ///     Waits for a message. This will consume the first message in arrival order.
        /// </summary>
        /// <returns>An async computation providing a message.</returns>
        public Async<TMessage> Receive()
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

        public Async<TMessage> Scan(Func<TMessage, bool> f)
        {
            return () =>
            {
                var msg = Maybe.Nothing<TMessage>();
                lock (_inbox)
                {
                    while (msg.IsNothing())
                    {
                        Monitor.Wait(_inbox);
                        msg = Find(f);
                    }
                }

                return msg.ValueOr(()=>{throw new Exception("shouldn't be nothing");});
            };
        }

        public Maybe<TMessage> Find(Func<TMessage, bool> f)
        {
            var fmsg = Maybe.Nothing<TMessage>();
            lock (_inbox)
            {
                var msgs = _inbox.ToList();
                _inbox.Clear();
                foreach (var msg in msgs)
                {
                    if (fmsg.IsNothing() && f(msg))
                    {
                        fmsg = Maybe.Just(msg);
                    }
                    else
                    {
                        _inbox.Enqueue(msg);
                    }
                }
                
            }
            return fmsg;
        }
    }
}