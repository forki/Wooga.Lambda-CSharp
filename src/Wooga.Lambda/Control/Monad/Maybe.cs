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
        public static Maybe<T> Just<T>(T v)
        {
            return () => new MaybeResult<T>.Just(v);
        }

        public static Maybe<T> Nothing<T>()
        {
            return () => new MaybeResult<T>.Nothing();
        }

        public static T FromJust<T>(this Maybe<T> m)
        {
            return m().Value();
        }

        public static T FromMaybe<T>(this Maybe<T> m, T d)
        {
            var res = m();
            return res.HasValue() ? res.Value() : d;
        }

        public static T2 FromJustOrDefault<T1, T2>(this Maybe<T1> m, T2 d, Func<T1, T2> f)
        {
            var res = m();
            return res.HasValue() ? f(res.Value()) : d;
        }

        public static Boolean IsJust<T>(this Maybe<T> m)
        {
            return m().HasValue();
        }

        public static Boolean IsNothing<T>(this Maybe<T> m)
        {
            return !m.IsJust();
        }

        public static Maybe<T2> Bind<T1, T2>(this Maybe<T1> m, Func<T1, Maybe<T2>> f)
        {
            var res = m();
            return res.HasValue() ? f(res.Value()) : Nothing<T2>();
        }

        public static Maybe<T2> Then<T1, T2>(this Maybe<T1> v, Maybe<T2> h)
        {
            return v.Bind(_ => h);
        }

        public static Maybe<T> Return<T>(Func<T> f)
        {
            return Just(f());
        }

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