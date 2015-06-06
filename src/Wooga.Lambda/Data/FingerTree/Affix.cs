using System;
using Wooga.Lambda.Control;

namespace Wooga.Lambda.Data.FingerTree
{
    public abstract class Affix<T>
    {
        public sealed class One : Affix<T>
        {
            public readonly T A;

            public One(T a)
            {
                A = a;
            }     
        }

        public sealed class Two : Affix<T>
        {
            public readonly T A;
            public readonly T B;

            public Two(T a, T b)
            {
                A = a;
                B = b;
            }
        }

        public sealed class Three : Affix<T>
        {
            public readonly T A;
            public readonly T B;
            public readonly T C;

            public Three(T a, T b, T c)
            {
                A = a;
                B = b;
                C = c;
            }
        }

        public sealed class Four : Affix<T>
        {
            public readonly T A;
            public readonly T B;
            public readonly T C;
            public readonly T D;

            public Four(T a, T b, T c, T d)
            {
                A = a;
                B = b;
                C = c;
                D = d;
            }
        }
    }

    public static class Affix
    {
        public static Affix<T>.One One<T>(T x)
        {
            return new Affix<T>.One(x);
        }

        public static Affix<T>.Two Two<T>(T x, T y)
        {
            return new Affix<T>.Two(x, y);
        }

        public static Affix<T>.Three Three<T>(T x, T y, T z)
        {
            return new Affix<T>.Three(x, y, z);
        }

        public static Affix<T>.Four Four<T>(T x, T y, T z, T q)
        {
            return new Affix<T>.Four(x, y, z, q);
        }

        public static Affix<T> Prepend<T>(this Affix<T> a, T x)
        {
            return Pattern<Affix<T>>
                .Match(a)
                .Case<Affix<T>.One>(y   => Two(x,y.A))
                .Case<Affix<T>.Two>(y   => Three(x, y.A, y.B))
                .Case<Affix<T>.Three>(y => Four(x, y.A, y.B, y.C))
                .Default(_ =>
                {
                    throw new Exception("Affix must have one to four elements");
                    return _;
                })
                .Run();
        }

        public static Affix<T> Append<T>(this Affix<T> a, T x)
        {
            return Pattern<Affix<T>>
                .Match(a)
                .Case<Affix<T>.One>(y => Two(y.A, x))
                .Case<Affix<T>.Two>(y => Three(y.A, y.B, x))
                .Case<Affix<T>.Three>(y => Four(y.A, y.B, y.C, x))
                .Default(_ =>
                {
                    throw new Exception("Affix must have one to four elements");
                    return _;
                })
                .Run();
        }
    }
}
