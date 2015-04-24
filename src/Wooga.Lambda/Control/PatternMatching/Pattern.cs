using System;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Control.PatternMatching
{
    public delegate Either<TResult, TValue> PatterMatch<TValue, TResult>();

    public static class Pattern
    {
        public static PatterMatch<TValue, TResult> Match<TValue, TResult>(TValue x)
        {
            return () => Either.Right<TResult, TValue>(x);
        }

        public static PatterMatch<TValue, TResult> Case<TValue, TResult>(this PatterMatch<TValue, TResult> m, Func<TValue, bool> t, Func<TValue, TResult> f)
        {
            return () => m().Bind(y => t(y) ? Either.Left<TResult, TValue>(f(y)) : Either.Right<TResult, TValue>(y));
        }

        public static PatterMatch<TValue, TResult> Default<TValue, TResult>(this PatterMatch<TValue, TResult> m, Func<TResult> f)
        {
            return Case(m,_ => true, _ => f());
        }

        public static TResult Evaluate<TValue, TResult>(this PatterMatch<TValue, TResult> m)
        {
            return m().FromLeft();
        }

    }
}
