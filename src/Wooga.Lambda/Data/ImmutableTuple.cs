namespace Wooga.Lambda.Data
{
    /// <summary>
    ///     Represent a value pair.
    /// </summary>
    /// <typeparam name="T1">The type of the first value.</typeparam>
    /// <typeparam name="T2">The type of the second value.</typeparam>
    public struct ImmutableTuple<T1, T2>
    {
        public readonly T1 Item1;
        public readonly T2 Item2;

        public ImmutableTuple(T1 item1, T2 item2)
        {
            Item1 = item1;
            Item2 = item2;
        }

        public override bool Equals(object obj)
        {
            return obj is ImmutableTuple<T1, T2> && this == (ImmutableTuple<T1, T2>) obj;
        }

        public override int GetHashCode()
        {
            return Item1.GetHashCode() ^ Item2.GetHashCode();
        }

        public static bool operator ==(ImmutableTuple<T1, T2> x, ImmutableTuple<T1, T2> y)
        {
            return x.Item1.Equals(y.Item1) && x.Item2.Equals(y.Item2);
        }

        public static bool operator !=(ImmutableTuple<T1, T2> x, ImmutableTuple<T1, T2> y)
        {
            return !(x == y);
        }
    }

    /// <summary>
    ///     Represent a value triplet.
    /// </summary>
    /// <typeparam name="T1">The type of the first value.</typeparam>
    /// <typeparam name="T2">The type of the second value.</typeparam>
    /// <typeparam name="T3">The type of the third value.</typeparam>
    public struct ImmutableTuple<T1, T2, T3>
    {
        public readonly T1 Item1;
        public readonly T2 Item2;
        public readonly T3 Item3;

        public ImmutableTuple(T1 item1, T2 item2, T3 item3)
        {
            Item1 = item1;
            Item2 = item2;
            Item3 = item3;
        }

        public override bool Equals(object obj)
        {
            return obj is ImmutableTuple<T1, T2, T3> && this == (ImmutableTuple<T1, T2, T3>) obj;
        }

        public override int GetHashCode()
        {
            return Item1.GetHashCode() ^ Item2.GetHashCode() ^ Item3.GetHashCode();
        }

        public static bool operator ==(ImmutableTuple<T1, T2, T3> x, ImmutableTuple<T1, T2, T3> y)
        {
            return x.Item1.Equals(y.Item1) && x.Item2.Equals(y.Item2) && x.Item3.Equals(y.Item3);
        }

        public static bool operator !=(ImmutableTuple<T1, T2, T3> x, ImmutableTuple<T1, T2, T3> y)
        {
            return !(x == y);
        }
    }
}