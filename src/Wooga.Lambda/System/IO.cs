using System;

namespace Devboy.Lambda.System
{
    public delegate T IO<T>();

    public static class IO
    {
        public static TReturn Do<T1, T2, TReturn>(IO<T1> m, IO<T2> h, Func<T1, T2, TReturn> f)
        {
            return f(m(), h());
        }

        public static TReturn Do<T1, T2, T3, TReturn>(IO<T1> m, IO<T2> h, IO<T3> i, Func<T1, T2, T3, TReturn> f)
        {
            return f(m(), h(), i());
        }

        public static TReturn Do<T1, T2, T3, T4, TReturn>(IO<T1> m, IO<T2> h, IO<T3> i, IO<T4> k,
            Func<T1, T2, T3, T4, TReturn> f)
        {
            return f(m(), h(), i(), k());
        }

        public static IO<T2> Bind<T1, T2>(this IO<T1> m, Func<T1, IO<T2>> f)
        {
            return () => f(m()).Invoke();
        }

        public static IO<T2> Then<T1, T2>(this IO<T1> m, IO<T2> h)
        {
            return m.Bind(_ => h);
        }

        public static IO<T> Return<T>(Func<T> f)
        {
            return Return(f());
        }

        public static IO<T> Return<T>(T v)
        {
            return () => v;
        }
    }
}