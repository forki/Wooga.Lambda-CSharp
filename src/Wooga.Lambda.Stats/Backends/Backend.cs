using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Stats.Backends
{
    public interface Backend
    {
        Async<Unit> Send(ImmutableList<byte> data);
    }
}