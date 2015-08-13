using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    public delegate Async<TConsumed> Consumer<TProduct, TConsumed>(TProduct product);

    public interface Producer<TInput, TProduct>
    {
        Async<Unit> Produce(TInput input);
        Async<Maybe<TConsumed>> Consume<TConsumed>(Consumer<TProduct, TConsumed> consumer);
    }

    public static class Producer
    {
        public static Async<ImmutableList<TConsumed>> ConsumeMany<TInput, TProduct, TConsumed>(
            this Producer<TInput, TProduct> producer, Consumer<TProduct, TConsumed> consumer)
        {
            return () =>
            {
                var consumed = ImmutableList.Empty<TConsumed>();
                var done = false;
                while (!done)
                {
                    var x = producer.Consume(consumer).RunSynchronously();
                    if (x.IsJust())
                    {
                        consumed.Add(x.ValueOr(default(TConsumed)));
                    }
                    else
                    {
                        done = true;
                    }
                }
                return consumed;
            };
        }
    }
}
