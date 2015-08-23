using System;
using System.Collections;
using System.Collections.Generic;

namespace Wooga.Lambda.Control.Monad
{
    /// <summary>
    /// The Either type represents values with two possibilities: a value of type Either 'TSuccess,'TFailure is either Failure 'TFailure or Success 'TSuccess.
    /// </summary>
    /// <typeparam name="TSuccess"></typeparam>
    /// <typeparam name="TFailure"></typeparam>
    public struct Either<TSuccess,TFailure> : IStructuralEquatable, IStructuralComparable, IComparable
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

        public override Boolean Equals(Object obj)
        {
            return ((IStructuralEquatable)this).Equals(obj, EqualityComparer<Object>.Default);
        }

        Boolean IStructuralEquatable.Equals(Object other, IEqualityComparer comparer)
        {
            if (other is Either<TSuccess, TFailure>)
            {
                if (IsSuccess && ((Either<TSuccess, TFailure>) other).IsSuccess)
                {
                    return comparer.Equals(SuccessValue, ((Either<TSuccess, TFailure>)other).SuccessValue);
                }
                else if (!IsSuccess && !((Either<TSuccess, TFailure>) other).IsSuccess)
                {
                    return comparer.Equals(FailureValue, ((Either<TSuccess, TFailure>)other).FailureValue);
                }
                return false;
            }
            return false;
        }

        Int32 IComparable.CompareTo(Object obj)
        {
            return ((IStructuralComparable)this).CompareTo(obj, Comparer<Object>.Default);
        }

        Int32 IStructuralComparable.CompareTo(Object other, IComparer comparer)
        {
            if (other == null) return 1;

            if (other is Either<TSuccess, TFailure>)
            {
                var otherE = ((Either<TSuccess, TFailure>) other);
                if (IsSuccess && otherE.IsSuccess)
                {
                    return comparer.Compare(SuccessValue, otherE.SuccessValue);
                }
                else if (!IsSuccess && !otherE.IsSuccess)
                {
                    return comparer.Compare(FailureValue, otherE.FailureValue);
                }
            }
            
            throw new ArgumentException();
        }

        public override int GetHashCode()
        {
            return ((IStructuralEquatable)this).GetHashCode(EqualityComparer<Object>.Default);
        }

