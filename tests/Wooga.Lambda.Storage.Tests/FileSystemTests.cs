using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection.Emit;
using System.Runtime;
using System.Text;
using NUnit.Framework;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Storage;

namespace Wooga.Lambda.Storage.Tests
{

    [TestFixture]
    public class FileSystemTests
    {
        [SetUp]
        public void SetupFileSystem()
        {
            
        }

        static object[] ProvideFilesystem => new object[] {
            ProvideLocalFilesystem,
            ProvideVirtualFilesystem
        };

        static object[] ProvideLocalFilesystem
        {
            get
            {
                var localFileSystem = LocalFileSystem.Create();
                var basePath = Path.Combine(Path.GetTempPath(), Path.GetRandomFileName());
                localFileSystem.NewDirAsync(basePath).RunSynchronously();
                return new object[] { localFileSystem, basePath };
            }
        }

        static object[] ProvideVirtualFilesystem
        {
            get
            {
                var localFileSystem = VirtualFileSystem.Create();
                var basePath = Path.Combine(Path.GetTempPath(), Path.GetRandomFileName());
                localFileSystem.NewDirAsync(basePath).RunSynchronously();
                return new object[] { localFileSystem, basePath };
            }
        }


        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldCreateAndDeleteDirectoryStructure(FileSystem fileSystem, String basePath)
        {
            var innerPath = Path.Combine(basePath, Path.GetRandomFileName());
            var path = Path.Combine(innerPath, Path.GetRandomFileName());

            Assert.IsFalse(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.RmDirAsync(path).RunSynchronously();
            Assert.IsFalse(fileSystem.HasDirAsync(path).RunSynchronously());
            Assert.IsTrue(fileSystem.HasDirAsync(innerPath).RunSynchronously());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldCreateFileAndWriteAndReadContentAndDelete(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            Assert.IsFalse(fileSystem.HasDirAsync(path).RunSynchronously());
            Assert.IsFalse(fileSystem.HasFileAsync(path).RunSynchronously());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.IsFalse(fileSystem.HasDirAsync(path).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(path).RunSynchronously());

            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.RmFileAsync(path).RunSynchronously();
            Assert.IsFalse(fileSystem.HasFileAsync(path).RunSynchronously());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldCreateFilesAndDirectoriesAndListThem(FileSystem fileSystem, String basePath)
        {
            var filePath = Path.Combine(basePath, Path.GetRandomFileName());
            var dirPath = Path.Combine(basePath, Path.GetRandomFileName());
            var dir2Path = Path.Combine(basePath, Path.GetRandomFileName());
            var deeperDirPath = Path.Combine(dirPath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(filePath, "".ToEnumerableBytes()).RunSynchronously();
            fileSystem.NewDirAsync(dir2Path).RunSynchronously();
            fileSystem.NewDirAsync(deeperDirPath).RunSynchronously();

            var dir = fileSystem.GetDirAsync(basePath).RunSynchronously();

            Assert.IsNotNull(dir.Dirs.FirstOrDefault(s => s == dir2Path));
            Assert.IsNotNull(dir.Files.FirstOrDefault(s => s == filePath));
            Assert.AreEqual(1, dir.Files.Count());
            Assert.AreEqual(2, dir.Dirs.Count());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldNotThrowOnRemovingFileThatDoesNotExist(FileSystem fileSystem, String basePath)
        {
            var filePath = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.RmFileAsync(filePath).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(DirectoryNotFoundException))]
        public void ShouldThrowOnRemovingDirectoryThatDoesNotExist(FileSystem fileSystem, String basePath)
        {
            var filePath = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.RmDirAsync(filePath).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(DirectoryNotFoundException))]
        public void ShouldFailWritingToFileInDirectoryThatDoesNotExist(FileSystem fileSystem, String basePath)
        {
            var filePath = Path.Combine(Path.Combine(basePath, Path.GetRandomFileName()), Path.GetRandomFileName());

            fileSystem.WriteFileAsync(filePath, "".ToEnumerableBytes()).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldAppendToFile(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var content2 = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.AppendFileAsync(path, content2.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content+content2, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldMoveFile(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.MvFileAsync(path, path2).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path2).RunSynchronously().EnumerableToString());
            Assert.IsFalse(fileSystem.HasFileAsync(path).RunSynchronously());
            
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(DirectoryNotFoundException))]
        public void ShouldThrowMovingFileToNonExistentDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(Path.Combine(basePath, Path.GetRandomFileName()), Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.MvFileAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowMovingFileToExistentFileDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var content2 = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.WriteFileAsync(path2, content2.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content2, fileSystem.ReadFileAsync(path2).RunSynchronously().EnumerableToString());

            fileSystem.MvFileAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowMovingFileToExistentDirectoryDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.NewDirAsync(path2).RunSynchronously();

            fileSystem.MvFileAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldMoveDirectoryWithContent(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            var fileName = Path.GetRandomFileName();
            var filePath = Path.Combine(path, fileName);
            var deeperDirName = Path.GetRandomFileName();
            var dirPath = Path.Combine(path, deeperDirName);

            fileSystem.NewDirAsync(dirPath).RunSynchronously();
            fileSystem.WriteFileAsync(filePath, content.ToEnumerableBytes()).RunSynchronously();

            Assert.IsTrue(fileSystem.HasDirAsync(dirPath).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(filePath).RunSynchronously());

            fileSystem.MvDirAsync(path, path2).RunSynchronously();

            Assert.IsFalse(fileSystem.HasDirAsync(dirPath).RunSynchronously());
            Assert.IsFalse(fileSystem.HasFileAsync(filePath).RunSynchronously());

            Assert.IsTrue(fileSystem.HasDirAsync(Path.Combine(path2, deeperDirName)).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(Path.Combine(path2, fileName)).RunSynchronously());

            Assert.AreEqual(content, fileSystem.ReadFileAsync(Path.Combine(path2, fileName)).RunSynchronously().EnumerableToString());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldThrowMovingDirectoryToNonExistentDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(Path.Combine(basePath, Path.GetRandomFileName()), Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());
            try
            {
                fileSystem.MvDirAsync(path, path2).RunSynchronously();
                Assert.Fail("Should throw Exception");
            }
            catch (Exception e)
            {
                
            }
            
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowMovingDirectoryToExistentFileDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.WriteFileAsync(path2, "".ToEnumerableBytes()).RunSynchronously();
            Assert.IsTrue(fileSystem.HasFileAsync(path2).RunSynchronously());

            fileSystem.MvDirAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowMovingDirectorToExistentDirectoryDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.NewDirAsync(path2).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path2).RunSynchronously());

            fileSystem.MvDirAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldCopyFile(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.CpFileAsync(path, path2).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path2).RunSynchronously().EnumerableToString());
            Assert.IsTrue(fileSystem.HasFileAsync(path).RunSynchronously());

        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(DirectoryNotFoundException))]
        public void ShouldThrowCopyingFileToNonExistentDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(Path.Combine(basePath, Path.GetRandomFileName()), Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.CpFileAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowCopyingFileToExistentFileDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var content2 = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.WriteFileAsync(path2, content2.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content2, fileSystem.ReadFileAsync(path2).RunSynchronously().EnumerableToString());

            fileSystem.CpFileAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldThrowCopyingFileToExistentDirectoryDestination(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.WriteFileAsync(path, content.ToEnumerableBytes()).RunSynchronously();
            Assert.AreEqual(content, fileSystem.ReadFileAsync(path).RunSynchronously().EnumerableToString());

            fileSystem.NewDirAsync(path2).RunSynchronously();
            try
            {
                fileSystem.CpFileAsync(path, path2).RunSynchronously();
                Assert.Fail("Should throw Exception");
            }
            catch (Exception e)
            {
            }
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        public void ShouldCopyDirectoryWithContent(FileSystem fileSystem, String basePath)
        {
            var content = Guid.NewGuid().ToString();
            var content2 = Guid.NewGuid().ToString();
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            var fileName = Path.GetRandomFileName();
            var filePath = Path.Combine(path, fileName);
            var deeperDirName = Path.GetRandomFileName();
            var dirPath = Path.Combine(path, deeperDirName);

            fileSystem.NewDirAsync(dirPath).RunSynchronously();
            fileSystem.WriteFileAsync(filePath, content.ToEnumerableBytes()).RunSynchronously();

            Assert.IsTrue(fileSystem.HasDirAsync(dirPath).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(filePath).RunSynchronously());

            fileSystem.CpDirAsync(path, path2).RunSynchronously();

            Assert.IsTrue(fileSystem.HasDirAsync(dirPath).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(filePath).RunSynchronously());

            Assert.IsTrue(fileSystem.HasDirAsync(Path.Combine(path2, deeperDirName)).RunSynchronously());
            Assert.IsTrue(fileSystem.HasFileAsync(Path.Combine(path2, fileName)).RunSynchronously());

            Assert.AreEqual(content, fileSystem.ReadFileAsync(Path.Combine(path2, fileName)).RunSynchronously().EnumerableToString());
            Assert.AreEqual(content, fileSystem.ReadFileAsync(filePath).RunSynchronously().EnumerableToString());

            fileSystem.WriteFileAsync(Path.Combine(path2, fileName), content2.ToEnumerableBytes()).RunSynchronously();

            Assert.AreEqual(content2, fileSystem.ReadFileAsync(Path.Combine(path2, fileName)).RunSynchronously().EnumerableToString());
            Assert.AreEqual(content, fileSystem.ReadFileAsync(filePath).RunSynchronously().EnumerableToString());
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(DirectoryNotFoundException))]
        public void ShouldThrowCopyingDirectoryToNonExistentDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(Path.Combine(Path.Combine(basePath, Path.GetRandomFileName()), Path.GetRandomFileName()), Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.CpDirAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowCopyingDirectoryToExistentFileDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.WriteFileAsync(path2, "".ToEnumerableBytes()).RunSynchronously();
            Assert.IsTrue(fileSystem.HasFileAsync(path2).RunSynchronously());

            fileSystem.CpDirAsync(path, path2).RunSynchronously();
        }

        [Test, TestCaseSource(nameof(ProvideFilesystem))]
        [ExpectedException(typeof(IOException))]
        public void ShouldThrowCopyingDirectoryToExistentDirectoryDestination(FileSystem fileSystem, String basePath)
        {
            var path = Path.Combine(basePath, Path.GetRandomFileName());
            var path2 = Path.Combine(basePath, Path.GetRandomFileName());

            fileSystem.NewDirAsync(path).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path).RunSynchronously());

            fileSystem.NewDirAsync(path2).RunSynchronously();
            Assert.IsTrue(fileSystem.HasDirAsync(path2).RunSynchronously());

            fileSystem.CpDirAsync(path, path2).RunSynchronously();
        }
    }
    
    internal static class Conversions
    {
        public static IEnumerable<byte> ToEnumerableBytes(this string input)
        {
            return Encoding.UTF8.GetBytes(input);
        }

        public static string EnumerableToString(this IEnumerable<byte> input)
        {
            var stream = new MemoryStream();
            foreach (var b in input)
            {
                stream.WriteByte(b);
            }
            return Encoding.UTF8.GetString(stream.ToArray());
        }
    }
}
