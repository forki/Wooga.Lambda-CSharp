using System.Collections.Generic;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    /// <summary>
    /// A method that consumes a produced value asynchronously 
    /// </summary>
    /// <typeparam name="TProduct">type of produced value</typeparam>
    /// <typeparam name="TConsumed">type of consumed value</typeparam>
    /// <param name="product">produced value</param>
    /// <returns>Returns a maybe indicating success of consumption</returns>
    public delegate Async<Maybe<TConsumed>> Consumer<TProduct, TConsumed>(TProduct product);

    /// <summary>
    /// The producer provides a way to turn input into a product and handles the consumption of them
    /// </summary>
    /// <typeparam name="TInput"></typeparam>
    /// <typeparam name="TProduct"></typeparam>
    public interface Producer<TInput, TProduct>
    {
        Async<Unit> Produce(TInput input);
        Async<Maybe<TConsumed>> Consume<TConsumed>(Consumer<TProduct, TConsumed> consumer);
    }

    public static class Producer
    {
        public static Async<IEnumerable<TConsumed>> Map<TInput, TProduct, TConsumed>(
            this Producer<TInput, TProduct> producer, Consumer<TProduct, TConsumed> consumer)
        {
            return () =>
            {
                var consumed = System.Collections.Immutable.ImmutableList<TConsumed>.Empty;
                var done = false;
                while (!done)
                {
                    var x = producer.Consume(consumer).RunSynchronously();
                    if (x.IsJust())
                    {
                        consumed = consumed.Add(x.ValueOr(default(TConsumed)));
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
