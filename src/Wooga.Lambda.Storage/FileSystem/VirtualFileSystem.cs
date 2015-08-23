using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using ImmutableList = System.Collections.Immutable.ImmutableList;
using Unit = Wooga.Lambda.Data.Unit;
using FileContent = System.Collections.Immutable.ImmutableList<byte>;
using VirtualDirs = System.Collections.Generic.Dictionary<Wooga.Lambda.Storage.FileSystem.Location, System.Tuple<System.Collections.Generic.List<Wooga.Lambda.Storage.FileSystem.Location>, System.Collections.Generic.List<Wooga.Lambda.Storage.FileSystem.Location>>>;
using VirtualFiles = System.Collections.Generic.Dictionary<Wooga.Lambda.Storage.FileSystem.Location, Wooga.Lambda.Storage.FileSystem.File>;
namespace Wooga.Lambda.Storage.FileSystem
{
    public class VirtualFileSystem : FileSystem
    {
        public readonly VirtualDirs dirs = new VirtualDirs();
        public readonly VirtualFiles files = new VirtualFiles();

        public Location.Combinator PathCombinator { get { return (a,b)=>(a+"/"+b).Replace("//", "/"); } }

        private VirtualFileSystem()
        {
            var x  = Tuple.Create("a", 1);
            NewDirAsync(Locate("/"));
        }
        
        public Location Locate(string s)
        {
            var p = ("/" + s).Replace("//", "/");

            var isWinDrive = PathMatch(@"^\w:\\.*");
            var isNixRoot = PathMatch(@"^\/.*");
            var isWinShare = PathMatch(@"^\\\\\w+");

            var parts =
                Pattern<Tuple<System.Collections.Immutable.ImmutableList<string>, string>>
                    .Match(p)
                    .Case(isWinDrive, _ => Tuple.Create(ImmutableList.Create(p.Substring(0, 3)), p.Substring(3)))
                    .Case(isNixRoot, _ => Tuple.Create(ImmutableList.Create("/"), p.Substring(1)))
                    .Case(isWinShare, _ => Tuple.Create(ImmutableList.Create("\\\\"), p.Substring(2)))
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
            return () => files[p];
        }

        public  Async<Unit> WriteFileAsync(Location p, FileContent c)
        {
            return () =>
            {
                files[p] = File.Create(p, c);
                return Unit.Default;
            };
        }

        public  Async<Unit> AppendFileAsync(Location p, FileContent c)
        {
            return () =>
            {
                var file = files.ContainsKey(p) ? files[p] : File.Create(p,FileContent.Empty);
                files[p] = File.Create(p, file.Content.AddRange(c));
                return Unit.Default;
            };
        }

        public  Async<Dir> GetDirAsync(Location p)
        {
            return () => Dir.Create(p, ImmutableList.ToImmutableList(dirs[p].Item1), ImmutableList.ToImmutableList(dirs[p].Item2));
        }

        public  Async<bool> HasFileAsync(Location p)
        {
            return () => files.ContainsKey(p);
        }

        public  Async<bool> HasDirAsync(Location p)
        {
            return () => dirs.ContainsKey(p);
        }

        public  Async<Unit> NewDirAsync(Location p)
        {
            return () =>
            {
                dirs[p] = Tuple.Create(new List<Location>(), new List<Location>());
                return Unit.Default;
            };
        }

        public  Async<Unit> RmDirAsync(Location p)
        {
            return () =>
            {
                var dir = GetDirAsync(p).RunSynchronously();
                foreach (var f in dir.Files)
                {
                    RmFileAsync(f);
                }
                foreach (var d in dir.Dirs)
                {
                    RmDirAsync(d);
                }
                RmDirAsync(p);
                return Unit.Default;
            };
        }

        public  Async<Unit> RmFileAsync(Location p)
        {
            return () =>
            {
                files.Remove(p);
                return Unit.Default;
            };
        }

        public Async<Unit> MvDirAsync(Location ps, Location pt)
        {
            return () =>
            {
                var dir = GetDirAsync(ps).RunSynchronously();
                NewDirAsync(pt).RunSynchronously();
                foreach (var f in dir.Files)
                {
                    MvFileAsync(f, Locate(pt, f.Name)).RunSynchronously();
                    RmFileAsync(f);
                }
                foreach (var d in dir.Dirs)
                {
                    MvDirAsync(d, Locate(pt, d.Name)).RunSynchronously();
                }
                foreach (var d in dir.Dirs)
                {
                    RmDirAsync(d);
                }
                return Unit.Default;
            };
        }

        public Async<Unit> MvFileAsync(Location ps, Location pt)
        {
            return () =>
            {
                var file = files[ps];
                files[pt] = file;
                files.Remove(ps);
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
                files[pt] = files[ps];
                return Unit.Default;
            };
        }

        public static FileSystem Virtual()
        {
            return new VirtualFileSystem();
        }

        private static string FullName(Location p)
        {
            return p.FullName((a,b)=>$"{a}/{b}");
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
