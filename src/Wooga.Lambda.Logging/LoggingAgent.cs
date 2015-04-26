using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Logging
{
    /// <summary>
    ///     An agent for logging with customizable handlers
    /// </summary>
    public class LoggingAgent
    {
        private static volatile LoggingAgent instance;
        private static readonly object syncRoot = new object();
        private readonly Agent<LogMsg, ImmutableList<Func<LogMsg, Unit>>> _agent;

        private LoggingAgent()
        {
            _agent = Agent<LogMsg, ImmutableList<Func<LogMsg, Unit>>>.Start(new ImmutableList<Func<LogMsg, Unit>>(),
                (inbox, handlers) =>
                {
                    var msg = inbox.Receive().RunSynchronously();

                    if (msg is LogMsg.AddHandler)
                        return handlers.Add(((LogMsg.AddHandler) msg).Handler);

                    return handlers.Map(handler =>
                    {
                        handler(msg);
                        return handler;
                    });
                });
        }

        public static LoggingAgent SharedAgent
        {
            get
            {
                if (instance == null)
                {
                    lock (syncRoot)
                    {
                        if (instance == null)
                            instance = new LoggingAgent();
                    }
                }
                return instance;
            }
        }

        private Unit PostLog(LogMsg msg)
        {
            _agent.Post(msg);
            return Unit.Default;
        }

        public Unit Debug(string msg)
        {
            PostLog(new LogMsg.Debug {Message = msg});
            return Unit.Default;
        }

        public Unit Info(string msg)
        {
            PostLog(new LogMsg.Info {Message = msg});
            return Unit.Default;
        }

        public Unit Warn(string msg)
        {
            PostLog(new LogMsg.Warn {Message = msg});
            return Unit.Default;
        }

        public Unit Error(string msg)
        {
            PostLog(new LogMsg.Error {Message = msg});
            return Unit.Default;
        }

        public Unit Fatal(string msg)
        {
            PostLog(new LogMsg.Fatal {Message = msg});
            return Unit.Default;
        }

        public Unit AddHandler(Func<LogMsg, Unit> handler)
        {
            PostLog(new LogMsg.AddHandler {Handler = handler});
            return Unit.Default;
        }

        public abstract class LogMsg
        {
            public string Message { get; internal set; }

            public override string ToString()
            {
                return Message;
            }

            internal sealed class Debug : LogMsg
            {
            };

            internal sealed class Info : LogMsg
            {
            };

            internal sealed class Warn : LogMsg
            {
            };

            internal sealed class Error : LogMsg
            {
            };

            internal sealed class Fatal : LogMsg
            {
            };

            internal sealed class AddHandler : LogMsg
            {
                public Func<LogMsg, Unit> Handler { get; internal set; }
            }
        }
    }
}