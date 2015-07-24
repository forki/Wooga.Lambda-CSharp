using NUnit.Framework;
using Wooga.Lambda.Data;
using Wooga.Lambda.Storage.FileSystem;

namespace Wooga.Lambda.Storage.Tests.FileSystem
{
    public interface IFileSystemTests
    {
        [Test]
        void ShouldAddFile();
        [Test]
        void ShouldRemoveFile();
        [Test]
        void ShouldAddDir();
        [Test]
        void ShouldRemoveDir();
    }

    public static class FileSystemTests
    {
        
        public static void ShouldAddFile(Storage.FileSystem.FileSystem fs)
        {
            var location = fs.Locate("a.b");
            fs.WriteFileAsync(location, ImmutableList.Empty<byte>())();
            Assert.IsTrue(fs.HasFileAsync(location)());
        }

        public static void ShouldRemoveFile(Storage.FileSystem.FileSystem fs)
        {
            var location = fs.Locate("a.b");
            fs.WriteFileAsync(location, ImmutableList.Empty<byte>())();
            Assert.IsTrue(fs.HasFileAsync(location)());
            fs.RmFileAsync(location)();
            Assert.IsFalse(fs.HasFileAsync(location)());
        }
        
        public static void ShouldAddDir(Storage.FileSystem.FileSystem fs)
        {
            var location = fs.Locate("a/b");
            fs.NewDirAsync(location)();
            Assert.IsTrue(fs.HasDirAsync(location)());
        }
        
        public static void ShouldRemoveDir(Storage.FileSystem.FileSystem fs)
        {
            var location = fs.Locate("a/b");
            fs.NewDirAsync(location)();
            Assert.IsTrue(fs.HasDirAsync(location)());
            fs.RmDirAsync(location)();
            Assert.IsFalse(fs.HasDirAsync(location)());
        }
    }
}
