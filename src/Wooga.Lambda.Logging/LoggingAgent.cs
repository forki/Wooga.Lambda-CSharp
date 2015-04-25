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
        private readonly Agent<LogMsg, Func<LogMsg, Unit>[]> _agent;

        private LoggingAgent()
        {
            _agent = Agent<LogMsg, Func<LogMsg, Unit>[]>.Start(new Func<LogMsg, Unit>[0], (inbox, handlers) =>
            {
                var msg = inbox.Receive().RunSynchronously();
                if(msg is LogMsg.AddHandler)
                {
                    return handlers.Append(((LogMsg.AddHandler)msg).Handler);
                }
                
                foreach (var handler in handlers)
                    handler(msg);
                return handlers;
            });
        }

        private static volatile LoggingAgent instance;
        private static object syncRoot = new Object();
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

        public Unit Debug(String msg)
        {
            PostLog(new LogMsg.Debug {Message = msg});
            return Unit.Default;
        }

        public Unit Info(String msg)
        {
            PostLog(new LogMsg.Info {Message = msg});
            return Unit.Default;
        }

        public Unit Warn(String msg)
        {
            PostLog(new LogMsg.Warn {Message = msg});
            return Unit.Default;
        }

        public Unit Error(String msg)
        {
            PostLog(new LogMsg.Error {Message = msg});
            return Unit.Default;
        }

        public Unit Fatal(String msg)
        {
            PostLog(new LogMsg.Fatal {Message = msg});
            return Unit.Default;
        }

        public Unit AddHandler(Func<LogMsg, Unit> handler)
        {
            PostLog(new LogMsg.AddHandler { Handler = handler });
            return Unit.Default;
        }

        public abstract class LogMsg
        {
            public String Message { get; internal set; }

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
