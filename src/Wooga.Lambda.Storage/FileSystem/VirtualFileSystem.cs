using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using FileContent = System.Collections.Generic.IEnumerable<byte>;

namespace Wooga.Lambda.Storage.FileSystem
{
    //public class VirtualFileSystem : FileSystem
    //{
    //    public static FileSystem Create()
    //    {
    //        return new VirtualFileSystem();
    //    }

    //    private readonly Location.Combinator PathCombinator = Path.Combine;
    //    private readonly Location.Seperator PathSeperator = p => p.Split(new[] { '\\', '/' }, StringSplitOptions.RemoveEmptyEntries);

    //    private VirtualFileSystem()
    //    {
    //    }

    //    public Location Locate(string s)
    //    {
    //        var p = Path.GetFullPath(s);
    //        var isWinDrive = PathMatch(@"^\w:\\.*");
    //        var isNixRoot = PathMatch(@"^\/.*");
    //        var isWinShare = PathMatch(@"^\\\\\w+");

    //        Func<string, string, Location> splitRoot =
    //            (root, rest) => Locate(Locate(Seq.Singleton(root)), rest);

    //        return Pattern<Location>
    //                .Match(p)
    //                .Case(isWinDrive,   _ => splitRoot(p.Substring(0, 3), p.Substring(3)))
    //                .Case(isNixRoot,    _ => splitRoot("/", p.Substring(1)))
    //                .Case(isWinShare,   _ => splitRoot("\\\\", p.Substring(2)))
    //                .Default(           _ => Location.Create(PathCombinator, PathSeperator, p))
    //                .Run();
    //    }

    //    public Location Locate(Location l, string s)
    //    {
    //        return Location.Create(PathCombinator, PathSeperator, l, s);
    //    }

    //    private Location Locate(IEnumerable<string> ps)
    //    {
    //        return Location.Create(PathCombinator, PathSeperator, ps);
    //    }

    //    public Location Parent(Location l)
    //    {
    //        return Location.Parent(PathCombinator, PathSeperator, l);
    //    }

    //    public  Async<File> GetFileAsync(Location p)
    //    {
    //        return () => ;
    //    }

    //    public  Async<Unit> WriteFileAsync(Location p, FileContent c)
    //    {
    //        return () =>
    //        {
    //            files[p] = File.Create(p, c);
    //            return Unit.Default;
    //        };
    //    }

    //    public  Async<Unit> AppendFileAsync(Location p, FileContent c)
    //    {
    //        return () =>
    //        {
    //            var file = files.ContainsKey(p) ? files[p] : File.Create(p,Seq.Empty<byte>());
    //            files[p] = File.Create(p, file.Content.Append(c));
    //            return Unit.Default;
    //        };
    //    }

    //    public  Async<Dir> GetDirAsync(Location p)
    //    {
    //        return () => Dir.Create(p, dirs[p].Item1.ToImmutableList(), dirs[p].Item2.ToImmutableList());
    //    }

    //    public  Async<bool> HasFileAsync(Location p)
    //    {
    //        return () => files.ContainsKey(p);
    //    }

    //    public  Async<bool> HasDirAsync(Location p)
    //    {
    //        return () => VirtualDir.Root.;
    //    }

    //    public  Async<Unit> NewDirAsync(Location p)
    //    {
    //        return () =>
    //        {
    //            dirs[p] = Tuple.Create(new List<Location>(), new List<Location>());
    //            return Unit.Default;
    //        };
    //    }

    //    public  Async<Unit> RmDirAsync(Location p)
    //    {
    //        return () =>
    //        {
    //            var dir = GetDirAsync(p).RunSynchronously();
    //            foreach (var f in dir.Files)
    //            {
    //                RmFileAsync(f);
    //            }
    //            foreach (var d in dir.Dirs)
    //            {
    //                RmDirAsync(d);
    //            }
    //            RmDirAsync(p);
    //            return Unit.Default;
    //        };
    //    }

    //    public  Async<Unit> RmFileAsync(Location p)
    //    {
    //        return () =>
    //        {
    //            files.Remove(p);
    //            return Unit.Default;
    //        };
    //    }

    //    public Async<Unit> MvDirAsync(Location ps, Location pt)
    //    {
    //        return () =>
    //        {
    //            var dir = GetDirAsync(ps).RunSynchronously();
    //            NewDirAsync(pt).RunSynchronously();
    //            foreach (var f in dir.Files)
    //            {
    //                MvFileAsync(f, Locate(pt, f.Name)).RunSynchronously();
    //                RmFileAsync(f);
    //            }
    //            foreach (var d in dir.Dirs)
    //            {
    //                MvDirAsync(d, Locate(pt, d.Name)).RunSynchronously();
    //            }
    //            foreach (var d in dir.Dirs)
    //            {
    //                RmDirAsync(d);
    //            }
    //            return Unit.Default;
    //        };
    //    }

    //    public Async<Unit> MvFileAsync(Location ps, Location pt)
    //    {
    //        return () =>
    //        {
    //            var file = files[ps];
    //            files[pt] = file;
    //            files.Remove(ps);
    //            return Unit.Default;
    //        };
    //    }

    //    public Async<Unit> CpDirAsync(Location ps, Location pt)
    //    {
    //        return () =>
    //        {
    //            var dir = GetDirAsync(ps).RunSynchronously();
    //            NewDirAsync(pt).RunSynchronously();
    //            foreach (var f in dir.Files)
    //            {
    //                CpFileAsync(f, Locate(pt, f.Name)).RunSynchronously();
    //            }
    //            foreach (var d in dir.Dirs)
    //            {
    //                CpDirAsync(d, Locate(pt, d.Name)).RunSynchronously();
    //            }
    //            return Unit.Default;
    //        };
    //    }

    //    public Async<Unit> CpFileAsync(Location ps, Location pt)
    //    {
    //        return () =>
    //        {
    //            files[pt] = files[ps];
    //            return Unit.Default;
    //        };
    //    }

    //    [Obsolete("Please use VirtualFileSystem.Create", false)]
    //    public static FileSystem Virtual()
    //    {
    //        return new VirtualFileSystem();
    //    }
        
    //    private static Func<string, bool> PathMatch(string p)
    //    {
    //        return new Regex(p, RegexOptions.None).IsMatch;
    //    }

    //    private struct VirtualDir
    //    {
    //        public static readonly VirtualDir Root = new VirtualDir(
    //            Location.Create(Seq.Singleton(""),"",""), 
    //            new Dictionary<string,VirtualDir>(), 
    //            new Dictionary<string, File>());

    //        public readonly Location Location;
    //        public readonly Dictionary<string,VirtualDir> Dirs;
    //        public readonly Dictionary<string,File> Files;

    //        private VirtualDir(Location location, Dictionary<string, VirtualDir> dirs, Dictionary<string, File> files)
    //        {
    //            Location = location;
    //            Dirs = dirs;
    //            Files = files;
    //        }

    //        public VirtualDir GetDir(string s)
    //        {
    //            return Dirs[s];
    //        }

    //        public File GetFile(string s)
    //        {
    //            return Files[s];
    //        }
    //    }
    //}
}
