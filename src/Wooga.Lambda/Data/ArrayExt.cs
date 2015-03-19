using System;

namespace Wooga.Lambda.Data
{
    public static class ArrayExt
    {
        public static Maybe<T> TryHead<T>(this T[] xs)
        {
            return xs.Length == 0 ? Maybe.Nothing<T>() : Maybe.Just(xs[0]);
        }

        public static Maybe<T2> TryFind<T, T2>(this T[] xs, Func<T, Maybe<T2>> f)
        {
            foreach (var x in xs)
            {
                var res = f(x);
                if (res.IsJust())
                    return Maybe.Just(res.FromJust());
            }
            return Maybe.Nothing<T2>();
        }

        public static Maybe<T[]> TryTail<T>(this T[] xs)
        {
            return xs.Length <= 1 ? Maybe.Nothing<T[]>() : Maybe.Just(xs.RangeSubset(1, xs.Length - 1));
        }

        public static T[] Append<T>(this T[] xs, T y)
        {
            var zs = new T[xs.Length + 1];

            xs.CopyTo(zs, 0);
            new[] {y}.CopyTo(zs, xs.Length);
            return zs;
        }

        public static T[] Concat<T>(this T[] xs, T[] ys)
        {
            var zs = new T[xs.Length + ys.Length];

            xs.CopyTo(zs, 0);
            ys.CopyTo(zs, xs.Length);
            return zs;
        }

        public static T2 Fold<T1, T2>(this T1[] self, Func<T2, T1, T2> func, T2 accumulator)
        {
            var acc = accumulator;
            foreach (var val in self)
            {
                acc = func(acc, val);
            }
            return acc;
        }

        public static T[] RangeSubset<T>(this T[] array, int startIndex, int length)
        {
            var subset = new T[length];
            Array.Copy(array, startIndex, subset, 0, length);
            return subset;
        }

        public static T2[] Map<T1, T2>(this T1[] xs, Func<T1, T2> f)
        {
            var ys = new T2[xs.Length];
            for (var i = 0; i < xs.Length; i++)
            {
                ys[i] = f(xs[i]);
            }
            return ys;
        }
    }
}