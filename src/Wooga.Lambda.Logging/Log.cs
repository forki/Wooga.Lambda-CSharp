using System;
using System.Collections.Immutable;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Handlers = System.Collections.Immutable.ImmutableList<Wooga.Lambda.Logging.Log.Handler>;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Logging
{
    /// <summary>
    ///     An agent for logging Msg.With customizable handlers
    /// </summary>
    public class Log
    {
        public delegate Unit Handler(Msg x);

        public enum Level
        {
            Debug,
            Info,
            Warn,
            Error,
            Fatal
        }   

        public static readonly Log Shared = new Log();

        private readonly Agent<AgentMsg, Unit> _agent;

        private Log()
        {
            _agent = Agent<AgentMsg, Unit>.Start(ImmutableList<Handler>.Empty,
                (inbox, handlers) =>
                {
                    var msg = inbox.Receive().RunSynchronously();
                    return  Pattern<Handlers>
                            .Match(msg)
                            .Case<AddHandlerMsg>(h => handlers.Add(h.Handler))
                            .Case<Msg>(l =>
                            {
                                foreach (var handler in handlers)
                                {
                                    handler(l);
                                }
                                return handlers;
                            })
                            .Default(handlers)
                            .Run();
                });
        }

        private Unit PostLog(AgentMsg agentMsg)
        {
            return _agent.Post(agentMsg);
        }

        public Unit Debug(string msg)
        {
            return PostLog(Msg.With(msg,Level.Debug));
        }

        public Unit Debug(string msg, Object context)
        {
            return PostLog(Msg.With(msg, Level.Debug, context));
        }

        public Unit Info(string msg)
        {
            return PostLog(Msg.With(msg, Level.Info));
        }

        public Unit Info(string msg, Object context)
        {
            return PostLog(Msg.With(msg, Level.Info, context));
        }

        public Unit Warn(string msg)
        {
            return PostLog(Msg.With(msg, Level.Warn));
        }

        public Unit Warn(string msg, Object context)
        {
            return PostLog(Msg.With(msg, Level.Warn, context));
        }

        public Unit Error(string msg)
        {
            return PostLog(Msg.With(msg, Level.Error));
        }

        public Unit Error(string msg, Object context)
        {
            return PostLog(Msg.With(msg, Level.Error, context));
        }

        public Unit Fatal(string msg)
        {
            return PostLog(Msg.With(msg, Level.Fatal));
        }

        public Unit Fatal(string msg, Object context)
        {
            return PostLog(Msg.With(msg, Level.Fatal, context));
        }

        public Unit AddHandler(Handler handler)
        {
            return PostLog(new AddHandlerMsg {Handler = handler});
        }

        public struct Msg : AgentMsg
        {
            public Level Level { get; internal set; }
            public string Message { get; internal set; }
            public Maybe<object> Context { get; internal set; }

            public static Msg With(string message, Level level)
            {
                return new Msg {Message = message, Level = level, Context = Maybe.Nothing<Object>()};
            }

            public static Msg With(string message, Level level, Object context)
            {
                return new Msg { Message = message, Level = level, Context = Maybe.Just(context) };
            }
        }

        internal interface AgentMsg
        {
        }

        internal struct AddHandlerMsg : AgentMsg
        {
            public Handler Handler { get; internal set; }
        }
    }
}