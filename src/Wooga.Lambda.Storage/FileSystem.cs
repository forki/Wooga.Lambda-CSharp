using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

using DirPath   = Wooga.Lambda.Data.ImmutableList<string>;
using FilePath  = Wooga.Lambda.Data.ImmutableTuple<Wooga.Lambda.Data.ImmutableList<string>, string>;
using Name      = System.String;
using Names     = Wooga.Lambda.Data.ImmutableList<string>;
using Bytes     = Wooga.Lambda.Data.ImmutableList<byte>;

namespace Wooga.Lambda.Storage
{
    public static class FileSystem
    {
        public interface Api
        {
            Async<Maybe<File>> GetFileAsync(FilePath p);
            Async<bool> WriteFileAsync(FilePath p, Bytes c);
            Async<bool> AppendFileAsync(FilePath p, Bytes c);
            Async<Maybe<Dir>> GetDirAsync(DirPath p);
            Async<bool> HasFileAsync(FilePath p);
            Async<bool> HasDirAsync(DirPath p);
            Async<Unit> NewDirAsync(DirPath p);
            Async<Unit> RmDirAsync(DirPath p);
            Async<Unit> RmFileAsync(FilePath p);
            Async<bool> MvDirAsync(DirPath ps, DirPath pt);
            Async<bool> MvFileAsync(FilePath ps, FilePath pt);
            Async<bool> CpDirAsync(DirPath ps, DirPath pt);
            Async<bool> CpFileAsync(FilePath ps, FilePath pt);
        }

        public struct File
        {
            public readonly FilePath Path;
            public readonly Bytes Content;

            internal File(FilePath path, Bytes content)
            {
                Path = path;
                Content = content;
            }
        }

        public struct Dir
        {
            public readonly DirPath Path;
            public readonly Names Dirs;
            public readonly Names Files;

            internal Dir(DirPath path, Names dirs, Names files)
            {
                Path = path;
                Dirs = dirs;
                Files = files;
            }
        }
    }
}