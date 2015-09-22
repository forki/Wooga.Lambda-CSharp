using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using NUnit.Framework;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Tests.Data
{
    [TestFixture]
    public class SeqTests
    {
        [TestFixture]
        public class AppendTests
        {
            [Test]
            public void AppendSeqs()
            {
                var a = ImmutableList.Create("a", "b", "c");
                var b = ImmutableList.Create("d", "e", "f");
                CollectionAssert.AreEqual(ImmutableList.Create("a", "b", "c", "d", "e", "f"), a.Append(b));
            }

            [Test]
            public void AppendToEmpty()
            {
                var a = ImmutableList<string>.Empty;
                var b = ImmutableList.Create("d", "e", "f");
                CollectionAssert.AreEqual(ImmutableList.Create("d", "e", "f"), a.Append(b));
            }

            [Test]
            public void AppendWithEmpty()
            {
                var a = ImmutableList.Create("a", "b", "c");
                var b = ImmutableList<string>.Empty;
                CollectionAssert.AreEqual(ImmutableList.Create("a", "b", "c"), a.Append(b));
            }
        }

        [TestFixture]
        public class ChooseTests
        {
            [Test]
            public void ChooseNone()
            {
                var a = ImmutableList.Create("a", "b", "c");
                CollectionAssert.AreEqual(ImmutableList<Unit>.Empty, a.Choose(_=>Maybe.Nothing<Unit>()));
            }

            [Test]
            public void ChooseAll()
            {
                var a = ImmutableList.Create("a", "b", "c");
                CollectionAssert.AreEqual(a, a.Choose(Maybe.Just));
            }

            [Test]
            public void ChooseOne()
            {
                var a = ImmutableList.Create("a", "b", "c");
                CollectionAssert.AreEqual(ImmutableList.Create("b"), a.Choose(_ => _ == "b" ? Maybe.Just(_) : Maybe.Nothing<string>()));
            }

        }

        [TestFixture]
        public class CollectTests
        {
            [Test]
            public void Collect()
            {
                var a = ImmutableList.Create("ab", "cd");
                CollectionAssert.AreEqual(ImmutableList.Create('a','b','c','d'), a.SelectMany(s=>s.ToCharArray()));
            }
        }

        [TestFixture]
        public class ConcatTests
        {
            [Test]
            public void Concat()
            {
                var a = ImmutableList.Create<IEnumerable<string>>(ImmutableList.Create("a", "b"), ImmutableList.Create("c", "d"));
                CollectionAssert.AreEqual(ImmutableList.Create("a", "b", "c", "d"), a.Concat());
            }
        }

        [TestFixture]
        public class CountTests
        {
            [Test]
            public void CountBy()
            {
                var a = ImmutableList.Create("a","a","a","b","b","c");
                var e = ImmutableList.Create(Tuple.Create("a", 3), Tuple.Create("b", 2), Tuple.Create("c", 1));
                CollectionAssert.AreEqual(e, a.CountBy(_=>_));
            }
        }

        [TestFixture]
        public class DistinctTests
        {
            [Test]
            public void DistinctBy()
            {
                var a = ImmutableList.Create("a", "a", "a", "b", "b", "c");
                var e = ImmutableList.Create("a","b","c");
                CollectionAssert.AreEqual(e, a.DistinctBy(_ => _));
            }
        }

        [TestFixture]
        public class SingletonTests
        {
            [Test]
            public void GetsExactlyOne()
            {
                var a = ImmutableList.Create("a");
                CollectionAssert.AreEqual("a", a.ExactlyOne());
            }

            [Test]
            [ExpectedException(typeof(ArgumentException))]
            public void FailsExactlyOne()
            {
                var a = ImmutableList.Create("a","b");
                CollectionAssert.AreEqual("a", a.ExactlyOne());
            }
        }

        [TestFixture]
        public class ExistTests
        {
            [Test]
            public void Contains()
            {
                var a = ImmutableList.Create("a");
                Assert.IsTrue(a.Exists(x=>x=="a"));
            }

            [Test]
            public void NotContains()
            {
                var a = ImmutableList.Create("a");
                Assert.IsFalse(a.Exists(x => x == "b"));
            }

            [Test]
            public void BothContain()
            {
                var a = ImmutableList.Create("a");
                var b = ImmutableList.Create("b");
                Assert.IsTrue(Seq.Exists2(a,b,(x,y) => x == "a" && y == "b"));
            }

            [Test]
            public void OneContains()
            {
                var a = ImmutableList.Create("a");
                var b = ImmutableList.Create("c");
                Assert.IsFalse(Seq.Exists2(a, b, (x, y) => x == "a" && y == "b"));
            }

            [Test]
            public void NoneContains()
            {
                var a = ImmutableList.Create("z");
                var b = ImmutableList.Create("c");
                Assert.IsFalse(Seq.Exists2(a, b, (x, y) => x == "a" && y == "b"));
            }

        }

        [TestFixture]
        public class FindTests
        {
            [Test]
            public void FindIndex()
            {
                var a = ImmutableList.Create("a");
                var b = ImmutableList.Create("_","_","a");
                var c = ImmutableList.Create("_","a","_");
                Assert.AreEqual(0,Seq.FindIndex(a,_=>_=="a"));
                Assert.AreEqual(2,Seq.FindIndex(b,_=>_=="a"));
                Assert.AreEqual(1,Seq.FindIndex(c,_=>_=="a"));
            }

            [Test]
            public void TryFind()
            {
                var a = ImmutableList.Create("a").TryFind(_=>true);
                var b = ImmutableList.Create("a").TryFind(_=>false);
                var c = ImmutableList.Create("_", "a", "_").TryFind(_=>_=="a");
                var d = ImmutableList.Create("_", "_", "_").TryFind(_=>_=="a");
                Assert.AreEqual(Maybe.Just("a"), a);
                Assert.AreEqual(Maybe.Nothing<string>(), b);
                Assert.AreEqual(Maybe.Just("a"), c);
                Assert.AreEqual(Maybe.Nothing<string>(), d);
            }

            [Test]
            public void TryFindIndex()
            {
                var a = ImmutableList.Create("a").TryFindIndex(_ => true);
                var b = ImmutableList.Create("a").TryFindIndex(_ => false);
                var c = ImmutableList.Create("_", "a", "_").TryFindIndex(_ => _ == "a");
                var d = ImmutableList.Create("_", "_", "_").TryFindIndex(_ => _ == "a");
                Assert.AreEqual(Maybe.Just(0), a);
                Assert.AreEqual(Maybe.Nothing<int>(), b);
                Assert.AreEqual(Maybe.Just(1), c);
                Assert.AreEqual(Maybe.Nothing<int>(), d);
            }
        }

        [TestFixture]
        public class ForAllTests
        {
            [Test]
            public void BothMatch()
            {
                var a = ImmutableList.Create("a","a","a");
                var b = ImmutableList.Create("b", "b", "b");
                Assert.IsTrue(Seq.All(a,b,(x,y)=>x=="a"&&y=="b"));
            }

            [Test]
            public void OneMatch()
            {
                var a = ImmutableList.Create("a", "a", "a");
                var b = ImmutableList.Create("b", "b", "b");
                Assert.IsFalse(Seq.All(a, b, (x, y) => x == "a" && y == "c"));
            }

            [Test]
            public void NoneMatch()
            {
                var a = ImmutableList.Create("a", "a", "a");
                var b = ImmutableList.Create("b", "b", "b");
                Assert.IsFalse(Seq.All(a, b, (x, y) => x == "z" && y == "c"));
            }
        }

        [TestFixture]
        public class InitTests
        {
            [Test]
            public void Init()
            {
                var a = Seq.Init(4, _ => _);
                CollectionAssert.AreEqual(ImmutableList.Create(0,1,2,3), a);
            }

            [Test]
            public void Infinite()
            {
                var a = Seq.InitInfinite(_ => DateTime.Now);
                CollectionAssert.IsNotEmpty(a);
                Assert.AreEqual(1000,a.Take(1000).Count());
            }
        }

        [TestFixture]
        public class IterTests
        {
            [Test]
            public void Iter()
            {
                var s = ImmutableList<string>.Empty;
                var a = Seq.Init(4, _ => "a");
                a.Iter(x =>
                {
                    s = s.Add(x);
                    return Unit.Default;
                });
                CollectionAssert.AreEqual(ImmutableList.Create("a", "a", "a", "a"), s);
            }

            [Test]
            public void Iteri()
            {
                var s = ImmutableList<int>.Empty;
                var a = Seq.Init(4, _ => _);
                a.Iter(x =>
                {
                    s = s.Add(x);
                    return Unit.Default;
                });
                CollectionAssert.AreEqual(ImmutableList.Create(0,1,2,3), s);
            }

            [Test]
            public void Iter2()
            {
                var s = ImmutableList<Tuple<int,string>>.Empty;
                var a = Seq.Init(4, _ => _);
                var b = Seq.Init(4, _ => "a");
                Seq.Iter(a, b, (x, y) =>
                {
                    s = s.Add(Tuple.Create(x, y));
                    return Unit.Default;
                });
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0,"a"), Tuple.Create(1, "a"), Tuple.Create(2, "a"), Tuple.Create(3, "a")), s);
            }
        }

        [TestFixture]
        public class MapTests
        {
            [Test]
            public void Map2()
            {
                var a = Seq.Init(4, _ => _);
                var b = Seq.Init(4, _ => "a");
                var r = Seq.Select(a, b, Tuple.Create);
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, "a"), Tuple.Create(1, "a"), Tuple.Create(2, "a"), Tuple.Create(3, "a")), r);
            }

            [Test]
            public void Mapi()
            {
                var b = Seq.Init(4, _ => "a");
                var r = b.Mapi(Tuple.Create);
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, "a"), Tuple.Create(1, "a"), Tuple.Create(2, "a"), Tuple.Create(3, "a")), r);
            }
        }

        [TestFixture]
        public class PairTests
        {
            [Test]
            public void Pairwise()
            {
                var a = Seq.Init(4, _ => _);
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, 1), Tuple.Create(1, 2), Tuple.Create(2, 3)), a.Pairwise().ToImmutableList());
            }

            [Test]
            [ExpectedException(typeof (ArgumentException))]
            public void FailSingleton()
            {
                Seq.Init(1, _ => _).Pairwise().ToImmutableList();
            }

            [Test]
            [ExpectedException(typeof(ArgumentException))]
            public void FailEmpty()
            {
                Seq.Empty<Unit>().Pairwise().ToImmutableList();
            }
        }

        [TestFixture]
        public class PickTests
        {
            [Test]
            [ExpectedException(typeof(InvalidOperationException))]
            public void PickNone()
            {
                ImmutableList.Create("a", "b", "c").Pick(_ => Maybe.Nothing<Unit>());
            }

            [Test]
            public void PickOne()
            {
                var a = ImmutableList.Create("a", "b", "c").Pick(_ => _=="c"? Maybe.Just(_) : Maybe.Nothing<string>());
                CollectionAssert.AreEqual("c",a);
            }

            [Test]
            public void TryPick()
            {
                var a = ImmutableList.Create("a").TryPick(_ => Maybe.Just('a'));
                var b = ImmutableList.Create("a").TryPick(_ => Maybe.Nothing<char>());
                var c = ImmutableList.Create("_", "a", "_").TryPick(_ => _ == "a" ? Maybe.Just('a') : Maybe.Nothing<char>());
                var d = ImmutableList.Create("_", "_", "_").TryPick(_ => _ == "a" ? Maybe.Just('a') : Maybe.Nothing<char>());
                Assert.AreEqual(Maybe.Just('a'), a);
                Assert.AreEqual(Maybe.Nothing<char>(), b);
                Assert.AreEqual(Maybe.Just('a'), c);
                Assert.AreEqual(Maybe.Nothing<char>(), d);
            }
        }

        [TestFixture]
        public class ReadonlyTests
        {
            [Test]
            public void IsReadonly()
            {
                Assert.IsTrue(ImmutableList<Unit>.Empty.IsReadonly());
                Assert.IsTrue(ImmutableArray<Unit>.Empty.IsReadonly());
                Assert.IsTrue(ImmutableDictionary<Unit,Unit>.Empty.IsReadonly());
                Assert.IsTrue(ImmutableHashSet<Unit>.Empty.IsReadonly());

                Assert.IsFalse(new List<Unit>().IsReadonly());
                Assert.IsFalse(new HashSet<Unit>().IsReadonly());
                Assert.IsFalse(new Dictionary<Unit,Unit>().IsReadonly());
            }

            [Test]
            public void MakeReadonly()
            {
                var m = new List<string>() {"a", "b", "c"};
                var r = m.Readonly();
                Assert.IsTrue(r.IsReadonly());
            }

        }

        [TestFixture]
        public class ScanTests
        {
            [Test]
            public void Scan()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Scan((s, z) => s+z, 0).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(0,1,3,6),y);
            }

        }

        [TestFixture]
        public class TruncateTests
        {
            [Test]
            public void TruncateSmaller()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Truncate(2).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(0, 1), y);
            }

            [Test]
            public void TruncateEven()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Truncate(4).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(0, 1,2,3), y);
            }

            [Test]
            public void TruncateBigger()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Truncate(6).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(0, 1,2,3), y);
            }

        }

        [TestFixture]
        public class WindowTests
        {
            [Test]
            public void WindowSmaller()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Windowed(2).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(ImmutableList.Create(0, 1), ImmutableList.Create(2, 3)), y);
            }

            [Test]
            public void WindowEven()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Windowed(4).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(ImmutableList.Create(0, 1, 2, 3)), y);
            }

            [Test]
            public void WindowBigger()
            {
                var x = Seq.Init(4, _ => _);
                var y = x.Windowed(6).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(ImmutableList.Create(0, 1, 2, 3)), y);
            }

        }

        [TestFixture]
        public class ZipTests
        {
            [Test]
            public void ZipEven()
            {
                var x = Seq.Init(3, _ => _);
                var y = Seq.Init(3, _ => "a");
                var z = Seq.Zip(x, y);
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, "a"), Tuple.Create(1, "a"), Tuple.Create(2, "a")), z.ToImmutableList());
            }

            [Test]
            public void ZipSmaller()
            {
                var x = Seq.Init(1, _ => _);
                var y = Seq.Init(2, _ => "a");
                var z = Seq.Zip(x, y).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, "a")), z);
            }

            [Test]
            public void ZipBigger()
            {
                var x = Seq.Init(4, _ => _);
                var y = Seq.Init(2, _ => "a");
                var z = Seq.Zip(x, y).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create(0, "a"), Tuple.Create(1, "a")), z);
            }

            [Test]
            public void Zip3Even()
            {
                var w = Seq.Init(3, _ => 'b');
                var x = Seq.Init(3, _ => _);
                var y = Seq.Init(3, _ => "a");
                var z = Seq.Zip3(w, x, y);
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create('b', 0, "a"), Tuple.Create('b', 1, "a"), Tuple.Create('b', 2, "a")), z.ToImmutableList());
            }

            [Test]
            public void Zip3Smaller()
            {
                var w = Seq.Init(3, _ => 'b');
                var x = Seq.Init(1, _ => _);
                var y = Seq.Init(2, _ => "a");
                var z = Seq.Zip3(w,x, y).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create('b', 0, "a")), z);
            }

            [Test]
            public void Zip3Bigger()
            {
                var w = Seq.Init(3, _ => 'b');
                var x = Seq.Init(4, _ => _);
                var y = Seq.Init(2, _ => "a");
                var z = Seq.Zip3(w,x, y).ToImmutableList();
                CollectionAssert.AreEqual(ImmutableList.Create(Tuple.Create('b', 0, "a"), Tuple.Create('b', 1, "a")), z);
            }
        }
    }
}
