using System;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Monad
{
    /// <summary>
    ///     A delegate to label lambdas as Maybe
    /// </summary>
    /// <typeparam name="T">Result type</typeparam>
    /// <returns>MaybeData representing a value or Nothing.</returns>
    public delegate MaybeResult<T> Maybe<T>();

    public static class Maybe
    {
        /// <summary>
        /// Produces a just value
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="v">The element</param>
        /// <returns>The maybe instance</returns>
        public static Maybe<T> Just<T>(T v)
        {
            return () => new MaybeResult<T>.Just(v);
        }

        /// <summary>
        /// Produces a nothing value
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <returns>The maybe instance</returns>
        public static Maybe<T> Nothing<T>()
        {
            return () => new MaybeResult<T>.Nothing();
        }

        /// <summary>
        /// Extracts the element out of a Just and throws an error if its argument is Nothing
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <returns>The element</returns>
        public static T FromJust<T>(this Maybe<T> m)
        {
            return m().Value();
        }

        /// <summary>
        /// If the Maybe is Nothing, it returns the default values; otherwise, it returns the value contained in the Maybe
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <returns>The element</returns>
        public static T FromMaybe<T>(this Maybe<T> m, T d)
        {
            var res = m();
            return res.HasValue() ? res.Value() : d;
        }

        /// <summary>
        /// If the Maybe is Nothing, it returns the default values; otherwise, extracts the element out of a Just and applies the function f on it
        /// </summary>
        /// <typeparam name="T1">The type of the element</typeparam>
        /// <typeparam name="T2">The map function return value</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <param name="d">The default value</param>
        /// <param name="f">The map function</param>
        /// <returns>The mapped value</returns>
        public static T2 FromJustOrDefault<T1, T2>(this Maybe<T1> m, T2 d, Func<T1, T2> f)
        {
            var res = m();
            return res.HasValue() ? f(res.Value()) : d;
        }

        /// <summary>
        /// The isJust function returns true if its argument is of the form Just
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <returns>isJust?</returns>
        public static Boolean IsJust<T>(this Maybe<T> m)
        {
            return m().HasValue();
        }

        /// <summary>
        /// The isNothing function returns true if its argument is of the form Nothing
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <returns>isNothing?</returns></returns>
        public static Boolean IsNothing<T>(this Maybe<T> m)
        {
            return !m.IsJust();
        }

        /// <summary>
        /// Sequentially compose two actions, passing any value produced by the first as an argument to the second
        /// </summary>
        /// <typeparam name="T1">The type of the element</typeparam>
        /// <typeparam name="T2">The type of the return element</typeparam>
        /// <param name="m">The maybe instance</param>
        /// <param name="f">The map function</param>
        /// <returns>Monadically bound maybes</returns></returns>
        public static Maybe<T2> Bind<T1, T2>(this Maybe<T1> m, Func<T1, Maybe<T2>> f)
        {
            var res = m();
            return res.HasValue() ? f(res.Value()) : Nothing<T2>();
        }

        /// <summary>
        /// Sequentially compose two actions, discarding any value produced by the first, like sequencing operators (such as the semicolon) in imperative languages
        /// </summary>
        /// <typeparam name="T1">The type of the element</typeparam>
        /// <typeparam name="T2">The type of the return element</typeparam>
        /// <param name="v">The maybe instance</param>
        /// <param name="h">The second  maybe instance</param>
        /// <returns>Second maybe</returns></returns>
        public static Maybe<T2> Then<T1, T2>(this Maybe<T1> v, Maybe<T2> h)
        {
            return v.Bind(_ => h);
        }

        /// <summary>
        /// Inject a value into the monadic type
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="f">A function production the element</param>
        /// <returns>Maybe instance</returns>
        public static Maybe<T> Return<T>(Func<T> f)
        {
            return Just(f());
        }

        /// <summary>
        /// Inject a value into the monadic type
        /// </summary>
        /// <typeparam name="T">The type of the element</typeparam>
        /// <param name="f">the element</param>
        /// <returns>Maybe instance</returns>
        public static Maybe<T> Return<T>(T v)
        {
            return Just(v);
        }
    }

    public static class MaybeFunctor
    {
        public static Maybe<T2> FMap<T1, T2>(this Maybe<T1> m, Func<T1, T2> f)
        {
            return m.IsNothing() ? Maybe.Nothing<T2>() : Maybe.Just(f(m.FromJust()));
        }
    }
}