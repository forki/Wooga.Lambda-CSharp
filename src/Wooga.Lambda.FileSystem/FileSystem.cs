using System;
using System.IO;
using Wooga.Lambda.Data;
using Wooga.Lambda.System;

namespace Wooga.Lambda.FileSystem
{
    public interface IOFileSystem
    {
        IO<Unit> CreateDirectory(DirectoryInfo d);
        IO<Unit> RemoveDirectory(DirectoryInfo d);
        IO<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d);
        IO<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d, String searchPattern);
        IO<Maybe<FileInfo[]>> GetFilesRecursive(DirectoryInfo d, String searchPattern);
        IO<Unit> RemoveFile(FileInfo f);
        IO<Maybe<Byte[]>> ReadFile(FileInfo f);
        IO<Unit> WriteFile(FileInfo f, Byte[] b);
    }

    public class FileSystem : IOFileSystem
    {
        public IO<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d)
        {
            return () => Maybe.Return(() => d.GetFiles());
        }

        public IO<Maybe<FileInfo[]>> GetFiles(DirectoryInfo d, String searchPattern)
        {
            return () => Maybe.Return(() => d.GetFiles(searchPattern));
        }

        public IO<Maybe<FileInfo[]>> GetFilesRecursive(DirectoryInfo d, String searchPattern)
        {
            return () => Maybe.Return(() => d.GetFiles(searchPattern, SearchOption.AllDirectories));
        }

        public IO<Unit> CreateDirectory(DirectoryInfo d)
        {
            return () =>
            {
                d.Create();
                return Unit.Default;
            };
        }

        public IO<Unit> RemoveDirectory(DirectoryInfo d)
        {
            return () =>
            {
                d.Delete();
                return Unit.Default;
            };
        }

        public IO<Maybe<Byte[]>> ReadFile(FileInfo f)
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

        public IO<Unit> WriteFile(FileInfo f, Byte[] b)
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

        public IO<Unit> RemoveFile(FileInfo f)
        {
            return () =>
            {
                f.Delete();
                return Unit.Default;
            };
        }
    }
}