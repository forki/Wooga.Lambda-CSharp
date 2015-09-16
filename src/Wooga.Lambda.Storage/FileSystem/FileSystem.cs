using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Configuration;
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
        Async<IEnumerable<byte>> ReadFileAsync(string p);
        Async<Unit> WriteFileAsync(string p, IEnumerable<byte> c);
        Async<Unit> AppendFileAsync(string p, IEnumerable<byte> c);
        Async<Dir>  GetDirAsync(string p);
        Async<bool> HasFileAsync(string p);
        Async<bool> HasDirAsync(string p);
        Async<Unit> NewDirAsync(string p);
        Async<Unit> RmDirAsync(string p);
        Async<Unit> RmFileAsync(string p);
        Async<Unit> MvDirAsync(string ps, string pt);
        Async<Unit> MvFileAsync(string ps, string pt);
        Async<Unit> CpDirAsync(string ps, string pt);
        Async<Unit> CpFileAsync(string ps, string pt);
    }

    /// <summary>
    ///     Dir with Paths to its Files and Dirs
    /// </summary>
    public struct Dir : IStructuralEquatable, IEquatable<Dir>
    {
        internal static Dir Create(string location, IEnumerable<string> dirs, IEnumerable<string> files)
        {
            return new Dir(location, dirs, files);
        }

        public readonly IEnumerable<string> Dirs;
        public readonly IEnumerable<string> Files;
        public readonly string Location;

        private Dir(string location, IEnumerable<string> dirs, IEnumerable<string> files)
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
}