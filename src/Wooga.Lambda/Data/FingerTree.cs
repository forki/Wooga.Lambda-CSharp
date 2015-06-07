using System;
using Wooga.Lambda.Control;

// http://andrew.gibiansky.com/blog/haskell/finger-trees/
//PerfTests.Append: FingerTree was 169.22x faster and 481.00x more memory efficient than FSharpList.
//PerfTests.Append: FingerTree was 13.47x faster and 41.00x more memory efficient than FSharpArray.
//PerfTests.Append: FingerTree was 1.15x faster and 1.00x more memory efficient than CSharpList.
//PerfTests.Append: FingerTree was 1.27x faster and 1.00x more memory efficient than CSharpArray.
//PerfTests.Prepend: FingerTree was 1.44x faster and 1.00x more memory efficient than FSharpList.
//PerfTests.Prepend: FingerTree was 15.76x faster and 41.00x more memory efficient than FSharpArray.
//PerfTests.Prepend: FingerTree was 2.03x faster and 1.00x more memory efficient than CSharpList.
//PerfTests.Prepend: FingerTree was 860.29x faster and 2901.00x more memory efficient than CSharpArray.

namespace Wooga.Lambda.Data
{
    public abstract class FingerTree<T>
    {
        public sealed class Empty : FingerTree<T>
        {
        } 

        public sealed class Single : FingerTree<T>
        {
            public readonly T A;

            public Single(T a)
            {
                A = a;
            }
        }

        public sealed class Deep : FingerTree<T>
        {
            public readonly Affix<T> Prefix;
            public readonly FingerTree<Node<T>> Tree; 
            public readonly Affix<T> Suffix;

            public Deep(Affix<T> prefix, FingerTree<Node<T>> tree, Affix<T> suffix)
            {
                Prefix = prefix;
                Tree = tree;
                Suffix = suffix;
            }
        }
    }

    public static class FingerTree
    {
        public static FingerTree<T>.Empty Empty<T>()
        {
            return new FingerTree<T>.Empty();
        }

        public static FingerTree<T>.Single Single<T>(T x)
        {
            return new FingerTree<T>.Single(x);
        }

        public static FingerTree<T>.Deep Deep<T>(Affix<T> prefix, FingerTree<Node<T>> tree, Affix<T> suffix)
        {
            return new FingerTree<T>.Deep(prefix,tree,suffix);
        }

        public static FingerTree<T> Prepend<T>(this FingerTree<T> t, T x)
        {
            return Pattern<FingerTree<T>>
                .Match(t)
                .Case<FingerTree<T>.Empty>(_ => Single(x))
                .Case<FingerTree<T>.Single>(s => Deep(Affix.One(x), Empty<Node<T>>(), Affix.One(s.A)))
                .Case<FingerTree<T>.Deep>(s => PrependDeep(s, x))
                .Run();
        }

        private static FingerTree<T> PrependDeep<T>(this FingerTree<T>.Deep t, T x)
        {
            return Pattern<FingerTree<T>>
                .Match(t.Prefix)
                .Case<Affix<T>.Four>(a => Deep(Affix.Two(x, a.A), t.Tree.Prepend(Node.Trio(a.B, a.C, a.D)),t.Suffix))
                .Default(a => Deep(a.Prepend(x), t.Tree,t.Suffix))
                .Run();
        }

        public static FingerTree<T> Append<T>(this FingerTree<T> t, T x)
        {
            return Pattern<FingerTree<T>>
                .Match(t)
                .Case<FingerTree<T>.Empty>(_ => Single(x))
                .Case<FingerTree<T>.Single>(s => Deep(Affix.One(s.A), Empty<Node<T>>(), Affix.One(x)))
                .Case<FingerTree<T>.Deep>(s => AppendDeep(s, x))
                .Run();
        }

        private static FingerTree<T> AppendDeep<T>(this FingerTree<T>.Deep t, T x)
        {
            return Pattern<FingerTree<T>>
                .Match(t.Suffix)
                .Case<Affix<T>.Four>(a => Deep(t.Prefix, t.Tree.Append(Node.Trio(a.A, a.B, a.C)), Affix.Two(a.D,x)))
                .Default(a => Deep(t.Prefix, t.Tree, a.Append(x)))
                .Run();
        }
    }

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
                .Case<Affix<T>.One>(y => Two(x, y.A))
                .Case<Affix<T>.Two>(y => Three(x, y.A, y.B))
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