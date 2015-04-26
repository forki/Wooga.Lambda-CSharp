using System.Text;
using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Storage;
using Wooga.Lambda.Storage.Apis;

namespace AsyncDownloader
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var fs = LocalFileSystem.Create();
//            var baseDir = ImmutableList.Create(new[] { "." });
//            var txtFile = ImmutableTuple.Create(baseDir, "logo-cc.txt");
//            var w = fs.WriteFileAsync(txtFile, Encoding.UTF8.GetBytes("Hello Hello").ToImmutableList())
//                    .Then(fs.AppendFileAsync(txtFile, Encoding.UTF8.GetBytes("\nAPEPEPNDDDD").ToImmutableList()))
//                    .Then(fs.NewDirAsync(baseDir.Add("newDIR")))
//                    .Then(fs.MvFileAsync(txtFile, ImmutableTuple.Create(baseDir.Add("newDIR"), "logo-cc.txt")))
//                    .Then(fs.CpDirAsync(baseDir.Add("newDIR"),baseDir.Add("CPDir")))
//                    .RunSynchronously();

            
//            var es = fs.GetDirAsync(baseDir)
//                    .RunSynchronously();
            var x = 1;
        }
    }
}
