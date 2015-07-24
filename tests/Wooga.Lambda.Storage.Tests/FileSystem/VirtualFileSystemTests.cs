using NUnit.Framework;
using Wooga.Lambda.Data;
using Wooga.Lambda.Storage.FileSystem;

namespace Wooga.Lambda.Storage.Tests.FileSystem
{
    [TestFixture]
    public class VirtualFileSystemTests
    {
        [Test]
        public void ShouldAddFile()
        {
            var vfs = VirtualFileSystem.Virtual();
            var location = vfs.Locate("a.b");
            vfs.WriteFileAsync(location, ImmutableList.Empty<byte>())();
            Assert.IsTrue(vfs.HasFileAsync(location)());
        }

        [Test]
        public void ShouldRemoveFile()
        {
            var vfs = VirtualFileSystem.Virtual();
            var location = vfs.Locate("a.b");
            vfs.WriteFileAsync(location, ImmutableList.Empty<byte>())();
            Assert.IsTrue(vfs.HasFileAsync(location)());
            vfs.RmFileAsync(location)();
            Assert.IsFalse(vfs.HasFileAsync(location)());
        }
    }
}
