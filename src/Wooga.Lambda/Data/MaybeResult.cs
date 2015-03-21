using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Wooga.Lambda.Data
{
    public abstract class MaybeResult<T>
    {
        public abstract T Value();

        public abstract Boolean HasValue();

        internal sealed class Just : MaybeResult<T>
        {
            private readonly T _v;

            public Just(T v)
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

        internal sealed class Nothing : MaybeResult<T>
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
