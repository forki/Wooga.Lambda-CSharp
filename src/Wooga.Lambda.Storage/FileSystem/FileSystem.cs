using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Storage.FileSystem
{
    /// <summary>
    ///     FileSystem with asynchronous file operations
    /// </summary>
    public interface FileSystem
    {
        Location Locate(string s);
        Location Locate(Location l, string s);
        Location Parent(Location l);
        Async<File> GetFileAsync(Location p);
        Async<Unit> WriteFileAsync(Location p, IEnumerable<byte> c);
        Async<Unit> AppendFileAsync(Location p, IEnumerable<byte> c);
        Async<Dir>  GetDirAsync(Location p);
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
    public struct File : IStructuralEquatable, IEquatable<File>
    {
        public static File Create(Location location, IEnumerable<byte> content)
        {
            return new File(location,content);
        }

        public readonly IEnumerable<byte> Content;
        public readonly Location Location;

        private File(Location location, IEnumerable<byte> content)
        {
            Location = location;
            Content = content;
        }

        public bool Equals(object other, IEqualityComparer comparer)
        {
            if (other is File)
            {
                return comparer.Equals(Location, ((File)other).Location)
                    && comparer.Equals(Content, ((File)other).Content);
            }
            return false;
        }

        public int GetHashCode(IEqualityComparer comparer)
        {
            return comparer.GetHashCode(this);
        }

        public bool Equals(File other)
        {
            return ((IStructuralEquatable)this).Equals(other, EqualityComparer<Object>.Default);
        }
    }

    /// <summary>
    ///     Dir with Paths to its Files and Dirs
    /// </summary>
    public struct Dir : IStructuralEquatable, IEquatable<Dir>
    {
        internal static Dir Create(Location location, IEnumerable<Location> dirs, IEnumerable<Location> files)
        {
            return new Dir(location, dirs, files);
        }

        public readonly IEnumerable<Location> Dirs;
        public readonly IEnumerable<Location> Files;
        public readonly Location Location;

        private Dir(Location location, IEnumerable<Location> dirs, IEnumerable<Location> files)
        {
            Location = location;
            Dirs = dirs;
            Files = files;
        }

        public bool Equals(object other, IEqualityComparer comparer)
        {
            if (other is Dir)
            {
                return comparer.Equals(Location, ((Dir)other).Location)
                    && comparer.Equals(Dirs, ((Dir)other).Dirs)
                    && comparer.Equals(Files, ((Dir)other).Files);
            }
            return false;
        }

        public int GetHashCode(IEqualityComparer comparer)
        {
            return comparer.GetHashCode(this);
        }

        public bool Equals(Dir other)
        {
            return ((IStructuralEquatable)this).Equals(other, EqualityComparer<Object>.Default);
        }
    }

    /// <summary>
    ///     FileSystem Location based on a List    
    /// </summary>
    public struct Location : IStructuralEquatable, IEquatable<Location>
    {
        public delegate string Combinator(string a, string b);
        public delegate IEnumerable<string> Seperator(string a);

        internal static Location Create(Combinator c, Seperator s, string p)
        {
            return Create(c,s,s(p));
        }

        internal static Location Create(Combinator c, Seperator s, Location l, string p)
        {
            return Create(c, s, l.Paths.Append(s(p)));
        }

        internal static Location Create(Combinator c, Seperator s, IEnumerable<string> ps)
        {
            var paths = ps.ToImmutableList();
            return Create(paths, paths.Last(), paths.Reduce((st,pa)=>c(st,pa)));
        }

        internal static Location Create(IEnumerable<string> paths, string name, string fullName)
        {
            return new Location(paths, name, fullName);
        }

        internal static Location Parent(Combinator c, Seperator s, Location l)
        {
            return Create(c,s,l.Paths.Truncate(l.Paths.Count()-1));        
        }
        
        public readonly IEnumerable<string> Paths;
        public readonly string Name;
        public readonly string FullName;

        private Location(IEnumerable<string> paths, string name, string fullName)
        {
            Paths = paths;
            Name = name;
            FullName = fullName;
        }

        public bool Equals(object other, IEqualityComparer comparer)
        {
            if (other is Location)
            {
                return comparer.Equals(Paths, ((Location)other).Paths)
                    && comparer.Equals(Name, ((Location)other).Name)
                    && comparer.Equals(FullName, ((Location)other).FullName);
            }
            return false;
        }

        public int GetHashCode(IEqualityComparer comparer)
        {
            return comparer.GetHashCode(this);
        }

        public bool Equals(Location other)
        {
            return ((IStructuralEquatable)this).Equals(other, EqualityComparer<Object>.Default);
        }
    }
}