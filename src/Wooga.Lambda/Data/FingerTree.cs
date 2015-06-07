using System;
using Wooga.Lambda.Control;

// http://andrew.gibiansky.com/blog/haskell/finger-trees/

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

        public static T Head<T>(this FingerTree<T> t)
        {
            return Pattern<T>
                .Match(t.ViewL())
                .Case<View<T>.Some>(s => s.Element)
                .Default(_ =>
                {
                    throw new Exception("Tree is empty.");
                })
                .Run();
        }

        public static FingerTree<T> Tail<T>(this FingerTree<T> t)
        {
            return Pattern<FingerTree<T>>
                .Match(t.ViewL())
                .Case<View<T>.Some>(s => s.Tree)
                .Default(_ =>
                {
                    throw new Exception("Tree is empty.");
                })
                .Run();
        }

        public static T Last<T>(this FingerTree<T> t)
        {
            return Pattern<T>
                .Match(t.ViewR())
                .Case<View<T>.Some>(s => s.Element)
                .Default(_ =>
                {
                    throw new Exception("Tree is empty.");
                })
                .Run();
        }

        public static FingerTree<T> Init<T>(this FingerTree<T> t)
        {
            return Pattern<FingerTree<T>>
                .Match(t.ViewR())
                .Case<View<T>.Some>(s => s.Tree)
                .Default(_ =>
                {
                    throw new Exception("Tree is empty.");
                })
                .Run();
        }

        public static bool IsEmpty<T>(this FingerTree<T> t)
        {
            return Pattern<bool>
                .Match(t.ViewR())
                .Case<View<T>.Some>(_=>false)
                .Default(_=>true)
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
                })
                .Run();
        }

        public static T Last<T>(this Affix<T> a)
        {
            return Pattern<T>
                .Match(a)
                .Case<Affix<T>.One>(y => y.A)
                .Case<Affix<T>.Two>(y => y.B)
                .Case<Affix<T>.Three>(y => y.C)
                .Case<Affix<T>.Four>(y => y.D)
                .Run();
        }

        public static Affix<T> Init<T>(this Affix<T> a)
        {
            return Pattern<Affix<T>>
                .Match(a)
                .Case<Affix<T>.Two>(y => One(y.A))
                .Case<Affix<T>.Three>(y => Two(y.A,y.B))
                .Case<Affix<T>.Four>(y => Three(y.A,y.B,y.C))
                .Default(_ =>
                {
                    throw new Exception("Affix must have one to four elements");
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

        public static Affix<T> ToAffix<T>(this Node<T> n)
        {
            return Pattern<Affix<T>>
                .Match(n)
                .Case<Node<T>.Duo>(d => Affix.Two(d.A, d.B))
                .Case<Node<T>.Trio>(d => Affix.Three(d.A, d.B, d.C))
                .Run();
        }
    }

    public abstract class View<T>
    {
        public sealed class None : View<T>
        {
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
            return Pattern<View<T>>
                .Match(t)
                .Case<FingerTree<T>.Empty>(_ => None<T>())
                .Case<FingerTree<T>.Single>(s => Some(s.A,FingerTree.Empty<T>()))
                .Case<FingerTree<T>.Deep>(ViewLDeep)
                .Run();
        }

        private static View<T> ViewLDeep<T>(this FingerTree<T>.Deep t)
        {
            return Pattern<View<T>>
                .Match(t.Prefix)
                .Case<Affix<T>.One>(a   => Some(a.A, t.Tree.ViewL().ViewLRemainder(t)))
                .Case<Affix<T>.Two>(a   => Some(a.A, FingerTree.Deep(Affix.One(a.B),t.Tree,t.Suffix)))
                .Case<Affix<T>.Three>(a => Some(a.A, FingerTree.Deep(Affix.Two(a.B,a.C), t.Tree, t.Suffix)))
                .Case<Affix<T>.Four>(a  => Some(a.A, FingerTree.Deep(Affix.Three(a.B, a.C, a.D), t.Tree, t.Suffix)))
                .Run();
        }

        private static FingerTree<T> ViewLRemainder<T>(this View<Node<T>> v, FingerTree<T>.Deep t)
        {
            return Pattern<FingerTree<T>>
                .Match(v)
                .Case<View<Node<T>>.Some>(a => FingerTree.Deep(a.Element.ToAffix(),a.Tree,t.Suffix))
                .Case<View<Node<T>>.None>(_ =>
                {
                    return Pattern<FingerTree<T>>
                        .Match(t.Suffix)
                        .Case<Affix<T>.One>(a => FingerTree.Single(a.A))
                        .Case<Affix<T>.Two>(a => FingerTree.Deep(Affix.One(a.A), FingerTree.Empty<Node<T>>(), Affix.One(a.B)))
                        .Case<Affix<T>.Three>(a => FingerTree.Deep(Affix.Two(a.A,a.B), FingerTree.Empty<Node<T>>(), Affix.One(a.C)))
                        .Case<Affix<T>.Four>(a => FingerTree.Deep(Affix.Three(a.A, a.B, a.C), FingerTree.Empty<Node<T>>(), Affix.One(a.D)))
                        .Run();
                })
                .Run();
        }

        public static View<T> ViewR<T>(this FingerTree<T> t)
        {
            return Pattern<View<T>>
                .Match(t)
                .Case<FingerTree<T>.Empty>(_ => None<T>())
                .Case<FingerTree<T>.Single>(s => Some(s.A, FingerTree.Empty<T>()))
                .Case<FingerTree<T>.Deep>(ViewRDeep)
                .Run();
        }

        private static View<T> ViewRDeep<T>(this FingerTree<T>.Deep t)
        {
            return Pattern<View<T>>
                .Match(t.Suffix)
                .Case<Affix<T>.One>(a => Some(a.A, t.Tree.ViewR().ViewRRemainder(t)))
                .Default(a => Some(a.Last(), FingerTree.Deep(t.Prefix, t.Tree, t.Suffix.Init())))
                .Run();
        }

        private static FingerTree<T> ViewRRemainder<T>(this View<Node<T>> v, FingerTree<T>.Deep t)
        {
            return Pattern<FingerTree<T>>
                .Match(v)
                .Case<View<Node<T>>.Some>(a => FingerTree.Deep(t.Prefix, a.Tree, a.Element.ToAffix()))
                .Case<View<Node<T>>.None>(_ =>
                {
                    return Pattern<FingerTree<T>>
                        .Match(t.Prefix)
                        .Case<Affix<T>.One>(a => FingerTree.Single(a.A))
                        .Case<Affix<T>.Two>(a => FingerTree.Deep(Affix.One(a.A), FingerTree.Empty<Node<T>>(), Affix.One(a.B)))
                        .Case<Affix<T>.Three>(a => FingerTree.Deep(Affix.One(a.A), FingerTree.Empty<Node<T>>(), Affix.Two(a.B,a.C)))
                        .Case<Affix<T>.Four>(a => FingerTree.Deep(Affix.One(a.A), FingerTree.Empty<Node<T>>(), Affix.Three(a.B,a.C,a.D)))
                        .Run();
                })
                .Run();
        }
    }
}