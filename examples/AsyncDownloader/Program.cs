using System.Diagnostics;
using Wooga.Lambda.Control.Concurrent;

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
