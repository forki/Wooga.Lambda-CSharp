using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network.Restful
{
    /// <summary>
    /// 
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface Protocol<T>
    {
        ImmutableList<byte> SerializeResource(T r);
        ImmutableList<byte> SerializeResources(ImmutableList<T> rs);
        T DeserializeResource(ImmutableList<byte> r);
        ImmutableList<T> DeserializeResources(ImmutableList<byte> rs);
    }
}