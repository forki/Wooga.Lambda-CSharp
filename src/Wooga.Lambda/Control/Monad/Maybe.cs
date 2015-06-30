using System;

namespace Wooga.Lambda.Control.Monad
{
    public struct Maybe<T>
    {
        internal readonly T Value;
        internal readonly bool HasValue;

        internal Maybe(T value, bool hasValue)
        {
            Value = value;
            HasValue = hasValue;
        }
    }

    public static class Maybe
    {
        // Monad functions


        /// <summary>
        ///     Returns a new Maybe wrapping x
        /// </summary>
        /// <typeparam name="T">Type of wrapped value</typeparam>
        /// <returns>Maybe of T</returns>
        public static Maybe<T> Return<T>(T x)
        {
            return x == null ? new Maybe<T>(default(T), false) : new Maybe<T>(x, true);
        }

        /// <summary>
        ///     if given Maybe has a value applies function f to TInput m otherwise nothing 
        /// </summary>
        /// <typeparam name="TInput">Type of the given Maybe</typeparam>
        /// <typeparam name="TOutput">Type of the resulting Maybe</typeparam>
        /// <param name="f">The computation.</param>
        /// <returns>Mayeb of TOutput</returns>
        public static Maybe<TOutput> Bind<TInput,TOutput>(this Maybe<TInput> m, Func<TInput, Maybe<TOutput>> f)
        {
            return m.HasValue ? f(m.Value) : Maybe.Nothing<TOutput>();
        }

        /// <summary>
        ///     if given Maybe has a value returns n otherwise nothing 
        /// </summary>
        /// <typeparam name="TInput">Type of the given Maybe</typeparam>
        /// <typeparam name="TOutput">Type of the resulting Maybe</typeparam>
        /// <param name="n">continuation Maybe</param>
        /// <returns>Maybe of TOutput</returns>
        public static Maybe<TOutput> Then<TInput,TOutput>(this Maybe<TInput> m, Maybe<TOutput> n)
        {
            return m.HasValue ? n : Maybe.Nothing<TOutput>();
        }

        // Functor functions

        /// <summary>
        ///     if given Maybe has a value warps result of function f in Maybe, otherwise returns nothing 
        /// </summary>
        /// <typeparam name="TInput">Type of the given Maybe</typeparam>
        /// <typeparam name="TOutput">Type of the resulting Maybe</typeparam>
        /// <param name="f">The computation.</param>
        /// <returns>Maybe of TOutput</returns>
        public static Maybe<TOutput> Map<TInput,TOutput>(this Maybe<TInput>m, Func<TInput, TOutput> f)
        {
            return m.HasValue ? Maybe.Just(f(m.Value)) : Maybe.Nothing<TOutput>();
        }

        // Maybe functions

        /// <summary>
        ///     instantiates a new Maybe wrapping value v
        /// </summary>
        /// <typeparam name="T">Type of the  Maybe</typeparam>
        /// <returns>Maybe of T</returns>
        public static Maybe<T> Just<T>(T v)
        {
            return new Maybe<T>(v,true);
        }

        /// <summary>
        ///     instantiates a new Maybe representing nothing
        /// </summary>
        /// <typeparam name="T">Type of the Maybe</typeparam>
        /// <returns>Maybe of T</returns>
        public static Maybe<T> Nothing<T>()
        {
            return new Maybe<T>(default(T),false);
        }

        /// <summary>
        ///     unwraps Maybe returning value or default
        /// </summary>
        /// <typeparam name="T">Type of the Maybe</typeparam>
        /// <returns>value of T</returns>
        public static T ValueOr<T>(this Maybe<T> m, T dflt)
        {
            return m.HasValue ? m.Value : dflt;
        }

        /// <summary>
        ///     unwraps Maybe returning value or computation of default
        /// </summary>
        /// <typeparam name="T">Type of the Maybe</typeparam>
        /// <returns>value of T</returns>
        public static T ValueOr<T>(this Maybe<T> m, Func<T> dflt)
        {
            return m.HasValue ? m.Value : dflt();
        }

        /// <summary>
        ///     returns true if Maybe has a value
        /// </summary>
        /// <returns>bool</returns>
        public static bool IsJust<T>(this Maybe<T> m)
        {
            return m.HasValue;
        }

        /// <summary>
        ///     returns true if Maybe represents nothing
        /// </summary>
        /// <returns>bool</returns>
        public static bool IsNothing<T>(this Maybe<T> m)
        {
            return !m.IsJust();
        }
    }
}