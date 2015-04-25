using System;
using System.IO;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.FileSystem
{
    public interface IOFileSystem
    {
        Async<Unit> CreateDirectory(DirectoryInfo d);
        Async<Unit> RemoveDirectory(DirectoryInfo d);
        Async<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d);
        Async<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d, string searchPattern);
        Async<Maybe<FileInfo[]>> GetFilesRecursive(DirectoryInfo d, string searchPattern);
        Async<Unit> RemoveFile(FileInfo f);
        Async<Maybe<byte[]>> ReadFile(FileInfo f);
        Async<Unit> WriteFile(FileInfo f, byte[] b);
    }

    public class FileSystem : IOFileSystem
    {
        public Async<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d)
        {
            return () => Maybe.Return(() => d.GetFiles());
        }

        public Async<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d, string searchPattern)
        {
            return () => Maybe.Return(() => d.GetFiles(searchPattern));
        }

        public Async<Maybe<FileInfo[]>> GetFilesRecursive(DirectoryInfo d, string searchPattern)
        {
            return () => Maybe.Return(() => d.GetFiles(searchPattern, SearchOption.AllDirectories));
        }

        public Async<Unit> CreateDirectory(DirectoryInfo d)
        {
            return () =>
            {
                d.Create();
                return Unit.Default;
            };
        }

        public Async<Unit> RemoveDirectory(DirectoryInfo d)
        {
            return () =>
            {
                d.Delete();
                return Unit.Default;
            };
        }

        public Async<Maybe<byte[]>> ReadFile(FileInfo f)
        {
            return () => Maybe.Return(() =>
            {
                using (var fs = f.OpenRead())
                {
                    var all = new byte[0];
                    var b = new byte[1024];
                    var bytesRead = 0;
                    var totalBytesRead = 0;
                    while ((bytesRead = fs.Read(b, 0, b.Length)) > 0)
                    {
                        totalBytesRead += bytesRead;
                        var merge = new byte[all.Length + b.Length];
                        Buffer.BlockCopy(all, 0, merge, 0, all.Length);
                        Buffer.BlockCopy(b, 0, merge, all.Length, b.Length);
                        all = merge;
                    }
                    Array.Resize(ref all, totalBytesRead);
                    return all;
                }
            });
        }

        public Async<Unit> WriteFile(FileInfo f, byte[] b)
        {
            return () =>
            {
                using (var fs = f.OpenWrite())
                {
                    fs.Write(b, 0, b.Length);
                }
                return Unit.Default;
            };
        }

        public Async<Unit> RemoveFile(FileInfo f)
        {
            return () =>
            {
                f.Delete();
                return Unit.Default;
            };
        }
    }
}