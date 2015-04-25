using System.Diagnostics;
using System.Linq;
using System.Threading;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace AsyncDownloader
{
    class Program
    {

        static void Main(string[] args)
        {
            var failure = Async.Return(() => 
            {
                throw new System.Exception("ga");
                return "txt";
            });

            var txt = failure.Catch().RunSynchronously();
            if(txt.IsLeft())
                Debug.WriteLine(txt.LeftValue().Message); // ga


              AsyncBlockSimple.Run();
        }
    }
}
