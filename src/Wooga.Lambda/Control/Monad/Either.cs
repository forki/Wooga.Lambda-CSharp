using System;

namespace Wooga.Lambda.Control.Monad
{
    public struct Either<TSuccess,TFailure>
    {
        internal TFailure FailureValue;
        internal TSuccess SuccessValue;
        internal bool IsSuccess;

        internal Either(TFailure failureValue, TSuccess successValue, bool isSuccess)
        {
            FailureValue = failureValue;
            SuccessValue = successValue;
            IsSuccess = isSuccess;
        }
    }

    public static class Either
    {
        // Monad functions

        public static Either<TSuccess,TFailure> Return<TSuccess,TFailure>(TSuccess v)
        {
            return Success<TSuccess,TFailure>(v);
        }

        public static Either<TSuccessOutput,TFailure> Bind<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput,TFailure> m, Func<TSuccessInput, Either<TSuccessOutput,TFailure>> f)
        {
            return m.IsFailure() ? Failure<TSuccessOutput,TFailure>(m.FailureValue) : f(m.SuccessValue);
        }

        public static Either<TSuccessOutput,TFailure> Then<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput,TFailure> m,
            Either<TSuccessOutput,TFailure> h)
        {
            return m.Bind(_ => h);
        }

        // Functor functions

        public static Either<TSuccessOutput,TFailure> Map<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput, TFailure> m, Func<TSuccessInput, TSuccessOutput> f)
        {
            return m.IsFailure()
                ? Either.Failure<TSuccessOutput, TFailure>(m.FailureValue)
                : Either.Success<TSuccessOutput, TFailure>(f(m.SuccessValue));
        }

        // Either functions

        public static Either<TSuccess, TFailure> Failure<TSuccess, TFailure>(TFailure m)
        {
            return new Either<TSuccess, TFailure>(m,default(TSuccess),false);
        }

        public static Either<TSuccess, TFailure> Success<TSuccess, TFailure>(TSuccess m)
        {
            return new Either<TSuccess, TFailure>(default(TFailure), m, true);
        }

        public static bool IsSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m)
        {
            return m.IsSuccess;
        }

        public static bool IsFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m)
        {
            return !m.IsSuccess;
        }

        public static TResult From<TSuccess, TFailure, TResult>(this Either<TSuccess, TFailure> m, Func<TSuccess, TResult> fr, Func<TFailure, TResult> fl)
        {
            return !m.IsSuccess ? fl(m.FailureValue) : fr(m.SuccessValue);
        }

        public static TFailure FromFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TFailure dflt)
        {
            return m.IsSuccess ? dflt : m.FailureValue;
        }

        public static TFailure FromFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TFailure> dflt)
        {
            return m.IsSuccess ? dflt() : m.FailureValue;
        }

        public static TSuccess FromSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TSuccess dflt)
        {
            return m.IsSuccess ? m.SuccessValue : dflt;   
        }

        public static TSuccess FromSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TSuccess> dflt)
        {
            return m.IsSuccess ? m.SuccessValue : dflt();
        }

        public static Either<TSuccess, TFailure> Try<TSuccess, TFailure>(Func<Exception, TFailure> fl, Func<TSuccess> fr)
        {
            try
            {
                return Success<TSuccess, TFailure>(fr());
            }
            catch (Exception e)
            {
                return Failure<TSuccess, TFailure>(fl(e));
            }
        }

        public static Either<T, Exception> Try<T>(Func<T> f)
        {
            return Try(e => e, f);
        }

        public static Either<TSuccess, TFailure> When<TSuccess, TFailure>(Func<bool> p, Func<TFailure> fl, Func<TSuccess> fr)
        {
            return p() ? Success<TSuccess, TFailure>(fr()) : Failure<TSuccess, TFailure>(fl());
        }
    }
}
