using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using FileContent = System.Collections.Generic.IEnumerable<byte>;

namespace Wooga.Lambda.Storage
{
    
    public class VirtualFileSystem : FileSystem
    {
        private readonly VirtualDir Root;

        private VirtualFileSystem()
        {
            Root = new VirtualDir();
        }

        public static FileSystem Create()
        {
            return new VirtualFileSystem();
        }

        public Async<FileContent> ReadFileAsync(string p)
        {
            return () => Root.GetNameInDirectory(p).GetFile();
        }

        public Async<Unit> WriteFileAsync(string p, FileContent c)
        {
            return () =>
            {
                var d = Root.GetNameInExistingDirectory(p);
                d.Item1.SetFile(d.Item2, c.ToList());
                return Unit.Default;
            };
        }

        public Async<Unit> AppendFileAsync(string p, FileContent c)
        {
            return () =>
            {
                var d = Root.GetNameInDirectory(p);
                if (d.FileExists())
                {
                    var contents = d.GetFile();
                    contents.AddRange(c);
                }
                else
                {
                    WriteFileAsync(p, c).RunSynchronously();
                }
                return Unit.Default;
            };
        }

        public Async<Dir> GetDirAsync(string p)
        {
            return () => Root.GetDirectory(p.Split(Path.DirectorySeparatorChar)).ToDir();
        }

        public Async<bool> HasFileAsync(string p)
        {
            return () => Root.GetNameInDirectory(p).FileExists();
        }

        public Async<bool> HasDirAsync(string p)
        {
            return () => Root.GetDirectory(p) != null;
        }

        public Async<Unit> NewDirAsync(string p)
        {
            return () => Root.CreateDirectory(p);
        }

        public Async<Unit> RmDirAsync(string p)
        {
            return () => Root.GetDirectory(p).Remove();
        }

        public Async<Unit> RmFileAsync(string p)
        {
            return () => Root.GetNameInDirectory(p).DeleteFile();
        }

        public Async<Unit> MvDirAsync(string ps, string pt)
        {
            return () => Root.GetDirectory(ps).MoveTo(Root.GetNameInDirectory(pt));
        }

        public Async<Unit> MvFileAsync(string ps, string pt)
        {
            return () => Root.GetNameInDirectory(ps).MoveTo(Root.GetNameInDirectory(pt));
        }

        public Async<Unit> CpDirAsync(string ps, string pt)
        {
            return () => Root.GetDirectory(ps).CopyTo(Root.GetNameInDirectory(pt));
        }

        public Async<Unit> CpFileAsync(string ps, string pt)
        {
            return () => Root.GetNameInDirectory(ps).CopyTo(Root.GetNameInDirectory(pt));
        }
    }

    internal class VirtualDir
    {
        internal Dictionary<string, List<byte>> Files = new Dictionary<string, List<byte>>();
        internal Dictionary<string, VirtualDir> Directories = new Dictionary<string, VirtualDir>();
        internal VirtualDir Parent;
        public string Name;

        public bool DirectoryExists(string element)
        {
            return Directories.ContainsKey(element);
        }

        public Unit CreateDirectory(string path)
        {
            CreateDirectory(path.Split(Path.DirectorySeparatorChar));
            return Unit.Default;
        }

        public VirtualDir CreateDirectory(IEnumerable<string> path)
        {
            if (!path.Any())
            {
                return this;
            }
            if (Files.ContainsKey(path.First()))
            {
                throw new Exception("file exists when creating directory");
            }
            if (!Directories.ContainsKey(path.First()))
            {
                Directories[path.First()] = new VirtualDir() { Parent = this, Name = path.First() };
            }
            return Directories[path.First()].CreateDirectory(path.Skip(1));
        }

        public bool FileExists(string name)
        {
            return Files.ContainsKey(name);
        }

        public VirtualDir GetDirectory(string name)
        {
            return GetDirectory(name.Split(Path.DirectorySeparatorChar));
        }

        public List<byte> GetFile(string name)
        {
            if (!FileExists(name))
            {
                throw new IOException(name + " does not exist");
            }

            return Files[name];
        }

        public void SetFile(string name, List<byte> content)
        {
            Files[name] = content;
        }

        public VirtualDir GetDirectory(IEnumerable<string> path)
        {
            if (!path.Any())
            {
                return this;
            }
            if (Directories.ContainsKey(path.First()))
            {
                return Directories[path.First()].GetDirectory(path.Skip(1));
            }
            return null;
        }

        internal string GetPath()
        {
            if (Parent != null)
            {
                if (Parent.Parent == null)
                {
                    return Name + Path.DirectorySeparatorChar;
                }
                return Path.Combine(Parent.GetPath(), Name);
            }
            return "";
        }

        internal void RemoveDir(VirtualDir virtualDir)
        {
            Directories.Remove(virtualDir.Name);
        }

        public void DeleteFile(string name)
        {
            Files.Remove(name);
        }

        public VirtualDir Clone()
        {
            var dir = new VirtualDir();
            foreach (var sd in Directories)
            {
                dir.Directories[sd.Key] = sd.Value.Clone();
            }

            foreach (var sf in Files)
            {
                dir.Files[sf.Key] = sf.Value.ConvertAll(_ => _);
            }

            return dir;
        }
    }


    internal static class VirtualDirExtension
    {
        public static bool FileExists(this Tuple<VirtualDir, string> d)
        {
            return d != null && d.Item1.FileExists(d.Item2);
        }

