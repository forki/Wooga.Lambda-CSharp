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

        public static Maybe<T> Return<T>(T x)
        {
            return x == null ? new Maybe<T>(default(T), false) : new Maybe<T>(x, true);
        }

        public static Maybe<T2> Bind<T,T2>(this Maybe<T> m, Func<T, Maybe<T2>> f)
        {
            return m.HasValue ? f(m.Value) : Maybe.Nothing<T2>();
        }

        public static Maybe<T2> Then<T,T2>(this Maybe<T> m, Maybe<T2> n)
        {
            return m.HasValue ? n : Maybe.Nothing<T2>();
        }

        // Functor functions

        public static Maybe<T2> Map<T,T2>(this Maybe<T>m, Func<T, T2> f)
        {
            return m.HasValue ? Maybe.Just(f(m.Value)) : Maybe.Nothing<T2>();
        }

        // Maybe functions

        public static Maybe<T> Just<T>(T v)
        {
            return new Maybe<T>(v,true);
        }
        
        public static Maybe<T> Nothing<T>()
        {
            return new Maybe<T>(default(T),false);
        }
        
        public static T FromJust<T>(this Maybe<T> m)
        {
            if(!m.HasValue) throw new InvalidOperationException("No value in None");
            return m.Value;
        }
        
        public static T FromMaybe<T>(this Maybe<T> m, T d)
        {
            return m.HasValue ? m.Value : d;
        }
        
        public static T2 FromJustOrDefault<T1, T2>(this Maybe<T1> m, T2 d, Func<T1, T2> f)
        {
            return m.HasValue ? f(m.Value) : d;
        }
        
        public static bool IsJust<T>(this Maybe<T> m)
        {
            return m.HasValue;
        }
        
        public static bool IsNothing<T>(this Maybe<T> m)
        {
            return !m.IsJust();
        }
    }
}