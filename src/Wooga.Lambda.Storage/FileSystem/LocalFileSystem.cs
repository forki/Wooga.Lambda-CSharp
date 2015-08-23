using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Storage.FileSystem
{
    public class LocalFileSystem : FileSystem
    {
        public static FileSystem Create()
        {
            return new LocalFileSystem();
        }

        private readonly Location.Combinator PathCombinator = Path.Combine;
        private readonly Location.Seperator PathSeperator = p => p.Split(new[] { '\\', '/' }, StringSplitOptions.RemoveEmptyEntries);

        private LocalFileSystem()
        {
        }
        
        public  Location Locate(string s)
        {
            var p = Path.GetFullPath(s);
            var isWinDrive  = PathMatch(@"^\w:\\.*");
            var isNixRoot   = PathMatch(@"^\/.*");
            var isWinShare  = PathMatch(@"^\\\\\w+");

            Func<string, string, Location> splitRoot =
                (root, rest) => Locate(Locate(Seq.Singleton(root)), rest);

            return Pattern<Location>
                    .Match(p)
                    .Case(isWinDrive,   _ => splitRoot(p.Substring(0, 3), p.Substring(3)))
                    .Case(isNixRoot,    _ => splitRoot("/", p.Substring(1)))
                    .Case(isWinShare,   _ => splitRoot("\\\\", p.Substring(2)))
                    .Default(           _ => Location.Create(PathCombinator,PathSeperator,p))
                    .Run();
        }

        public Location Locate(Location l, string s)
        {
            return Location.Create(PathCombinator, PathSeperator, l, s);
        }

        private Location Locate(IEnumerable<string> ps)
        {
            return Location.Create(PathCombinator, PathSeperator, ps);
        }

        public Location Parent(Location l)
        {
            return Location.Parent(PathCombinator, PathSeperator, l);
        }

        public  Async<File> GetFileAsync(Location p)
        {
            return () => File.Create(p, System.IO.File.ReadAllBytes(p.FullName));
        }

        public  Async<Unit> WriteFileAsync(Location p, IEnumerable<byte> c)
        {
            return () =>
            {
                System.IO.File.WriteAllBytes(p.FullName, c.ToArray());
                return Unit.Default;
            };
        }

        public  Async<Unit> AppendFileAsync(Location p, IEnumerable<byte> c)
        {
            return () =>
            {
                var bytes = c.ToArray();
                using (
                var stream = new FileStream(p.FullName, FileMode.Append))
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
                var path = p.FullName;
                var fs = Directory.GetFiles(path).Select(Locate);
                var ds = Directory.GetDirectories(path).Select(Locate);
                return Dir.Create(Locate(path), ds, fs);
            };
        }

        public  Async<bool> HasFileAsync(Location p)
        {
            return () => System.IO.File.Exists(p.FullName);
        }

        public  Async<bool> HasDirAsync(Location p)
        {
            return () => Directory.Exists(p.FullName);
        }

        public  Async<Unit> NewDirAsync(Location p)
        {
            return () =>
            {
                Directory.CreateDirectory(p.FullName);
                return Unit.Default;
            };
        }

        public  Async<Unit> RmDirAsync(Location p)
        {
            return () =>
            {
                Directory.Delete(p.FullName);
                return Unit.Default;
            };
        }

        public  Async<Unit> RmFileAsync(Location p)
        {
            return () =>
            {
                System.IO.File.Delete(p.FullName);
                return Unit.Default;
            };
        }

        public Async<Unit> MvDirAsync(Location ps, Location pt)
        {
            return () =>
            {
                Directory.Move(ps.FullName, pt.FullName);
                return Unit.Default;
            };
        }

        public Async<Unit> MvFileAsync(Location ps, Location pt)
        {
            return () =>
            {
                System.IO.File.Move(ps.FullName, pt.FullName);
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
                System.IO.File.Copy(ps.FullName, pt.FullName);
                return Unit.Default;
            };
        }

        [Obsolete("Please use LocalFileSystem.Create", false)]
        public static FileSystem Local()
        {
            return new LocalFileSystem();
        }
        
        private static Func<string, bool> PathMatch(string p)
        {
            return new Regex(p, RegexOptions.None).IsMatch;
        }
    }
}
