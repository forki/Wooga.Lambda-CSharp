using NUnit.Framework;
using Wooga.Lambda.Storage.FileSystem;

namespace Wooga.Lambda.Storage.Tests.FileSystem
{
    [TestFixture]
    public class LocalFileSystemTests : IFileSystemTests
    {
        private readonly Storage.FileSystem.FileSystem FS = LocalFileSystem.Local();

        [Test]
        public void ShouldAddFile()
        {
            FileSystemTests.ShouldAddFile(FS);
        }

        [Test]
        public void ShouldRemoveFile()
        {
            FileSystemTests.ShouldRemoveDir(FS);
        }

        [Test]
        public void ShouldAddDir()
        {
            FileSystemTests.ShouldAddDir(FS);
        }

        [Test]
        public void ShouldRemoveDir()
        {
            FileSystemTests.ShouldRemoveFile(FS);
        }
    }
}
