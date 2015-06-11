using System;
using Wooga.Lambda.Control.Concurrent;
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
            DirPath DirPath(DirPath p, string s);
            Async<File> GetFileAsync(FilePath p);
            Async<Unit> WriteFileAsync(FilePath p, Bytes c);
            Async<Unit> AppendFileAsync(FilePath p, Bytes c);
            Async<Dir> GetDirAsync(DirPath p);
            Async<bool> HasFileAsync(FilePath p);
            Async<bool> HasDirAsync(DirPath p);
            Async<Unit> NewDirAsync(DirPath p);
            Async<Unit> RmDirAsync(DirPath p);
            Async<Unit> RmFileAsync(FilePath p);
            Async<Unit> MvDirAsync(DirPath ps, DirPath pt);
            Async<Unit> MvFileAsync(FilePath ps, FilePath pt);
            Async<Unit> CpDirAsync(DirPath ps, DirPath pt);
            Async<Unit> CpFileAsync(FilePath ps, FilePath pt);
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

            public string FullName(Func<string, string, string> pathCombinator)
            {
                return pathCombinator(Path.FullName(pathCombinator),Name);
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

            public string FullName(Func<string,string,string> pathCombinator)
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