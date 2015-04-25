using System;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Monad
{
    /// <summary>
    /// A delegate to label lambdas as Either
    /// </summary>
    /// <typeparam name="TLeft">The type of the left/failure value.</typeparam>
    /// <typeparam name="TRight">The type of the right/success value.</typeparam>
    /// <returns>EitherData containing either a success or failure value.</returns>
    public delegate EitherResult<TLeft, TRight> Either<TLeft, TRight>();

    public static class Either
    {
        public static Either<TLeft, TRight> Left<TLeft, TRight>(TLeft m)
        {
            return () => new EitherResult<TLeft, TRight>.Left(m);
        }

        public static Either<TLeft, TRight> Right<TLeft, TRight>(TRight m)
        {
            return () => new EitherResult<TLeft, TRight>.Right(m);
        }

        public static Boolean IsRight<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return m().IsRight();
        }

        public static TLeft FromLeft<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return m().LeftValue();
        }

        public static Boolean IsLeft<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return m().IsLeft();
        }

        public static TRight FromRight<TLeft, TRight>(this Either<TLeft, TRight> m)
        {
            return m().RightValue();
        }

        public static TResult FromEither<TLeft, TRight, TResult>(this Either<TLeft, TRight> m, Func<TLeft, TResult> fl,
            Func<TRight, TResult> fr)
        {
            var r = m();
            return r.IsLeft() ? fl(r.LeftValue()) : fr(r.RightValue());
        }

        public static Either<TLeft, TRight2> Bind<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m,
            Func<TRight, Either<TLeft, TRight2>> f)
        {
            var res = m();
            return res.IsLeft() ? Left<TLeft, TRight2>(res.LeftValue()) : f(res.RightValue());
        }

        public static Either<TLeft, TRight2> Then<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m,
            Either<TLeft, TRight2> h)
        {
            return m.Bind(_ => h);
        }

        public static Either<TLeft, TRight> Return<TLeft, TRight>(Func<TRight> f)
        {
            return Right<TLeft, TRight>(f());
        }

        public static Either<TLeft, TRight> Return<TLeft, TRight>(TRight v)
        {
            return Right<TLeft, TRight>(v);
        }

        public static Either<TLeft, TRight> Try<TLeft, TRight>(Func<Exception,TLeft> fl, Func<TRight> fr)
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

    public static class EitherFunctor
    {
        public static Either<TLeft, TRight2> FMap<TLeft, TRight, TRight2>(this Either<TLeft, TRight> m,
            Func<TRight, TRight2> f)
        {
            var res = m();
            return res.IsLeft()
                ? Either.Left<TLeft, TRight2>(res.LeftValue())
                : Either.Right<TLeft, TRight2>(f(res.RightValue()));
        }
    }
}