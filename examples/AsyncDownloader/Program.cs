using System;
using System.Diagnostics;
using Wooga.Lambda.Control.Concurrent;

namespace AsyncDownloader
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var failure = Async.Return(() =>
            {
                throw new Exception("ga");
                return "txt";
            });

            var txt = failure.Catch().RunSynchronously();
            if (txt.IsLeft())
                Debug.WriteLine(txt.LeftValue().Message); // ga


            AsyncBlockSimple.Run();
        }
    }
}
