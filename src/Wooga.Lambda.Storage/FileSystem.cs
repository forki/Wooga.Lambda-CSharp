using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using DirPath = Wooga.Lambda.Data.ImmutableList<string>;
using FilePath = Wooga.Lambda.Data.ImmutableTuple<Wooga.Lambda.Data.ImmutableList<string>, string>;
using Name = System.String;
using Names = Wooga.Lambda.Data.ImmutableList<string>;
using Bytes = Wooga.Lambda.Data.ImmutableList<byte>;

namespace Wooga.Lambda.Storage
{
    /// <summary>   A file system. </summary>
    public static class FileSystem
    {
        /// <summary>   Interface for api. </summary>
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

        /// <summary>   A file. </summary>
        public struct File
        {
            /// <summary>   The content. </summary>
            public readonly Bytes Content;

            /// <summary>   Full pathname of the file. </summary>
            public readonly FilePath Path;

            internal File(FilePath path, Bytes content)
            {
                Path = path;
                Content = content;
            }
        }

        /// <summary>   A dir. </summary>
        public struct Dir
        {
            /// <summary>   The dirs. </summary>
            public readonly Names Dirs;

            /// <summary>   The files. </summary>
            public readonly Names Files;

            /// <summary>   Full pathname of the dir. </summary>
            public readonly DirPath Path;

            internal Dir(DirPath path, Names dirs, Names files)
            {
                Path = path;
                Dirs = dirs;
                Files = files;
            }
        }
    }
}