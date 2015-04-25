using System;
using System.Collections.Generic;
using System.Threading;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    /// <summary>
    ///     Actor/Agent implementation similar to Control.Async.MailboxProcessor in F#
    /// </summary>
    /// <typeparam name="TM">The type of the message consumed by the agent.</typeparam>
    /// <typeparam name="TR">The type of the response produced by the agent.</typeparam>
    public class Agent<TM, TR>
    {
        private readonly Queue<TM> _inbox = new Queue<TM>();
        private volatile bool _shouldCancel;

        /// <summary>
        ///     Gets a value indicating whether this agent is running.
        /// </summary>
        /// <value>
        ///     <c>true</c> if this agent is running; otherwise, <c>false</c>.
        /// </value>
        public bool IsRunning { get; private set; }

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

        /// <summary>
        ///     Creates and starts an agent.
        /// </summary>
        /// <typeparam name="TS">The type of the state.</typeparam>
        /// <param name="state">The initial state.</param>
        /// <param name="body">The body to be executed.</param>
        /// <returns>The agent.</returns>
        public static Agent<TM, TR> Start<TS>(TS state, Func<Agent<TM, TR>, TS, TS> body)
        {
            var agent = new Agent<TM, TR>();
            Watchdog(agent, body, state).Start();
            return agent;
        }

        /// <summary>
        ///     Creates and starts an agent.
        /// </summary>
        /// <typeparam name="TS">The type of the state.</typeparam>
        /// <param name="state">The initial state.</param>
        /// <param name="body">The body to be executed.</param>
        /// <returns>An async computation producing & starting the agent.</returns>
        public static Async<Agent<TM, TR>> StartAsync<TS>(TS state, Func<Agent<TM, TR>, TS, TS> body)
        {
            return () =>
            {
                var agent = new Agent<TM, TR>();
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

        /// <summary>
        ///     Posts a message to an agent and await a reply on the channel, synchronously.
        /// </summary>
        /// <param name="f">The lambda providing the message.</param>
        /// <returns>The agents reply</returns>
        public TR PostAndReply(Func<AsyncReplyChannel<TR>, TM> f)
        {
            var handle = new AsyncEventHandle<TR>();
            Post(f(new AsyncReplyChannel<TR>(handle.Complete)));
            handle.DoneEvent.WaitOne();
            return handle.Result();
        }

        /// <summary>
        ///     Posts a message to an agent and await a reply on the channel, asynchronously.
        /// </summary>
        /// <param name="f">The lambda providing the message.</param>
        /// <returns>An async computation providing the agents reply.</returns>
        public Async<TR> PostAndAsyncReply(Func<AsyncReplyChannel<TR>, TM> f)
        {
            return () => PostAndReply(f);
        }

        /// <summary>
        ///     Waits for a message. This will consume the first message in arrival order.
        /// </summary>
        /// <returns>An async computation providing a message.</returns>
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