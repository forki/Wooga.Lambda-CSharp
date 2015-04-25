using System;
using System.Diagnostics;
using Wooga.Lambda.Control.Concurrent;

namespace AsyncDownloader
{
    public static class AsyncBlockSimple
    {
        public static void Run()
        {
            var stopwatch = new Stopwatch();
            stopwatch.Start();

            Async.Sleep(1000).RunSynchronously();

            stopwatch.Stop();
//            Debug.WriteLine(String.Format("Method #1 Total seconds: {0}", stopwatch.Elapsed.TotalSeconds));

            // Method #1 Total seconds: 1,0038637
        }
    }
}