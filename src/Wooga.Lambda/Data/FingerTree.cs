using System;
// using System.Collections.ObjectModel;

// http://andrew.gibiansky.com/blog/haskell/finger-trees/

namespace Wooga.Lambda.Data
{
    public abstract class FingerTree<T>
    {
        public virtual bool IsEmpty()
        {
            return false;
        }

        public virtual bool IsSingle()
        {
            return false;
        }

        public virtual bool IsDeep()
        {
            return false;
        }

        public sealed class Empty : FingerTree<T>
        {
            public override bool IsEmpty()
            {
                return true;
            }
        }

        public sealed class Single : FingerTree<T>
        {
            public readonly T A;

            public Single(T a)
            {
                A = a;
            }

            public override bool IsSingle()
            {
                return true;
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

            public override bool IsDeep()
            {
                return true;
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
            if (t.IsEmpty())
            {
                return Single(x);
            }
            else if (t.IsSingle())
            {
                return Deep(Affix.One(x), Empty<Node<T>>(), Affix.One(((FingerTree<T>.Single)t).A));
            }
            else //if (t.IsDeep())
            {
                return PrependDeep((FingerTree<T>.Deep) t, x);
            }
        }

        private static FingerTree<T> PrependDeep<T>(this FingerTree<T>.Deep t, T x)
        {
            var a = t.Prefix as Affix<T>.Four;
            return a != null
                ? Deep(Affix.Two(x, a.A), t.Tree.Prepend(Node.Trio(a.B, a.C, a.D)), t.Suffix)
                : Deep(t.Prefix.Prepend(x), t.Tree, t.Suffix);
        }

        public static FingerTree<T> Append<T>(this FingerTree<T> t, T x)
        {
            if (t.IsEmpty())
            {
                return Single(x);
            }
            else if (t.IsSingle())
            {
                return Deep(Affix.One(((FingerTree<T>.Single)t).A), Empty<Node<T>>(), Affix.One(x));
            }
            else //if (t.IsDeep())
            {
                return AppendDeep((FingerTree<T>.Deep)t, x);
            }
        }

        private static FingerTree<T> AppendDeep<T>(this FingerTree<T>.Deep t, T x)
        {
            var a = t.Suffix as Affix<T>.Four;
            return a != null
                ? Deep(t.Prefix, t.Tree.Append(Node.Trio(a.A, a.B, a.C)), Affix.Two(a.D, x))
                : Deep(t.Prefix, t.Tree, t.Suffix.Append(x));
        }

        public static T Head<T>(this FingerTree<T> t)
        {
            var view = t.ViewL();
            if(view.IsNone()) throw new Exception("Tree is empty.");
            return ((View<T>.Some)view).Element;
        }

        public static FingerTree<T> Tail<T>(this FingerTree<T> t)
        {
            var view = t.ViewL();
            if (view.IsNone()) throw new Exception("Tree is empty.");
            return ((View<T>.Some)view).Tree;
        }

        public static T Last<T>(this FingerTree<T> t)
        {
            var view = t.ViewR();
            if (view.IsNone()) throw new Exception("Tree is empty.");
            return ((View<T>.Some)view).Element;
        }

        public static FingerTree<T> Init<T>(this FingerTree<T> t)
        {
            var view = t.ViewR();
            if (view.IsNone()) throw new Exception("Tree is empty.");
            return ((View<T>.Some)view).Tree;
        }

        public static bool IsEmpty<T>(this FingerTree<T> t)
        {
            return t.ViewR().IsNone();
        }
    }

    public abstract class Affix<T>
    {
        public virtual bool IsOne()
        {
            return false;
        }

        public virtual bool IsTwo()
        {
            return false;
        }

        public virtual bool IsThree()
        {
            return false;
        }

        public virtual bool IsFour()
        {
            return false;
        }

        public sealed class One : Affix<T>
        {
            public readonly T A;

            public One(T a)
            {
                A = a;
            }

