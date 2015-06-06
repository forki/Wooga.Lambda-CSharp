namespace Wooga.Lambda.Data.FingerTree
{
    public abstract class Node<T>
    {
        public sealed class Duo : Node<T>
        {
            public readonly T A;
            public readonly T B;

            public Duo(T a, T b)
            {
                A = a;
                B = b;
            }
        }

        public sealed class Trio : Node<T>
        {
            public readonly T A;
            public readonly T B;
            public readonly T C;

            public Trio(T a, T b, T c)
            {
                A = a;
                B = b;
                C = c;
            }
        } 
    }

    public static class Node
    {
        public static Node<T>.Duo Duo<T>(T x, T y)
        {
            return new Node<T>.Duo(x, y);
        }

        public static Node<T>.Trio Trio<T>(T x, T y, T z)
        {
            return new Node<T>.Trio(x, y, z);
        }
    }
}