using System;
using System.IO;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Storage.Apis
{
    /// <summary>   A local file system. </summary>
    public class LocalFileSystem : FileSystem.Api
    {
        private LocalFileSystem()
        {
        }

        /// <summary>   Gets file asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   The file asynchronous. </returns>
        public Async<Maybe<FileSystem.File>> GetFileAsync(FileSystem.FilePath p)
        {
            return () => Async
                .Return(() => File.ReadAllBytes(p.ToString(Path.Combine)).ToImmutableList())
                .Catch()
                .RunSynchronously()
                .FromEither(e => Maybe.Nothing<FileSystem.File>(),
                    b => Maybe.Just(new FileSystem.File(p, b)));
        }

        /// <summary>   Writes a file asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <param name="c">    The ImmutableList&lt;byte&gt; to process. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> WriteFileAsync(FileSystem.FilePath p, ImmutableList<byte> c)
        {
            return () => Async
                .Return(() =>
                {
                    File.WriteAllBytes(p.ToString(Path.Combine), c.ToArray());
                    return Unit.Default;
                })
                .Catch()
                .RunSynchronously()
                .FromEither(e => false, b => true);
        }

        /// <summary>   Appends a file asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <param name="c">    The ImmutableList&lt;byte&gt; to process. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> AppendFileAsync(FileSystem.FilePath p, ImmutableList<byte> c)
        {
            return () => Async
                .Return(() =>
                {
                    byte[] bytes = c.ToArray();
                    using (var stream = new FileStream(p.ToString(Path.Combine), FileMode.Append))
                    {
                        stream.Write(bytes, 0, bytes.Length);
                    }
                    return Unit.Default;
                })
                .Catch()
                .RunSynchronously()
                .FromEither(e => false, b => true);
        }

        /// <summary>   Gets dir asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   The dir asynchronous. </returns>
        public Async<Maybe<FileSystem.Dir>> GetDirAsync(FileSystem.DirPath p)
        {
            return () =>
            {
                Func<string[], ImmutableList<string>> trim =
                    xs => xs.ToImmutableList().Map(f => new FileInfo(f).Name);

                var fs = trim(Directory.GetFiles(p.ToString(Path.Combine)));
                var ds = trim(Directory.GetDirectories(p.ToString(Path.Combine)));
                return Maybe.Just(new FileSystem.Dir(p, ds, fs));
            };
        }

        /// <summary>   Has file asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> HasFileAsync(FileSystem.FilePath p)
        {
            return () => File.Exists(p.ToString(Path.Combine));
        }

        /// <summary>   Has dir asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> HasDirAsync(FileSystem.DirPath p)
        {
            return () => Directory.Exists(p.ToString(Path.Combine));
        }

        /// <summary>   Creates a new dir asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;Unit&gt; </returns>
        public Async<Unit> NewDirAsync(FileSystem.DirPath p)
        {
            return Async.Return(() =>
            {
                Directory.CreateDirectory(p.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Ignore();
        }

        /// <summary>   Removes the dir asynchronous described by p. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;Unit&gt; </returns>
        public Async<Unit> RmDirAsync(FileSystem.DirPath p)
        {
            return Async.Return(() =>
            {
                Directory.Delete(p.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Ignore();
        }

        /// <summary>   Removes the file asynchronous described by p. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;Unit&gt; </returns>
        public Async<Unit> RmFileAsync(FileSystem.FilePath p)
        {
            return Async.Return(() =>
            {
                File.Delete(p.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Ignore();
        }

        /// <summary>   Mv dir asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> MvDirAsync(FileSystem.DirPath ps, FileSystem.DirPath pt)
        {
            return Async.Return(() =>
            {
                Directory.Move(ps.ToString(Path.Combine), pt.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        /// <summary>   Mv file asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> MvFileAsync(FileSystem.FilePath ps, FileSystem.FilePath pt)
        {
            return Async.Return(() =>
            {
                File.Move(ps.ToString(Path.Combine), pt.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        /// <summary>   Cp dir asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> CpDirAsync(FileSystem.DirPath ps, FileSystem.DirPath pt)
        {
            return Async.Return(() =>
            {
                var Y = Async.Return(true);
                var d = GetDirAsync(ps).RunSynchronously().FromJust();
                return NewDirAsync(pt)
                    .Then(
                        d.Files.Fold(
                            (a, f) =>
                                a.Then(CpFileAsync(new FileSystem.FilePath(d.Path, f), new FileSystem.FilePath(pt, f))), Y))
                    .Then(d.Dirs.Fold((a, f) => a.Then(CpDirAsync(new FileSystem.DirPath(ps.PathElements.Add(f)), new FileSystem.DirPath(pt.PathElements.Add(f)))), Y))
                    .RunSynchronously();
            });
        }

        /// <summary>   Cp file asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> CpFileAsync(FileSystem.FilePath ps,
            FileSystem.FilePath pt)
        {
            return Async.Return(() =>
            {
                File.Copy(ps.ToString(Path.Combine), pt.ToString(Path.Combine));
                return Unit.Default;
            })
            .Catch()
            .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        private static readonly string DirSeperator = Path.DirectorySeparatorChar.ToString();

        public FileSystem.FilePath FilePath(string s)
        {
            var file = new FileInfo(s);
            return new FileSystem.FilePath(DirPath(file.DirectoryName), file.Name);
        }

        public FileSystem.FilePath FilePath(FileSystem.DirPath p, string s)
        {
            var file = new FileInfo(s);
            return new FileSystem.FilePath(p, file.Name);
        }

        public FileSystem.DirPath DirPath(string s)
        {
            var dir = new DirectoryInfo(s);
            var es = dir.FullName.Split(Path.DirectorySeparatorChar).ToImmutableList<string>();
            if (dir.Root.ToString().Equals(DirSeperator))
            {
                es = es.Insert(DirSeperator, 0);
            }
            return new FileSystem.DirPath(es);
        }

        /// <summary>   Creates a new LocalFileSystem.Api. </summary>
        /// <returns>   A FileSystem.Api. </returns>
        public static FileSystem.Api Create()
        {
            return new LocalFileSystem();
        }

    }
}
