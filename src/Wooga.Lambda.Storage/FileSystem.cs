using System;
using System.IO;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Bytes = Wooga.Lambda.Data.ImmutableList<byte>;

namespace Wooga.Lambda.Storage
{
    /// <summary>   A file system. </summary>
    public static class FileSystem
    {
        /// <summary>   Interface for api. </summary>
        public interface Api
        {
            FilePath FilePath(string s);
            FilePath FilePath(DirPath p, string s);
            DirPath DirPath(string s);
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

        public struct FilePath
        {

            public readonly DirPath Path;
            public readonly string Name;

            public FilePath(DirPath path, string name)
            {
                Path = path;
                Name = name;
            }

            public string ToString(Func<string, string, string> pathCombinator)
            {
                return pathCombinator(Path.ToString(pathCombinator),Name);
            }
        }

        /// <summary>   A file. </summary>
        public struct File
        {
            /// <summary>   The content. </summary>
            public readonly Bytes Content;

            /// <summary>   Full pathname of the file. </summary>
            public readonly FilePath Path;

            public File(FilePath path, Bytes content)
            {
                Path = path;
                Content = content;
            }
        }

        public struct DirPath
        {
            public readonly ImmutableList<string> PathElements;

            public DirPath(ImmutableList<string> elements)
            {
                PathElements = elements;
            }

            public string ToString(Func<string,string,string> pathCombinator)
            {
                return PathElements.Fold(pathCombinator, "");
            }
        }

        /// <summary>   A dir. </summary>
        public struct Dir
        {
            /// <summary>   The dirs. </summary>
            public readonly ImmutableList<string> Dirs; 

            /// <summary>   The files. </summary>
            public readonly ImmutableList<string> Files;

            /// <summary>   Full pathname of the dir. </summary>
            public readonly DirPath Path;

            public Dir(DirPath path, ImmutableList<string> dirs, ImmutableList<string> files)
            {
                Path = path;
                Dirs = dirs;
                Files = files;
            }
        }
    }
}