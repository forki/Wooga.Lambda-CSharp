using System;

namespace Wooga.Lambda.Data
{
    public struct Tuple<T1, T2>
    {
        public readonly T1 Item1;

        public readonly T2 Item2;

        public Tuple(T1 item1, T2 item2)
        {
            Item1 = item1;
            Item2 = item2;
        }

        public override bool Equals(Object obj)
        {
            return obj is Tuple<T1, T2> && this == (Tuple<T1, T2>) obj;
        }

        public override int GetHashCode()
        {
            return Item1.GetHashCode() ^ Item2.GetHashCode();
        }

        public static bool operator ==(Tuple<T1, T2> x, Tuple<T1, T2> y)
        {
            return x.Item1.Equals(y.Item1) && x.Item2.Equals(y.Item2);
        }

        public static bool operator !=(Tuple<T1, T2> x, Tuple<T1, T2> y)
        {
            return !(x == y);
        }
    }

    public struct Tuple<T1, T2, T3>
    {
        public readonly T1 Item1;

        public readonly T2 Item2;

        public readonly T3 Item3;

        public Tuple(T1 item1, T2 item2, T3 item3)
        {
            Item1 = item1;
            Item2 = item2;
            Item3 = item3;
        }

        public override bool Equals(Object obj)
        {
            return obj is Tuple<T1, T2, T3> && this == (Tuple<T1, T2, T3>) obj;
        }

        public override int GetHashCode()
        {
            return Item1.GetHashCode() ^ Item2.GetHashCode() ^ Item3.GetHashCode();
        }

        public static bool operator ==(Tuple<T1, T2, T3> x, Tuple<T1, T2, T3> y)
        {
            return x.Item1.Equals(y.Item1) && x.Item2.Equals(y.Item2) && x.Item3.Equals(y.Item3);
        }

        public static bool operator !=(Tuple<T1, T2, T3> x, Tuple<T1, T2, T3> y)
        {
            return !(x == y);
        }
    }
}