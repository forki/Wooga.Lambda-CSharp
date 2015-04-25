using System;

namespace Wooga.Lambda.Data
{
    public abstract class MaybeResult<T>
    {
        public abstract T Value();
        public abstract Boolean HasValue();

        public sealed class Just : MaybeResult<T>
        {
            private readonly T _v;

            internal Just(T v)
            {
                _v = v;
            }

            public override T Value()
            {
                return _v;
            }

            public override bool HasValue()
            {
                return true;
            }
        }

        public sealed class Nothing : MaybeResult<T>
        {
            public override T Value()
            {
                throw new InvalidOperationException("Maybe.FromJust: Nothing");
            }

            public override bool HasValue()
            {
                return false;
            }
        }
    }
}