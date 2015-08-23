using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Data
{
    public static class Seq
    {
        public static IEnumerable<T> Append<T>(this IEnumerable<T> x, IEnumerable<T> y)
        {
            foreach (var a in x) yield return a;
            foreach (var b in y) yield return b;
        }

        public static IEnumerable<U> Choose<T,U>(this IEnumerable<T> x, Func<T,Maybe<U>> f)
        {
            return from a in x select f(a) into r where r.HasValue select r.Value;
        }

        public static IEnumerable<U> Collect<T, U>(this IEnumerable<T> x, Func<T, IEnumerable<U>> f)
        {
            return x.SelectMany(f);
        }

        public static IEnumerable<T> Concat<T>(this IEnumerable<IEnumerable<T>> x)
        {
            return x.SelectMany(a => a);
        }

        public static IEnumerable<Tuple<K,int>> CountBy<T,K>(this IEnumerable<T> x, Func<T,K> f)
        {
            return x.GroupBy(f).Select(y=>Tuple.Create(y.Key,y.Count()));
        }

        public static IEnumerable<T> Delay<T>(Func<IEnumerable<T>> f)
        {
            return f();
        }

        public static IEnumerable<T> DistinctBy<T,K>(this IEnumerable<T> x, Func<T,K> f)
        {
            return x.GroupBy(f).Select(y=>y.First());
        }

        public static IEnumerable<T> Empty<T>()
        {
            return Enumerable.Empty<T>();
        }

        public static T ExactlyOne<T>(this IEnumerable<T> x)
        {
            if(x.Count()!=1) throw new ArgumentException("Does not have exactly one argument.");
            return x.First();
        }

        public static bool Exists<T>(this IEnumerable<T> x, Func<T,bool> f)
        {
            return x.Any(f);
        }

        public static bool Exists2<T,T2>(this IEnumerable<T> x, IEnumerable<T2> y, Func<T,T2,bool> f)
        {
            return x.Zip(y).Exists(kv => f(kv.Item1, kv.Item2));
        }

        public static IEnumerable<T> Filter<T>(this IEnumerable<T> x, Func<T, bool> f)
        {
            return x.Where(f);
        }

        public static T Find<T>(this IEnumerable<T> x, Func<T, bool> f)
        {
            return x.First(f);
        }

        public static int FindIndex<T>(this IEnumerable<T> x, Func<T, bool> f)
        {
            var i = 0;
            foreach (var y in x)
            {
                if (f(y)) return i;
                i++;
            }
            throw new KeyNotFoundException();
        }

        public static S Fold<T,S>(this IEnumerable<T> x, Func<S, T, S> f, S s)
        {
            return x.Aggregate(s, f);
        }

        public static bool ForAll<T>(this IEnumerable<T> x, Func<T, bool> f)
        {
            return x.All(f);
        }

        public static bool ForAll2<T, T2>(this IEnumerable<T> x, IEnumerable<T2> y, Func<T, T2, bool> f)
        {
            return x.Zip(y).All(kv => f(kv.Item1, kv.Item2));
        }

        public static T Head<T>(this IEnumerable<T> x)
        {
            return x.First();
        }

        public static IEnumerable<T> Init<T>(int c, Func<int,T> f)
        {
            for (int i = 0; i < c; i++)
            {
                yield return f(i);
            }
        }

        public static IEnumerable<T> InitInfinite<T>(Func<int, T> f)
        {
            var i = 0;
            while (true)
            {
                yield return f(i);
                i++;
            }
        }

        public static bool IsEmpty<T>(this IEnumerable<T> x)
        {
            return !x.Any();
        }

        public static Unit Iter<T>(this IEnumerable<T> x, Func<T,Unit> f)
        {
            foreach (var a in x)
            {
                f(a);
            }
            return Unit.Default;
        }

        public static Unit Iter2<T,T2>(this IEnumerable<T> x, IEnumerable<T2> y, Func<T,T2,Unit> f)
        {
            return x.Zip(y).Iter(kv => f(kv.Item1, kv.Item2));
        }

        public static Unit Iteri<T>(this IEnumerable<T> x, Func<int, T, Unit> f)
        {
            var i = 0;
            foreach (var a in x)
            {
                f(i, a);
                i++;
            }
            return Unit.Default;
        }

        public static int Length<T>(this IEnumerable<T> x)
        {
            return x.Count();
        }

        public static IEnumerable<T2> Map<T, T2>(this IEnumerable<T> x, Func<T, T2> f)
        {
            return x.Select(f);
        }

        public static IEnumerable<T3> Map2<T, T2, T3>(this IEnumerable<T> x, IEnumerable<T2> y, Func<T, T2, T3> f)
        {
            return x.Zip(y).Map(kv => f(kv.Item1, kv.Item2));
        }

        public static IEnumerable<T2> Mapi<T, T2>(this IEnumerable<T> x, Func<int, T, T2> f)
        {
            var i = 0;
            foreach (var a in x)
            {
                yield return  f(i, a);
                i++;
            }
        }

        public static T Nth<T>(this IEnumerable<T> x, int c)
        {
            return x.ElementAt(c);
        }

        public static IEnumerable<Tuple<T,T>> Pairwise<T>(this IEnumerable<T> x)
        {
            if(x.Length()<2) throw new ArgumentException("Seq to small to build pairs.");
            var a = x.First();
            foreach (var b in x.Skip(1))
            {
                yield return Tuple.Create(a, b);
                a = b;
            }
        }

        public static T2 Pick<T,T2>(this IEnumerable<T> x, Func<T,Maybe<T2>> f)
        {
            return x.Select(f).First(y => y.IsJust()).ValueOr(() => { throw new KeyNotFoundException(); });
        }

        public static IEnumerable<T> Readonly<T>(this IEnumerable<T> x)
        {
            return new ReadOnlyCollection<T>(x.ToList());
        }

        public static bool IsReadonly<T>(this IEnumerable<T> x)
        {
            return Pattern<bool>
                .Match(x)
                .Case<ReadOnlyCollection<T>>(_ => true)
                .Case<ICollection<T>>(c => c.IsReadOnly)
                .Default(false)
                .Run();
        }

        public static T Reduce<T>(this IEnumerable<T> x, Func<T, T, T> f)
        {
            return x.Fold(f, default(T));
        }

        public static IEnumerable<S> Scan<T, S>(this IEnumerable<T> x, Func<S, T, S> f, S s)
        {
            var state = s;
            foreach (var a in x)
            {
                state = f(state, a);
                yield return state;
            }
        }

        public static IEnumerable<T> Singleton<T>(T x)
        {
            yield return x;
        }

        public static IEnumerable<T> Sort<T>(this IEnumerable<T> x)
        {
            return x.OrderBy(_ => _);
        }

        public static IEnumerable<T> SortBy<T,K>(this IEnumerable<T> x, Func<T,K> f)
        {
            return x.OrderBy(f);
        }

        public static List<T> ToList<T>(this IEnumerable<T> x)
        {
            return new List<T>(x);
        }

        public static IEnumerable<T> Truncate<T>(this IEnumerable<T> x, int c)
        {
            var i = 0;
            foreach (var a in x)
            {
                if (i < c)
                {
                    yield return a;
                }
                else
                {
                    yield break;
                }
                i++;
            }
        }

        public static Maybe<T> TryFind<T>(this IEnumerable<T> x, Func<T,bool> f)
        {
            foreach (var y in x)
            {
                if (f(y)) return Maybe.Just(y);
            }
            return Maybe.Nothing<T>();
        }

        public static Maybe<int> TryFindIndex<T>(this IEnumerable<T> x, Func<T, bool> f)
        {
            var i = 0;
            foreach (var y in x)
            {
                if (f(y)) return Maybe.Just(i);
                i++;
            }
            return Maybe.Nothing<int>();
        }

        public static Maybe<T2> TryPick<T,T2>(this IEnumerable<T> x, Func<T, Maybe<T2>> f)
        {
            foreach (var y in x)
            {
                var z = f(y);
                if (z.IsJust()) return z;
            }
            return Maybe.Nothing<T2>();
        }

        //public static IEnumerable<T> Unfold<T, S>(Func<S, Tuple<T, Maybe<S>>> f, S x)
        //{
        //    throw new NotImplementedException();
        //}

        public static IEnumerable<IEnumerable<T>> Windowed<T>(this IEnumerable<T> x, int c)
        {
            var xs = x;
            while (xs.Any())
            {
                yield return xs.Truncate(c);
                xs = xs.Skip(c);
            }
        }

        public static IEnumerable<Tuple<T,T2>> Zip<T,T2>(this IEnumerable<T> x, IEnumerable<T2> y)
        {
            var aa = x;
            var bb = y;
            while (true)
            {
                var a = aa.TryFind(_ => true);
                var b = bb.TryFind(_ => true);
                var r = b.Bind(bv => a.Map(av => Tuple.Create(av, bv)));
                if (r.IsJust())
                {
                    aa = aa.Skip(1);
                    bb = bb.Skip(1);
                    yield return r.Value;
                }
                else
                {
                    break;
                }
            }
        }

        public static IEnumerable<Tuple<T, T2,T3>> Zip3<T, T2, T3>(this IEnumerable<T> x, IEnumerable<T2> y, IEnumerable<T3> z)
        {
            var aa = x;
            var bb = y;
            var cc = z;
            while (true)
            {
                var a = aa.TryFind(_ => true);
                var b = bb.TryFind(_ => true);
                var c = cc.TryFind(_ => true);
                var r = c.Bind(cv => b.Bind(bv => a.Map(av => Tuple.Create(av, bv, cv))));
                if (r.IsJust())
                {
                    aa = aa.Skip(1);
                    bb = bb.Skip(1);
                    cc = cc.Skip(1);
                    yield return r.Value;
                }
                else
                {
                    break;
                }
            }
        }
    }
}
