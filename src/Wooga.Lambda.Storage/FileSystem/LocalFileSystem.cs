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

        //private readonly Location.Seperator PathSeperator = p => p.Split(new[] { '\\', '/' }, StringSplitOptions.RemoveEmptyEntries);

        private LocalFileSystem()
        {
        }
       
        public Async<IEnumerable<byte>> ReadFileAsync(string p)
        {
            return () => FileAsIEnumerable(p);

        }

        private IEnumerable<byte> FileAsIEnumerable(string p)
        {
            using (FileStream stream = new FileStream(p, FileMode.Open))
            {
                for (int i = stream.ReadByte(); i != -1; i = stream.ReadByte())
                    yield return (byte)i;
            }
        }

        public  Async<Unit> WriteFileAsync(string p, IEnumerable<byte> c)
        {
            return () =>
            {
                System.IO.File.WriteAllBytes(p, c.ToArray());
                return Unit.Default;
            };
        }

        public  Async<Unit> AppendFileAsync(string p, IEnumerable<byte> c)
        {
            return () =>
            {
                var bytes = c.ToArray();
                using (
                var stream = new FileStream(p, FileMode.Append))
                {
                    stream.Write(bytes, 0, bytes.Length);
                }
                return Unit.Default;
            };
        }

        public  Async<Dir> GetDirAsync(string p)
        {
            return () =>
            {
                var path = p;
                var fs = Directory.GetFiles(path);
                var ds = Directory.GetDirectories(path);
                return Dir.Create(path, ds, fs);
            };
        }

        public  Async<bool> HasFileAsync(string p)
        {
            return () => System.IO.File.Exists(p);
        }

        public  Async<bool> HasDirAsync(string p)
        {
            return () => Directory.Exists(p);
        }

        public  Async<Unit> NewDirAsync(string p)
        {
            return () =>
            {
                Directory.CreateDirectory(p);
                return Unit.Default;
            };
        }

        public  Async<Unit> RmDirAsync(string p)
        {
            return () =>
            {
                Directory.Delete(p);
                return Unit.Default;
            };
        }

        public  Async<Unit> RmFileAsync(string p)
        {
            return () =>
            {
                System.IO.File.Delete(p);
                return Unit.Default;
            };
        }

        public Async<Unit> MvDirAsync(string ps, string pt)
        {
            return () =>
            {
                Directory.Move(ps, pt);
                return Unit.Default;
            };
        }

        public Async<Unit> MvFileAsync(string ps, string pt)
        {
            return () =>
            {
                System.IO.File.Move(ps, pt);
                return Unit.Default;
            };
        }

        public Async<Unit> CpDirAsync(string ps, string pt)
        {
            return () =>
            {
                var dir = GetDirAsync(ps).RunSynchronously();
                NewDirAsync(pt).RunSynchronously();
                foreach (var f in dir.Files)
                {
                    CpFileAsync(f, Path.Combine(pt, f)).RunSynchronously();
                }
                foreach (var d in dir.Dirs)
                {
                    CpDirAsync(d, Path.Combine(pt, d)).RunSynchronously();
                }
                return Unit.Default;
            };
        }

        public Async<Unit> CpFileAsync(string ps, string pt)
        {
            return () =>
            {
                System.IO.File.Copy(ps, pt);
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
