using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Wooga.Lambda.Logging;

namespace AsyncDownloader
{

    public class Program
    {
        private static void Main(string[] args)
        {
            Log.Shared.AddHandler(l =>
            {
                Console.WriteLine(l.Message);
                return Unit.Default;
            });

            Log.Shared.AddHandler(l =>
            {
                System.Diagnostics.Debug.WriteLine(l.Message);
                return Unit.Default;
            });

            var asyncs = new ImmutableList<Async<Unit>>();
            for (int i = 0; i < 10000; i++)
            {
                var x = i;
                asyncs = asyncs.Add(() => Log.Shared.Debug(x + " : " + System.Threading.Thread.CurrentThread.ManagedThreadId));
            }

            asyncs.Parallel().RunSynchronously();

            Log.Shared.Debug("LogTest");
            Console.ReadLine();
        }
    }
}
