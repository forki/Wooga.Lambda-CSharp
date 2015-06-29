using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Handlers = Wooga.Lambda.Data.ImmutableList<Wooga.Lambda.Logging.Log.Handler>;

namespace Wooga.Lambda.Logging
{
    /// <summary>
    ///     An agent for logging with customizable handlers
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
            _agent = Agent<AgentMsg, Unit>.Start(new Handlers(),
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
            return PostLog(new Msg {Message = msg, Level = Level.Debug});
        }

        public Unit Info(string msg)
        {
            return PostLog(new Msg {Message = msg, Level = Level.Info});
        }

        public Unit Warn(string msg)
        {
            return PostLog(new Msg {Message = msg, Level = Level.Warn});
        }

        public Unit Error(string msg)
        {
            return PostLog(new Msg {Message = msg, Level = Level.Error});
        }

        public Unit Fatal(string msg)
        {
            return PostLog(new Msg {Message = msg, Level = Level.Fatal});
        }

        public Unit AddHandler(Handler handler)
        {
            return PostLog(new AddHandlerMsg {Handler = handler});
        }

        public struct Msg : AgentMsg
        {
            public Level Level { get; internal set; }
            public string Message { get; internal set; }
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