using System;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Control
{
    public delegate Either<TResult, TValue> PatterMatch<TValue, TResult>();

    public static class Pattern<TResult>
    {
        public static MatchCase<TValue> Match<TValue>(TValue x)
        {
            return new MatchCase<TValue>(() => Either.Right<TResult, TValue>(x));
        }

        public sealed class MatchCase<TValue>
        {
            private readonly PatterMatch<TValue, TResult> _m;

            internal MatchCase(PatterMatch<TValue, TResult> m)
            {
                _m = m;
            }

            public MatchCase<TValue> Case(Func<TValue, bool> t, Func<TValue, TResult> f)
            {
                return new MatchCase<TValue>(() => _m().Bind(y => Either.When(() => !t(y), () => f(y), () => y)));
            }

            public MatchCase<TValue> Case(TValue x, Func<TValue, TResult> f)
            {
                return Case(v => x.Equals(v), f);
            }

            public MatchCase<TValue> Case<TValueType>(Func<TValueType, TResult> f) where TValueType : TValue
            {
                return Case(v => v is TValueType, x => f((TValueType) x));
            }

            public MatchCase<TValue> Case<TValueType>(Func<TValueType, bool> t, Func<TValueType, TResult> f) where TValueType : TValue
            {
                return Case(v => v is TValueType && t((TValueType) v), x => f((TValueType)x));
            }

            public MatchCase<TValue> Default(Func<TValue, TResult> f)
            {
                return Case(_ => true, f);
            }

            public MatchCase<TValue> Default(TResult v)
            {
                return Case(_ => true, _ => v);
            }

            public TResult Run()
            {
                return _m().FromLeft();
            }
        }
    }
}