        Int32 IStructuralEquatable.GetHashCode(IEqualityComparer comparer)
        {
            if (IsSuccess)
            {
                return comparer.GetHashCode(SuccessValue);
            }
            else
            {
                return comparer.GetHashCode(FailureValue);
            }
        }
    }

    public static class Either
    {
        // Monad functions

        /// <summary>
        /// Constructs Either.Success with v
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="v"></param>
        /// <returns></returns>
        public static Either<TSuccess,TFailure> Return<TSuccess,TFailure>(TSuccess v)
        {
            return Success<TSuccess,TFailure>(v);
        }

        /// <summary>
        /// When m is Either.Success it applies f to the success value, otherwise Either.Nothing
        /// </summary>
        /// <typeparam name="TSuccessInput"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <typeparam name="TSuccessOutput"></typeparam>
        /// <param name="m"></param>
        /// <param name="f"></param>
        /// <returns></returns>
        public static Either<TSuccessOutput,TFailure> Bind<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput,TFailure> m, Func<TSuccessInput, Either<TSuccessOutput,TFailure>> f)
        {
            return m.IsFailure() ? Failure<TSuccessOutput,TFailure>(m.FailureValue) : f(m.SuccessValue);
        }

        /// <summary>
        /// When m is Either.Success it returns n, otherwise Either.Nothing 
        /// </summary>
        /// <typeparam name="TSuccessInput"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <typeparam name="TSuccessOutput"></typeparam>
        /// <param name="m"></param>
        /// <param name="h"></param>
        /// <returns></returns>
        public static Either<TSuccessOutput,TFailure> Then<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput,TFailure> m,
            Either<TSuccessOutput,TFailure> h)
        {
            return m.Bind(_ => h);
        }

        // Functor functions

        /// <summary>
        /// When m is Either.Success it applies f to the success value, otherwise Either.Nothing
        /// </summary>
        /// <typeparam name="TSuccessInput"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <typeparam name="TSuccessOutput"></typeparam>
        /// <param name="m"></param>
        /// <param name="f"></param>
        /// <returns></returns>
        public static Either<TSuccessOutput,TFailure> Map<TSuccessInput, TFailure, TSuccessOutput>(this Either<TSuccessInput, TFailure> m, Func<TSuccessInput, TSuccessOutput> f)
        {
            return m.IsFailure()
                ? Either.Failure<TSuccessOutput, TFailure>(m.FailureValue)
                : Either.Success<TSuccessOutput, TFailure>(f(m.SuccessValue));
        }

        // Either functions

        /// <summary>
        /// Constructs Either.Failure with m
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <returns></returns>
        public static Either<TSuccess, TFailure> Failure<TSuccess, TFailure>(TFailure m)
        {
            return new Either<TSuccess, TFailure>(m,default(TSuccess),false);
        }

        /// <summary>
        /// Constructs Either.Success with m
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <returns></returns>
        public static Either<TSuccess, TFailure> Success<TSuccess, TFailure>(TSuccess m)
        {
            return new Either<TSuccess, TFailure>(default(TFailure), m, true);
        }

        /// <summary>
        /// True when m is Either.Success
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <returns></returns>
        public static bool IsSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m)
        {
            return m.IsSuccess;
        }

        /// <summary>
        /// True when m is Either.Failure
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <returns></returns>
        public static bool IsFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m)
        {
            return !m.IsSuccess;
        }

        /// <summary>
        /// When m is Either.Success then applies fr to the success value, otherwise applies fl to the failure value
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <typeparam name="TResult"></typeparam>
        /// <param name="m"></param>
        /// <param name="fr"></param>
        /// <param name="fl"></param>
        /// <returns></returns>
        public static TResult From<TSuccess, TFailure, TResult>(this Either<TSuccess, TFailure> m, Func<TSuccess, TResult> fr, Func<TFailure, TResult> fl)
        {
            return !m.IsSuccess ? fl(m.FailureValue) : fr(m.SuccessValue);
        }

        /// <summary>
        /// When m is Either.Failure returns failure value, otherwise dflt
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <param name="dflt"></param>
        /// <returns></returns>
        public static TFailure FailureOr<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TFailure dflt)
        {
            return m.IsSuccess ? dflt : m.FailureValue;
        }

        /// <summary>
        /// When m is Either.Failure returns failure value, otherwise result of dflt 
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <param name="dflt"></param>
        /// <returns></returns>
        public static TFailure FailureOr<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TFailure> dflt)
        {
            return m.IsSuccess ? dflt() : m.FailureValue;
        }

        /// <summary>
        /// When m is Either.Success returns success value, otherwise dflt
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <param name="dflt"></param>
        /// <returns></returns>
        public static TSuccess SuccessOr<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TSuccess dflt)
        {
            return m.IsSuccess ? m.SuccessValue : dflt;   
        }

        /// <summary>
        /// When m is Either.Success returns success value, otherwise result of dflt
        /// </summary>
        /// <typeparam name="TSuccess"></typeparam>
        /// <typeparam name="TFailure"></typeparam>
        /// <param name="m"></param>
        /// <param name="dflt"></param>
        /// <returns></returns>
        public static TSuccess SuccessOr<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TSuccess> dflt)
        {
            return m.IsSuccess ? m.SuccessValue : dflt();
        }

        /// <summary>
        /// When f does throw an excpetion returns Either.Failure with the exception, otherwise Either.Success with the result of f
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="f"></param>
        /// <returns></returns>
        public static Either<T, Exception> Catch<T>(Func<T> f)
        {
            try
            {
                return Success<T, Exception>(f());
            }
            catch (Exception e)
            {
                return Failure<T, Exception>(e);
            }
        }

        public static Either<TSuccess, TFailure> When<TSuccess, TFailure>(Func<bool> p, Func<TFailure> fl, Func<TSuccess> fr)
        {
            return p() ? Success<TSuccess, TFailure>(fr()) : Failure<TSuccess, TFailure>(fl());
        }
    }
}
