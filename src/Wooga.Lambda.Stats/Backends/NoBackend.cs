using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Stats.Backends
{
    public class NoBackend : Backend
    {
        public static Backend Create()
        {
            return new NoBackend();
        }
        
        public Async<Unit> Send(ImmutableList<byte> bs)
        {
            throw new NotImplementedException();
        }
    }
}