            public override bool IsOne()
            {
                return true;
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

            public override bool IsTwo()
            {
                return true;
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

            public override bool IsThree()
            {
                return true;
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

            public override bool IsFour()
            {
                return true;
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
            if (a.IsOne())
            {
                return Two(x,((Affix<T>.One)a).A);
            }
            else if (a.IsTwo())
            {
                var two = (Affix<T>.Two)a;
                return Three(x, two.A, two.B);
            }
            else if (a.IsThree())
            {
                var three = (Affix<T>.Three)a;
                return Four(x, three.A, three.B, three.C);
            }
            else
            {
                throw new Exception("Affix must have one to four elements");
            }
        }

        public static Affix<T> Append<T>(this Affix<T> a, T x)
        {
            if (a.IsOne())
            {
                return Two(((Affix<T>.One)a).A, x);
            }
            else if (a.IsTwo())
            {
                var two = (Affix<T>.Two)a;
                return Three(two.A, two.B, x);
            }
            else if (a.IsThree())
            {
                var three = (Affix<T>.Three)a;
                return Four(three.A, three.B, three.C, x);
            }
            else
            {
                throw new Exception("Affix must have one to four elements");
            }
        }

        public static T Last<T>(this Affix<T> a)
        {
            if (a.IsOne())
            {
                return ((Affix<T>.One)a).A;
            }
            else if (a.IsTwo())
            {
                return ((Affix<T>.Two)a).B;
            }
            else if (a.IsThree())
            {
                return ((Affix<T>.Three)a).C;
            }
            else
            {
                return ((Affix<T>.Four)a).D;
            }
        }

        public static Affix<T> Init<T>(this Affix<T> a)
        {
            if (a.IsTwo())
            {
                return One(((Affix<T>.Two)a).A);
            }
            else if (a.IsThree())
            {
                var three = (Affix<T>.Three)a;
                return Two(three.A, three.B);
            }
            else if (a.IsFour())
            {
                var four = (Affix<T>.Four)a;
                return Three(four.A, four.B, four.C);
            }
            else
            {
                throw new Exception("Affix must have two elements to produce Init");
            }
        }
    }

    public abstract class Node<T>
    {
        public virtual bool IsDuo()
        {
            return false;
        }

        public virtual bool IsTrio()
        {
            return false;
        }

        public sealed class Duo : Node<T>
        {
            public readonly T A;
            public readonly T B;

            public Duo(T a, T b)
            {
                A = a;
                B = b;
            }

            public override bool IsDuo()
            {
                return true;
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

            public override bool IsTrio()
            {
                return true;
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

        public static Affix<T> ToAffix<T>(this Node<T> n)
        {
            if (n.IsDuo())
            {
                var duo = (Node<T>.Duo) n;
                return Affix.Two(duo.A, duo.B);
            }
            else
            {
                var trio = (Node<T>.Trio)n;
                return Affix.Three(trio.A, trio.B, trio.C);
            }
        }
    }

    public abstract class View<T>
    {
        public virtual bool IsNone()
        {
            return false;
        }

        public virtual bool IsSome()
        {
            return false;
        }

        public sealed class None : View<T>
        {
            public override bool IsNone()
            {
                return true;
            }
        }

        public sealed class Some : View<T>
        {
            public readonly T Element;
            public readonly FingerTree<T> Tree;

            public Some(T e, FingerTree<T> t)
            {
                Element = e;
                Tree = t;
            }

            public override bool IsSome()
            {
                return true;
            }
        }
    }

    public static class View
    {
        public static View<T>.None None<T>()
        {
            return new View<T>.None();;
        }

        public static View<T>.Some Some<T>(T e, FingerTree<T> t)
        {
            return new View<T>.Some(e,t);
        }

        public static View<T> ViewL<T>(this FingerTree<T> t)
        {
            if (t.IsEmpty())
            {
                return None<T>();
            }
            else if (t.IsSingle())
            {
                return Some(((FingerTree<T>.Single) t).A, FingerTree.Empty<T>());
            }
            else //if (t.IsDeep())
            {
                return ViewLDeep((FingerTree<T>.Deep) t);
            }
        }

        private static View<T> ViewLDeep<T>(this FingerTree<T>.Deep t)
        {
            if (t.Prefix.IsOne())
            {
                return Some(((Affix<T>.One)t.Prefix).A, t.Tree.ViewL().ViewLRemainder(t));
            }
            else if (t.Prefix.IsTwo())
            {
                var two = ((Affix<T>.Two)t.Prefix);
                return Some(two.A, FingerTree.Deep(Affix.One(two.B), t.Tree, t.Suffix));
            }
            else if (t.Prefix.IsThree())
            {
                var three = ((Affix<T>.Three)t.Prefix);
                return Some(three.A, FingerTree.Deep(Affix.Two(three.B, three.C), t.Tree, t.Suffix));
            }
            else //if (t.Prefix.IsFour())
            {
                var four = ((Affix<T>.Four)t.Prefix);
                return Some(four.A, FingerTree.Deep(Affix.Three(four.B, four.C, four.D), t.Tree, t.Suffix));
            }
        }

        private static FingerTree<T> ViewLRemainder<T>(this View<Node<T>> v, FingerTree<T>.Deep t)
        {
            if (v.IsSome())
            {
                var some = ((View<Node<T>>.Some)v);
                return FingerTree.Deep(some.Element.ToAffix(), some.Tree, t.Suffix);
            }
            else if(t.Suffix.IsOne())
            {
                return FingerTree.Single(((Affix<T>.One)t.Suffix).A);
            }
            else if (t.Suffix.IsTwo())
            {
                var suffix = (Affix<T>.Two)t.Suffix;
                return FingerTree.Deep(Affix.One(suffix.A), FingerTree.Empty<Node<T>>(), Affix.One(suffix.B));
            }
            else if (t.Suffix.IsThree())
            {
                var suffix = (Affix<T>.Three)t.Suffix;
                return FingerTree.Deep(Affix.Two(suffix.A, suffix.B), FingerTree.Empty<Node<T>>(), Affix.One(suffix.C));
            }
            else //if (t.Suffix.IsFour())
            {
                var four = ((Affix<T>.Four)t.Suffix);
                return FingerTree.Deep(Affix.Three(four.A, four.B, four.C), FingerTree.Empty<Node<T>>(), Affix.One(four.D));
            }
        }

        public static View<T> ViewR<T>(this FingerTree<T> t)
        {
            if (t.IsEmpty())
            {
                return None<T>();
            }
            else if (t.IsSingle())
            {
                return Some(((FingerTree<T>.Single)t).A, FingerTree.Empty<T>());
            }
            else //if (t.IsDeep())
            {
                return ViewRDeep((FingerTree<T>.Deep)t);
            }
        }

        private static View<T> ViewRDeep<T>(this FingerTree<T>.Deep t)
        {
            if (t.Suffix.IsOne())
            {
                return Some(((Affix<T>.One) t.Suffix).A, t.Tree.ViewR().ViewRRemainder(t));
            }
            else
            {
                return Some(t.Suffix.Last(), FingerTree.Deep(t.Prefix, t.Tree, t.Suffix.Init()));
            }
        }

        private static FingerTree<T> ViewRRemainder<T>(this View<Node<T>> v, FingerTree<T>.Deep t)
        {
            if (v.IsSome())
            {
                var some = (View<Node<T>>.Some) v;
                return FingerTree.Deep(t.Prefix, some.Tree,
                    some.Element.ToAffix());
            }
            else if (t.Prefix.IsOne())
            {
                return FingerTree.Single(((Affix<T>.One)t.Prefix).A);
            }
            else if (t.Prefix.IsTwo())
            {
                var two = ((Affix<T>.Two)t.Prefix);
                return FingerTree.Deep(Affix.One(two.A), FingerTree.Empty<Node<T>>(), Affix.One(two.B));
            }
            else if (t.Prefix.IsThree())
            {
                var prefix = (Affix<T>.Three)t.Prefix;
                return FingerTree.Deep(Affix.One(prefix.A), FingerTree.Empty<Node<T>>(), Affix.Two(prefix.B,prefix.C));
            }
            else //if (t.Suffix.IsFour())
            {
                var prefix = (Affix<T>.Four)t.Prefix;
                return FingerTree.Deep(Affix.One(prefix.A), FingerTree.Empty<Node<T>>(), Affix.Three(prefix.B,prefix.C,prefix.D));
            }
        }
    }
}
