using System;
using System.IO;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Storage.Apis
{
    public class LocalFileSystem : FileSystem.Api
    {
        public static FileSystem.Api Create()
        {
            return new LocalFileSystem();
        }

        private LocalFileSystem()
        {
        }

        static string DirListAsString(ImmutableList<string> xs)
        {
            return xs.Fold(Path.Combine, "");
        }

        static string DirListWithFileAsString(ImmutableList<string> xs, string x)
        {
            return Path.Combine(DirListAsString(xs), x);
        }

        public Async<Maybe<FileSystem.File>> GetFileAsync(ImmutableTuple<ImmutableList<string>, string> p)
        {
            return () => Async
                         .Return(() => File.ReadAllBytes(DirListWithFileAsString(p.Item1,p.Item2)).ToImmutableList())
                         .Catch()
                         .RunSynchronously()
                         .FromEither(e=>Maybe.Nothing<FileSystem.File>(),
                                     b=>Maybe.Just(new FileSystem.File(p,b)));

        }

        public Async<bool> WriteFileAsync(ImmutableTuple<ImmutableList<string>, string> p, ImmutableList<byte> c)
        {
            return () => Async
                         .Return(() =>
                         {
                             File.WriteAllBytes(DirListWithFileAsString(p.Item1,p.Item2), c.ToArray());
                             return Unit.Default;
                         })
                         .Catch()
                         .RunSynchronously()
                         .FromEither(e=> false,b=> true);  
        }

        static void AppendAllBytes(string path, byte[] bytes)
        {
            using (var stream = new FileStream(path, FileMode.Append))
            {
                stream.Write(bytes, 0, bytes.Length);
            }
        }

        public Async<bool> AppendFileAsync(ImmutableTuple<ImmutableList<string>, string> p, ImmutableList<byte> c)
        {
            return () => Async
                         .Return(() =>
                         {
                             AppendAllBytes(DirListWithFileAsString(p.Item1,p.Item2), c.ToArray());
                             return Unit.Default;
                         })
                         .Catch()
                         .RunSynchronously()
                         .FromEither(e => false, b => true);
        }

        public Async<Maybe<FileSystem.Dir>> GetDirAsync(ImmutableList<string> p)
        {
            return () =>
            {
                Func<string[],ImmutableList<string>> trim = 
                    xs => xs.ToImmutableList().Map(f => new FileInfo(f).Name);
                
                var fs = trim(Directory.GetFiles(DirListAsString(p)));
                var ds = trim(Directory.GetDirectories(DirListAsString(p)));
                return Maybe.Just(new FileSystem.Dir(p,ds,fs));
            };
        }

        public Async<bool> HasFileAsync(ImmutableTuple<ImmutableList<string>, string> p)
        {
            return () => File.Exists(DirListWithFileAsString(p.Item1, p.Item2));
        }

        public Async<bool> HasDirAsync(ImmutableList<string> p)
        {
            return () => Directory.Exists(DirListAsString(p));
        }

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

        public Async<bool> MvDirAsync(ImmutableList<string> ps, ImmutableList<string> pt)
        {
            return Async.Return(() =>
                    {
                        Directory.Move(DirListAsString(ps),DirListAsString(pt));
                        return Unit.Default;
                    })
                    .Catch()
                    .Bind<Either<Exception,Unit>,bool>(b=>()=>b.FromEither(e=>false,_=>true));
        }

        public Async<bool> MvFileAsync(ImmutableTuple<ImmutableList<string>, string> ps, ImmutableTuple<ImmutableList<string>, string> pt)
        {
            return Async.Return(() =>
            {
                File.Move(DirListWithFileAsString(ps.Item1, ps.Item2), DirListWithFileAsString(pt.Item1, pt.Item2));
                return Unit.Default;
            })
            .Catch()
            .Bind<Either<Exception, Unit>, bool>(b =>() => b.FromEither(e => false, _ => true));
        }

        public Async<bool> CpDirAsync(ImmutableList<string> ps, ImmutableList<string> pt)
        {
            return Async.Return(() =>
            {
                var Y = Async.Return(true);
                var d = GetDirAsync(ps).RunSynchronously().FromJust();
                return NewDirAsync(pt)
                       .Then(d.Files.Fold((a,f) => a.Then(CpFileAsync(ImmutableTuple.Create(d.Path,f),ImmutableTuple.Create(pt,f))),Y))
                       .Then(d.Dirs.Fold((a,f) => a.Then(CpDirAsync(ps.Add(f),pt.Add(f))), Y))
                       .RunSynchronously();
            });
        }

        public Async<bool> CpFileAsync(ImmutableTuple<ImmutableList<string>, string> ps, ImmutableTuple<ImmutableList<string>, string> pt)
        {
            return Async.Return(() =>
            {
                File.Copy(DirListWithFileAsString(ps.Item1, ps.Item2), DirListWithFileAsString(pt.Item1, pt.Item2));
                return Unit.Default;
            })
           .Catch()
           .Bind<Either<Exception, Unit>, bool>(b => () => b.FromEither(e => false, _ => true));
        }
    }
}