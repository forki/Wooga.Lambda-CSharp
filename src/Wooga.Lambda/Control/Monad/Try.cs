using System;

namespace Wooga.Lambda.Control.Monad
{
    /// <summary>
    ///     A delegate to label lambdas as Try
    /// </summary>
    /// <typeparam name="T">Result type</typeparam>
    /// <returns>Either lambda wrapping the computation with System.Exception as default failure type</returns>
    public delegate Either<Exception, T> Try<T>();

    public static class Try
    {
        public static Try<T2> Bind<T1, T2>(this Try<T1> m, Func<T1, Try<T2>> f)
        {
            return () =>
            {
                var res = m();
                return res.IsRight() ? f(res.FromRight()).Invoke() : Either.Left<Exception, T2>(res.FromLeft());
            };
        }

        public static Try<T2> Then<T1, T2>(this Try<T1> m, Try<T2> h)
        {
            return m.Bind(_ => h);
        }

        public static Try<T> Return<T>(Func<T> v)
        {
            return () =>
            {
                try
                {
                    return Either.Right<Exception, T>(v());
                }
                catch (Exception e)
                {
                    return Either.Left<Exception, T>(e);
                }
            };
        }
    }
}