using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using ImmutableList = System.Collections.Immutable.ImmutableList;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Storage.FileSystem
{
    public class LocalFileSystem : FileSystem
    {
        private LocalFileSystem()
        {
        }

        public Location.Combinator PathCombinator { get { return Path.Combine; } }

        public  Location Locate(string s)
        {
            var p = Path.GetFullPath(s);

            var isWinDrive = PathMatch(@"^\w:\\.*");
            var isNixRoot = PathMatch(@"^\/.*");
            var isWinShare = PathMatch(@"^\\\\\w+");

            var parts =
                Pattern<Tuple<System.Collections.Immutable.ImmutableList<string>, string>>
                    .Match(p)
                    .Case(isWinDrive,_ => Tuple.Create(ImmutableList.Create(p.Substring(0,3)), p.Substring(3)))
                    .Case(isNixRoot, _ => Tuple.Create(ImmutableList.Create("/"), p.Substring(1)))
                    .Case(isWinShare,_ => Tuple.Create(ImmutableList.Create("\\\\"), p.Substring(2)))
                    .Default(_ => Tuple.Create(System.Collections.Immutable.ImmutableList<string>.Empty, p))
                    .Run();

            var ps = PathSplit(parts.Item2);
            return Location.Create(parts.Item1.AddRange(ps));
        }

        public  Location Locate(Location p, string s)
        {
            return Location.Create(p.Paths.Add(s));
        }

        public Location Parent(Location p)
        {
            return p.Paths.Count > 1 ? Locate(Location.Create(p.Paths.RemoveAt(p.Paths.Count-1)),".") : p;
        }

        public  Async<File> GetFileAsync(Location p)
        {
            return () => File.Create(p, ImmutableList.ToImmutableList(System.IO.File.ReadAllBytes(FullName(p))));
        }

        public  Async<Unit> WriteFileAsync(Location p, System.Collections.Immutable.ImmutableList<byte> c)
        {
            return () =>
            {
                System.IO.File.WriteAllBytes(FullName(p), c.ToArray());
                return Unit.Default;
            };
        }

        public  Async<Unit> AppendFileAsync(Location p, System.Collections.Immutable.ImmutableList<byte> c)
        {
            return () =>
            {
                var bytes = c.ToArray();
                using (
                var stream = new FileStream(FullName(p), FileMode.Append))
                {
                    stream.Write(bytes, 0, bytes.Length);
                }
                return Unit.Default;
            };
        }

        public  Async<Dir> GetDirAsync(Location p)
        {
            return () =>
            {
                var path = FullName(p);
                var fs = ImmutableList.ToImmutableList(Directory.GetFiles(path).Select(Locate));
                var ds = ImmutableList.ToImmutableList(Directory.GetDirectories(path).Select(Locate));
                return Dir.Create(Locate(path), ds, fs);
            };
        }

        public  Async<bool> HasFileAsync(Location p)
        {
            return () => System.IO.File.Exists(FullName(p));
        }

        public  Async<bool> HasDirAsync(Location p)
        {
            return () => Directory.Exists(FullName(p));
        }

        public  Async<Unit> NewDirAsync(Location p)
        {
            return () =>
            {
                Directory.CreateDirectory(FullName(p));
                return Unit.Default;
            };
        }

        public  Async<Unit> RmDirAsync(Location p)
        {
            return () =>
            {
                Directory.Delete(FullName(p));
                return Unit.Default;
            };
        }

        public  Async<Unit> RmFileAsync(Location p)
        {
            return () =>
            {
                System.IO.File.Delete(FullName(p));
                return Unit.Default;
            };
        }

        public Async<Unit> MvDirAsync(Location ps, Location pt)
        {
            return () =>
            {
                Directory.Move(FullName(ps), FullName(pt));
                return Unit.Default;
            };
        }

        public Async<Unit> MvFileAsync(Location ps, Location pt)
        {
            return () =>
            {
                System.IO.File.Move(FullName(ps), FullName(pt));
                return Unit.Default;
            };
        }

        public Async<Unit> CpDirAsync(Location ps, Location pt)
        {
            return () =>
            {
                var dir = GetDirAsync(ps).RunSynchronously();
                NewDirAsync(pt).RunSynchronously();
                foreach (var f in dir.Files)
                {
                    CpFileAsync(f, Locate(pt, f.Name)).RunSynchronously();
                }
                foreach (var d in dir.Dirs)
                {
                    CpDirAsync(d, Locate(pt, d.Name)).RunSynchronously();
                }
                return Unit.Default;
            };
        }

        public Async<Unit> CpFileAsync(Location ps, Location pt)
        {
            return () =>
            {
                System.IO.File.Copy(FullName(ps), FullName(pt));
                return Unit.Default;
            };
        }

        public static FileSystem Local()
        {
            return new LocalFileSystem();
        }

        private static string FullName(Location p)
        {
            return p.FullName(Path.Combine);
        }

        private static Func<string, bool> PathMatch(string p)
        {
            return new Regex(p, RegexOptions.None).IsMatch;
        }

        private static System.Collections.Immutable.ImmutableList<string> PathSplit(string p)
        {
            return ImmutableList.ToImmutableList(p.Split(new[] {'\\', '/'}, StringSplitOptions.RemoveEmptyEntries));
        }
    }
}
