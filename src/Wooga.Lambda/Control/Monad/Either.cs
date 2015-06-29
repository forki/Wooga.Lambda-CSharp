using System;

namespace Wooga.Lambda.Control.Monad
{
    public struct Either<TLeft,TRight>
    {
        internal TLeft LeftValue;
        internal TRight RightValue;
        internal bool IsRight;

        internal Either(TLeft leftValue, TRight rightValue, bool isRight)
        {
            LeftValue = leftValue;
            RightValue = rightValue;
            IsRight = isRight;
        }
    }

    public static class Either
    {
        // Monad functions

        public static Either<TLeft, TRight> Return<TLeft, TRight>(TRight v)
        {
            return Right<TLeft, TRight>(v);
        }

        public static Either<TLeft, TRight2> Bind<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m,
            Func<TRight, Either<TLeft, TRight2>> f)
        {
            return m.IsLeft() ? Left<TLeft, TRight2>(m.LeftValue) : f(m.RightValue);
        }

        public static Either<TLeft, TRight2> Then<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m,
            Either<TLeft, TRight2> h)
        {
            return m.Bind(_ => h);
        }

        // Functor functions

        public static Either<TLeft, TRight2> Map<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m, Func<TRight, TRight2> f)
        {
            return m.IsLeft()
                ? Either.Left<TLeft, TRight2>(m.LeftValue)
                : Either.Right<TLeft, TRight2>(f(m.RightValue));
        }

        // Either functions

        public static Either<TLeft, TRight> Left<TLeft, TRight>(TLeft m)
        {
            return new Either<TLeft, TRight>(m,default(TRight),false);
        }

        public static Either<TLeft, TRight> Right<TLeft, TRight>(TRight m)
        {
            return new Either<TLeft, TRight>(default(TLeft), m, true);
        }

        public static bool IsRight<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return m.IsRight;
        }

        public static TLeft FromLeft<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            if(m.IsRight) throw new InvalidOperationException("Left value of Either.Right");
            return m.LeftValue;
        }

        public static bool IsLeft<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return !m.IsRight;
        }

        public static TRight FromRight<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            if (!m.IsRight) throw new InvalidOperationException("Right value of Either.Left");
            return m.RightValue;
        }

        public static TResult FromEither<TLeft, TRight, TResult>(this Either<TLeft, TRight> m, Func<TLeft, TResult> fl,
            Func<TRight, TResult> fr)
        {
            return m.IsLeft() ? fl(m.LeftValue) : fr(m.RightValue);
        }

        public static Either<TLeft, TRight> Try<TLeft, TRight>(Func<Exception, TLeft> fl, Func<TRight> fr)
        {
            try
            {
                return Right<TLeft, TRight>(fr());
            }
            catch (Exception e)
            {
                return Left<TLeft, TRight>(fl(e));
            }
        }

        public static Either<Exception, T> Try<T>(Func<T> f)
        {
            return Try(e => e, f);
        }

        public static Either<TLeft, TRight> When<TLeft, TRight>(Func<bool> p, Func<TLeft> fl, Func<TRight> fr)
        {
            return p() ? Right<TLeft, TRight>(fr()) : Left<TLeft, TRight>(fl());
        }
    }
}
