using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Wooga.Lambda.Storage.FileSystem;

namespace Wooga.Lambda.Stats.Storage
{
    public class FileSystemStats : FileSystem
    {
        private FileSystem fs;
        private readonly Stats stats;

        public FileSystemStats(FileSystem fs, Stats stats)
        {
            this.fs = fs;
            this.stats = stats;
        }

        public static FileSystem For(FileSystem fs, Stats stats)
        {
            return new FileSystemStats(fs,stats);
        }

        public Location.Combinator PathCombinator
        {
            get { return fs.PathCombinator; }
        }

        public Location Locate(string s)
        {
            return fs.Locate(s);
        }

        public Location Locate(Location p, string s)
        {
            return fs.Locate(p, s);
        }

        public Location Parent(Location p)
        {
            return fs.Parent(p);
        }

        public Async<File> GetFileAsync(Location p)
        {
            return fs.GetFileAsync(p)
                     .Map(f =>
                     {
                         stats.Count("storage.bytes.read",f.Content.Count);
                         return f;
                     });
        }

        public Async<Unit> WriteFileAsync(Location p, ImmutableList<byte> c)
        {
            return fs.WriteFileAsync(p, c)
                     .Map(f =>
                     {
                         stats.Count("storage.bytes.written", c.Count);
                         return f;
                     });
        }

        public Async<Unit> AppendFileAsync(Location p, ImmutableList<byte> c)
        {
            return fs.AppendFileAsync(p, c)
                     .Map(f =>
                     {
                         stats.Count("storage.bytes.written", c.Count);
                         return f;
                     }); ;
        }

        public Async<Dir> GetDirAsync(Location p)
        {
            return fs.GetDirAsync(p);
        }

        public Async<bool> HasFileAsync(Location p)
        {
            return fs.HasFileAsync(p);
        }

        public Async<bool> HasDirAsync(Location p)
        {
            return fs.HasDirAsync(p);
        }

        public Async<Unit> NewDirAsync(Location p)
        {
            return fs.NewDirAsync(p);
        }

        public Async<Unit> RmDirAsync(Location p)
        {
            return fs.RmDirAsync(p);
        }

        public Async<Unit> RmFileAsync(Location p)
        {
            return fs.RmFileAsync(p);
        }

        public Async<Unit> MvDirAsync(Location ps, Location pt)
        {
            return fs.MvDirAsync(ps, pt);
        }

        public Async<Unit> MvFileAsync(Location ps, Location pt)
        {
            return fs.MvFileAsync(ps, pt);
        }

        public Async<Unit> CpDirAsync(Location ps, Location pt)
        {
            return fs.CpDirAsync(ps, pt);
        }

        public Async<Unit> CpFileAsync(Location ps, Location pt)
        {
            return fs.CpFileAsync(ps, pt);
        }
    }
}
