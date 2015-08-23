using System.Linq;
using Wooga.Lambda.Control.Concurrent;
using System.Collections.Immutable;
using FileContent = System.Collections.Immutable.ImmutableList<byte>;
using DirPath = System.Collections.Immutable.ImmutableList<Wooga.Lambda.Storage.FileSystem.Location>;
using Unit = Wooga.Lambda.Data.Unit;

namespace Wooga.Lambda.Storage.FileSystem
{
    /// <summary>
    ///     FileSystem with asynchronous file operations
    /// </summary>
    public interface FileSystem
    {
        Location.Combinator PathCombinator { get; }
        Location Locate(string s);
        Location Locate(Location p, string s);
        Location Parent(Location p);
        Async<File> GetFileAsync(Location p);
        Async<Unit> WriteFileAsync(Location p, FileContent c);
        Async<Unit> AppendFileAsync(Location p, FileContent c);
        Async<Dir> GetDirAsync(Location p);
        Async<bool> HasFileAsync(Location p);
        Async<bool> HasDirAsync(Location p);
        Async<Unit> NewDirAsync(Location p);
        Async<Unit> RmDirAsync(Location p);
        Async<Unit> RmFileAsync(Location p);
        Async<Unit> MvDirAsync(Location ps, Location pt);
        Async<Unit> MvFileAsync(Location ps, Location pt);
        Async<Unit> CpDirAsync(Location ps, Location pt);
        Async<Unit> CpFileAsync(Location ps, Location pt);
    }

    /// <summary>
    ///     File with Location and Content
    /// </summary>
    public struct File
    {
        public static File Create(Location location, FileContent content)
        {
            return new File(location,content);
        }

        public readonly FileContent Content;
        public readonly Location Location;

        private File(Location location, FileContent content)
        {
            Location = location;
            Content = content;
        }
    }

    /// <summary>
    ///     Dir with Paths to its Files and Dirs
    /// </summary>
    public struct Dir
    {
        public static Dir Create(Location location, DirPath dirs, DirPath files)
        {
            return new Dir(location, dirs, files);
        }

        public readonly DirPath Dirs;
        public readonly DirPath Files;
        public readonly Location Location;

        private Dir(Location location, DirPath dirs, DirPath files)
        {
            Location = location;
            Dirs = dirs;
            Files = files;
        }
    }

    /// <summary>
    ///     FileSystem Location based on a List    
    /// </summary>
    public struct Location
    {
        public static Location Create(ImmutableList<string> paths)
        {
            return new Location(paths);
        }

        public delegate string Combinator(string a, string b);

        public readonly ImmutableList<string> Paths;

        private Location(ImmutableList<string> paths)
        {
            Paths = paths;
            Name = Paths.Last();
        }

        public string Name { get; }

        public string FullName(Combinator pathCombinator)
        {
            return Paths.Aggregate("",(s, p) => pathCombinator(s, p));
        }
    }
}