using System;
using System.Linq;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Storage.FileSystem
{
    public static class AtomicExtensions
    {
        public static Async<Unit> WriteFileAtomically(this FileSystem s, Location p, ImmutableList<byte> d,
            string t1 = ".atomic.new", string t2 = ".atomic.old")
        {
            return () =>
            {
                WriteNewFileThenMv(s, p, d, t1, t2)
                .Catch()
                .RunSynchronously()
                .From(
                    _ => Unit.Default, 
                    e =>
                    {
                        RollbackFailedWrite(s, p, t1, t2).RunSynchronously();
                        throw e;
                    });
                return Unit.Default;
            };
        }

        public static Async<Unit> WriteNewFileThenMv(this FileSystem s, Location p, ImmutableList<byte> d, string t1, string t2)
        {
            return () =>
            {
                var tempNew = p.AppendName(t1);
                var tempOld = p.AppendName(t2);
                s.WriteFileAsync(tempNew, d)();
                if (s.HasFileAsync(p)())
                    s.MvFileAsync(p, tempOld)();
                s.MvFileAsync(tempNew, p)();
                s.RmFileAsync(tempOld)();
                return Unit.Default;
            };
        }

        public static Async<Unit> RollbackFailedWrite(this FileSystem s, Location p, string t1, string t2)
        {
            return () =>
            {
                var tempNew = p.AppendName(t1);
                var tempOld = p.AppendName(t2);
                if (s.HasFileAsync(tempNew)())
                    s.MvFileAsync(p, tempNew)();
                var hasP = s.HasFileAsync(p)();
                var hasOld = s.HasFileAsync(tempOld)();
                if (!hasP && hasOld)
                    s.MvFileAsync(tempOld, p);
                else if (hasP && hasOld)
                    s.RmFileAsync(tempOld);
                return Unit.Default;
            };
        }

        private static Location AppendName(this Location p, string x)
        {
            return Location.Create(p.Paths.RemoveAt(p.Paths.Count - 1).Add(p.Paths.Last() + x));
        }
    }
}