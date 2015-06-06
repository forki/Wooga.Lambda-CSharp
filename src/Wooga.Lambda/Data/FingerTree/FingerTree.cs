using Wooga.Lambda.Control;

namespace Wooga.Lambda.Data.FingerTree
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
}