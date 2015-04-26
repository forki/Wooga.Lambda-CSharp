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
        public Async<Maybe<FileSystem.File>> GetFileAsync(ImmutableTuple<ImmutableList<string>, string> p)
        {
            return () => Async
                .Return(() => File.ReadAllBytes(DirListWithFileAsString(p.Item1, p.Item2)).ToImmutableList())
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
        public Async<bool> WriteFileAsync(ImmutableTuple<ImmutableList<string>, string> p, ImmutableList<byte> c)
        {
            return () => Async
                .Return(() =>
                {
                    File.WriteAllBytes(DirListWithFileAsString(p.Item1, p.Item2), c.ToArray());
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
        public Async<bool> AppendFileAsync(ImmutableTuple<ImmutableList<string>, string> p, ImmutableList<byte> c)
        {
            return () => Async
                .Return(() =>
                {
                    AppendAllBytes(DirListWithFileAsString(p.Item1, p.Item2), c.ToArray());
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
        public Async<Maybe<FileSystem.Dir>> GetDirAsync(ImmutableList<string> p)
        {
            return () =>
            {
                Func<string[], ImmutableList<string>> trim =
                    xs => xs.ToImmutableList().Map(f => new FileInfo(f).Name);

                var fs = trim(Directory.GetFiles(DirListAsString(p)));
                var ds = trim(Directory.GetDirectories(DirListAsString(p)));
                return Maybe.Just(new FileSystem.Dir(p, ds, fs));
            };
        }

        /// <summary>   Has file asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> HasFileAsync(ImmutableTuple<ImmutableList<string>, string> p)
        {
            return () => File.Exists(DirListWithFileAsString(p.Item1, p.Item2));
        }

        /// <summary>   Has dir asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> HasDirAsync(ImmutableList<string> p)
        {
            return () => Directory.Exists(DirListAsString(p));
        }

        /// <summary>   Creates a new dir asynchronous. </summary>
        /// <param name="p">
        ///     The ImmutableTuple&lt;ImmutableList&lt;string&gt;,string&gt; to process.
        /// </param>
        /// <returns>   An Async&lt;Unit&gt; </returns>
        public Async<Unit> NewDirAsync(ImmutableList<string> p)
        {
            return Async.Return(() =>
            {
                Directory.CreateDirectory(DirListAsString(p));
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
        public Async<Unit> RmDirAsync(ImmutableList<string> p)
        {
            return Async.Return(() =>
            {
                Directory.Delete(DirListAsString(p));
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
        public Async<Unit> RmFileAsync(ImmutableTuple<ImmutableList<string>, string> p)
        {
            return Async.Return(() =>
            {
                File.Delete(DirListWithFileAsString(p.Item1, p.Item2));
                return Unit.Default;
            })
                .Catch()
                .Ignore();
        }

        /// <summary>   Mv dir asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> MvDirAsync(ImmutableList<string> ps, ImmutableList<string> pt)
        {
            return Async.Return(() =>
            {
                Directory.Move(DirListAsString(ps), DirListAsString(pt));
                return Unit.Default;
            })
                .Catch()
                .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        /// <summary>   Mv file asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> MvFileAsync(ImmutableTuple<ImmutableList<string>, string> ps,
            ImmutableTuple<ImmutableList<string>, string> pt)
        {
            return Async.Return(() =>
            {
                File.Move(DirListWithFileAsString(ps.Item1, ps.Item2), DirListWithFileAsString(pt.Item1, pt.Item2));
                return Unit.Default;
            })
                .Catch()
                .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        /// <summary>   Cp dir asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> CpDirAsync(ImmutableList<string> ps, ImmutableList<string> pt)
        {
            return Async.Return(() =>
            {
                var Y = Async.Return(true);
                var d = GetDirAsync(ps).RunSynchronously().FromJust();
                return NewDirAsync(pt)
                    .Then(
                        d.Files.Fold(
                            (a, f) =>
                                a.Then(CpFileAsync(ImmutableTuple.Create(d.Path, f), ImmutableTuple.Create(pt, f))), Y))
                    .Then(d.Dirs.Fold((a, f) => a.Then(CpDirAsync(ps.Add(f), pt.Add(f))), Y))
                    .RunSynchronously();
            });
        }

        /// <summary>   Cp file asynchronous. </summary>
        /// <param name="ps">   The ps. </param>
        /// <param name="pt">   The point. </param>
        /// <returns>   An Async&lt;bool&gt; </returns>
        public Async<bool> CpFileAsync(ImmutableTuple<ImmutableList<string>, string> ps,
            ImmutableTuple<ImmutableList<string>, string> pt)
        {
            return Async.Return(() =>
            {
                File.Copy(DirListWithFileAsString(ps.Item1, ps.Item2), DirListWithFileAsString(pt.Item1, pt.Item2));
                return Unit.Default;
            })
                .Catch()
                .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }

        /// <summary>   Creates a new LocalFileSystem.Api. </summary>
        /// <returns>   A FileSystem.Api. </returns>
        public static FileSystem.Api Create()
        {
            return new LocalFileSystem();
        }

        private static string DirListAsString(ImmutableList<string> xs)
        {
            return xs.Fold(Path.Combine, "");
        }

        private static string DirListWithFileAsString(ImmutableList<string> xs, string x)
        {
            return Path.Combine(DirListAsString(xs), x);
        }

        private static void AppendAllBytes(string path, byte[] bytes)
        {
            using (var stream = new FileStream(path, FileMode.Append))
            {
                stream.Write(bytes, 0, bytes.Length);
            }
        }
    }
}