        public static bool DirectoryExists(this Tuple<VirtualDir, string> d)
        {
            return d != null && d.Item1.DirectoryExists(d.Item2);
        }

        public static List<byte> GetFile(this Tuple<VirtualDir, string> d)
        {
            if (d == null || !d.FileExists())
            {
                throw new IOException("file does not exist");
            }

            return d.Item1.Files[d.Item2];
        }

        public static Unit DeleteFile(this Tuple<VirtualDir, string> d)
        {
            if (d != null)
            {
                d.Item1.DeleteFile(d.Item2);
            }

            return Unit.Default;
        }

        public static Unit MoveTo(this Tuple<VirtualDir, string> src, Tuple<VirtualDir, string> dest)
        {
            if (src == null)
            {
                throw new DirectoryNotFoundException("source directory does not exist");
            }

            if (!src.FileExists())
            {
                throw new IOException("source file does not exist");
            }

            if (dest == null)
            {
                throw new DirectoryNotFoundException("target directory does not exist");
            }

            if (dest.DirectoryExists() || dest.FileExists())
            {
                throw new IOException("destination already exists");
            }

            dest.Item1.Files[dest.Item2] = src.Item1.GetFile(src.Item2);
            src.Item1.Files.Remove(src.Item2);
            return Unit.Default;
        }

        public static Unit CopyTo(this Tuple<VirtualDir, string> src, Tuple<VirtualDir, string> dest)
        {
            if (src == null)
            {
                throw new IOException("source directory does not exist");
            }

            if (!src.FileExists())
            {
                throw new IOException("source file does not exist");
            }

            if (dest == null)
            {
                throw new DirectoryNotFoundException("target directory does not exist");
            }

            if (dest.DirectoryExists() || dest.FileExists())
            {
                throw new IOException("destination already exists");
            }

            dest.Item1.Files[dest.Item2] = src.Item1.GetFile(src.Item2);
            return Unit.Default;
        }

        public static Unit MoveTo(this VirtualDir dir, Tuple<VirtualDir, string> d)
        {
            if (dir == null)
            {
                throw new DirectoryNotFoundException("source directory does not exist");
            }

            if (d == null)
            {
                throw new DirectoryNotFoundException("target directory does not exist");
            }

            if (d.Item1.DirectoryExists(d.Item2) || d.Item1.FileExists(d.Item2))
            {
                throw new IOException("name in target exists");
            }

            dir.Parent.Directories.Remove(dir.Name);
            dir.Name = d.Item2;
            dir.Parent = d.Item1;
            d.Item1.Directories[dir.Name] = dir;

            return Unit.Default;
        }

        public static Unit CopyTo(this VirtualDir dir, Tuple<VirtualDir, string> d)
        {
            if (dir == null)
            {
                throw new IOException("source directory does not exist");
            }

            if (d == null)
            {
                throw new DirectoryNotFoundException();
            }

            if (d.Item1.DirectoryExists(d.Item2) || d.Item1.FileExists(d.Item2))
            {
                throw new IOException("name in target exists");
            }

            var newDir = dir.Clone();
            newDir.Name = d.Item2;
            newDir.Parent = d.Item1;
            d.Item1.Directories[newDir.Name] = newDir;

            return Unit.Default;
        }

        public static Dir ToDir(this VirtualDir dir)
        {
            if (dir == null)
            {
                throw new IOException("does not exist");
            }
            var path = dir.GetPath();
            var fs = dir.Files.Select(x => Path.Combine(path, x.Key));
            var ds = dir.Directories.Select(x => Path.Combine(path, x.Key));
            return Dir.Create(path, ds, fs);
        }

        public static Unit Remove(this VirtualDir dir)
        {
            if (dir == null)
            {
                throw new DirectoryNotFoundException();
            }
            if (dir.Parent != null)
            {
                dir.Parent.RemoveDir(dir);
                dir.Parent = null;
            }
            
            return Unit.Default;
        }

        public static Tuple<VirtualDir, string> GetNameInDirectory(this VirtualDir dir, string path)
        {
            return dir.GetNameInDirectory(path.Split(Path.DirectorySeparatorChar));
        }

        public static Tuple<VirtualDir, string> GetNameInDirectory(this VirtualDir dir, IEnumerable<string> path)
        {
            if (dir == null)
            {
                return null;
            }
            if (!path.Any())
            {
                throw new Exception("GetNameInDirectory called with an empty string");
            }
            if (path.Count() == 1)
            {
                return new Tuple<VirtualDir, string>(dir, path.Last());
            }
            VirtualDir directory;
            dir.Directories.TryGetValue(path.First(), out directory);
            return directory.GetNameInDirectory(path.Skip(1));
        }

        public static Tuple<VirtualDir, string> GetNameInExistingDirectory(this VirtualDir dir, string path)
        {
            return dir.GetNameInExistingDirectory(path.Split(Path.DirectorySeparatorChar));
        }

        public static Tuple<VirtualDir, string> GetNameInExistingDirectory(this VirtualDir dir, IEnumerable<string> path)
        {
            if (dir == null)
            {
                throw new DirectoryNotFoundException("directory does not exist");
            }
            if (!path.Any())
            {
                throw new Exception("GetNameInDirectory called with an empty string");
            }
            if (path.Count() == 1)
            {
                return new Tuple<VirtualDir, string>(dir, path.Last());
            }
            VirtualDir directory;
            dir.Directories.TryGetValue(path.First(), out directory);
            return directory.GetNameInExistingDirectory(path.Skip(1));
        }
    }
}
