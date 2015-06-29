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

        public static Maybe<TOutput> Bind<TInput,TOutput>(this Maybe<TInput> m, Func<TInput, Maybe<TOutput>> f)
        {
            return m.HasValue ? f(m.Value) : Maybe.Nothing<TOutput>();
        }

        public static Maybe<TOutput> Then<TInput,TOutput>(this Maybe<TInput> m, Maybe<TOutput> n)
        {
            return m.HasValue ? n : Maybe.Nothing<TOutput>();
        }

        // Functor functions

        public static Maybe<TOutput> Map<TInput,TOutput>(this Maybe<TInput>m, Func<TInput, TOutput> f)
        {
            return m.HasValue ? Maybe.Just(f(m.Value)) : Maybe.Nothing<TOutput>();
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
        
        internal static T FromJust<T>(this Maybe<T> m)
        {
            if(!m.HasValue) throw new InvalidOperationException("No value in None");
            return m.Value;
        }
        
        public static T FromMaybe<T>(this Maybe<T> m, T d)
        {
            return m.HasValue ? m.Value : d;
        }
        
        public static TOutput FromJustOrDefault<TInput, TOutput>(this Maybe<TInput> m, TOutput d, Func<TInput, TOutput> f)
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