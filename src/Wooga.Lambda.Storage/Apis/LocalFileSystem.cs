using System;
using System.IO;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using File = System.IO.File;

namespace Wooga.Lambda.Storage.Apis
{

    public class LocalFileSystem : FileSystem.Api
    {
        private LocalFileSystem()
        {
        }

        public Async<FileSystem.File> GetFileAsync(FileSystem.FilePath p)
        {
            return () => new FileSystem.File(p, File.ReadAllBytes(p.FullName(Path.Combine)).ToImmutableList());
        }

        public Async<Unit> WriteFileAsync(FileSystem.FilePath p, ImmutableList<byte> c)
        {
            return () =>
            {
                File.WriteAllBytes(p.FullName(Path.Combine), c.ToArray());
                return Unit.Default;
            };
        }

        public Async<Unit> AppendFileAsync(FileSystem.FilePath p, ImmutableList<byte> c)
        {
            return () =>
            {
                var bytes = c.ToArray();
                using (var stream = new FileStream(p.FullName(Path.Combine), FileMode.Append))
                {
                    stream.Write(bytes, 0, bytes.Length);
                }
                return Unit.Default;
            };
        }

        public Async<FileSystem.Dir> GetDirAsync(FileSystem.DirPath p)
        {
            return () =>
            {
                var path = p.FullName(Path.Combine);
                var fs = Directory.GetFiles(path)
                         .ToImmutableList()
                         .Map(f=> new FileInfo(f).Name);
                var ds = Directory.GetDirectories(path)
                         .ToImmutableList()
                         .Map(d=> new DirectoryInfo(d).Name);
                return new FileSystem.Dir(p, ds, fs);
            };
        }

        public Async<bool> HasFileAsync(FileSystem.FilePath p)
        {
            return () => File.Exists(p.FullName(Path.Combine));
        }

        public Async<bool> HasDirAsync(FileSystem.DirPath p)
        {
            return () => Directory.Exists(p.FullName(Path.Combine));
        }

        public Async<Unit> NewDirAsync(FileSystem.DirPath p)
        {
            return () =>
            {
                Directory.CreateDirectory(p.FullName(Path.Combine));
                return Unit.Default;
            };
        }

        public Async<Unit> RmDirAsync(FileSystem.DirPath p)
        {
            return Async.Return(() =>
            {
                Directory.Delete(p.FullName(Path.Combine));
                return Unit.Default;
            });
        }

        public Async<Unit> RmFileAsync(FileSystem.FilePath p)
        {
            return () =>
            {
                File.Delete(p.FullName(Path.Combine));
                return Unit.Default;
            };
        }

        public Async<Unit> MvDirAsync(FileSystem.DirPath ps, FileSystem.DirPath pt)
        {
            return () =>
            {
                Directory.Move(ps.FullName(Path.Combine), pt.FullName(Path.Combine));
                return Unit.Default;
            };
        }

        public Async<Unit> MvFileAsync(FileSystem.FilePath ps, FileSystem.FilePath pt)
        {
            return () =>
            {
                File.Move(ps.FullName(Path.Combine), pt.FullName(Path.Combine));
                return Unit.Default;
            };
        }

        public Async<Unit> CpDirAsync(FileSystem.DirPath ps, FileSystem.DirPath pt)
        {
            return GetDirAsync(ps)
                .Bind(d => NewDirAsync(pt).Then(() => d))
                .Bind(
                    d =>
                        d.Files
                        .Map(f => FilePath(d.Path, f))
                        .Fold<FileSystem.FilePath, Async<Unit>>(
                            (a, fp) => a.Then(CpFileAsync(fp, FilePath(pt, fp.Name))), () => Unit.Default)
                        .Then(() => d))
                .Bind(
                    d =>
                        d.Dirs
                        .Fold<string, Async<Unit>>((a, dir) => a.Then(CpDirAsync(DirPath(d.Path,dir), DirPath(pt,dir))), () => Unit.Default));
        }

        public Async<Unit> CpFileAsync(FileSystem.FilePath ps,
            FileSystem.FilePath pt)
        {
            return () =>
            {
                File.Copy(ps.FullName(Path.Combine), pt.FullName(Path.Combine));
                return Unit.Default;
            };
        }

        public FileSystem.FilePath FilePath(string s)
        {
            var file = new FileInfo(s);
            return new FileSystem.FilePath(DirPath(file.DirectoryName), file.Name);
        }

        public FileSystem.FilePath FilePath(FileSystem.DirPath p, string s)
        {
            return new FileSystem.FilePath(p, new FileInfo(s).Name);
        }

        public FileSystem.DirPath DirPath(FileSystem.DirPath p, string s)
        {
            return DirPath(Path.Combine(p.FullName(Path.Combine), s));
        }

        public FileSystem.DirPath DirPath(string s)
        {
            Func<string, bool> isWinDrive = new Regex(@"^\w:\\.*", RegexOptions.Compiled).IsMatch;
            Func<string, bool> isNixRoot = new Regex(@"^\/.*", RegexOptions.Compiled).IsMatch;
            Func<string, bool> isWinShare = new Regex(@"^\\\\\w+", RegexOptions.Compiled).IsMatch;

            var dir = new DirectoryInfo(s);
            var parts =
                Pattern<ImmutableTuple<string[], string>>.Match(dir.FullName)
                .Case(isWinDrive,   _ => ImmutableTuple.Create(new [] { s.Substring(0, 3) }, s.Substring(3)))
                .Case(isNixRoot,    _ => ImmutableTuple.Create(new [] { "/" }, s.Substring(1)))
                .Case(isWinShare,   _ => ImmutableTuple.Create(new [] { "\\\\" }, s.Substring(2)))
                .Default(_ => ImmutableTuple.Create(new string[0], s))
                .Run();

            var es =
                parts
                .Item2
                .Split(new []{'\\','/'}, StringSplitOptions.RemoveEmptyEntries)
                .ToImmutableList();
            return new FileSystem.DirPath(parts.Item1.ToImmutableList().AddRange(es));
        }

        /// <summary>   Creates a new LocalFileSystem.Api. </summary>
        /// <returns>   A FileSystem.Api. </returns>
        public static FileSystem.Api Create()
        {
            return new LocalFileSystem();
        }
    }
}
