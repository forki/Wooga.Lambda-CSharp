using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using Wooga.Lambda.Control.Concurrent;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Storage.FileSystem
{
    public class LocalFileSystem : FileSystem
    {
        public static FileSystem Create()
        {
            return new LocalFileSystem();
        }

        private LocalFileSystem()
        {
        }
       
        public Async<IEnumerable<byte>> ReadFileAsync(string p)
        {
            return () => FileAsIEnumerable(p);

        }

        private IEnumerable<byte> FileAsIEnumerable(string p)
        {
            using (var stream = new FileStream(p, FileMode.Open))
            {
                for (int i = stream.ReadByte(); i != -1; i = stream.ReadByte())
                    yield return (byte)i;
            }
        }

        public  Async<Unit> WriteFileAsync(string p, IEnumerable<byte> c)
        {
            return () =>
            {
                using (var stream = new FileStream(p, FileMode.OpenOrCreate))
                {
                    foreach (var i in c)
                    {
                        stream.WriteByte(i);
                    }
                }
                return Unit.Default;
            };
        }

        public  Async<Unit> AppendFileAsync(string p, IEnumerable<byte> c)
        {
            return () =>
            {
                using (var stream = new FileStream(p, FileMode.Append))
                {
                    foreach (var i in c)
                    {
                        stream.WriteByte(i);
                    }
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
            return () => File.Exists(p);
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
                if (HasDirAsync(pt).RunSynchronously() || HasFileAsync(pt).RunSynchronously())
                {
                    throw new IOException("target path already exists");
                }

                var pathElements = pt.Split(Path.DirectorySeparatorChar);
                if (!HasDirAsync(String.Join(Path.DirectorySeparatorChar.ToString(),
                        pathElements.Take(pathElements.Length - 1).ToArray())).RunSynchronously())
                {
                    throw new DirectoryNotFoundException("target directory does not exist");
                }

                NewDirAsync(pt).RunSynchronously();
                foreach (var f in dir.Files)
                {
                    CpFileAsync(f, Path.Combine(pt, Path.GetFileName(f))).RunSynchronously();
                }
                foreach (var d in dir.Dirs)
                {
                    CpDirAsync(d, Path.Combine(pt, Path.GetFileName(d))).RunSynchronously();
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
        
        private static Func<string, bool> PathMatch(string p)
        {
            return new Regex(p, RegexOptions.None).IsMatch;
        }
    }
}
