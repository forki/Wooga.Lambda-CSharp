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