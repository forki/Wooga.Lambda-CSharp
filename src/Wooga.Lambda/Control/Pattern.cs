using System;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Control
{
    public delegate Either<TResult, TValue> PatterMatch<TValue, TResult>();

    public static class Pattern<TValue, TResult>
    {
        public static MatchCase Match(TValue x)
        {
            return new MatchCase(() => Either.Right<TResult, TValue>(x));
        }

        public sealed class MatchCase
        {
            private readonly PatterMatch<TValue, TResult> _m;

            internal MatchCase(PatterMatch<TValue, TResult> m)
            {
                _m = m;
            }

            public MatchCase Case(Func<TValue, bool> t, Func<TValue, TResult> f)
            {
                return
                    new MatchCase(
                        () =>
                            _m().Bind(y => t(y) ? Either.Left<TResult, TValue>(f(y)) : Either.Right<TResult, TValue>(y)));
            }

            public MatchCase Case(TValue x, Func<TValue, TResult> f)
            {
                return Case(v => x.Equals(v), f);
            }

            public MatchCase Case<TValueType>(Func<TValue, bool> t, Func<TValue, TResult> f)
            {
                return Case(v => v is TValueType && t(v), f);
            }

            public MatchCase Case<TValueType>(Func<TValue, TResult> f)
            {
                return Case(v => v is TValueType, f);
            }

            public MatchCase Default(Func<TValue, TResult> f)
            {
                return Case(_ => true, f);
            }

            public MatchCase Default(TResult v)
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