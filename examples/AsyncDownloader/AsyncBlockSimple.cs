using System;
using System.Diagnostics;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using Wooga.Lambda.Logging;

namespace AsyncDownloader
{
//    public static class AsyncBlockSimple
//    {
//        public static void Run()
//        {
//            Log.SharedAgent.AddHandler(msg =>
//            {
//                System.Diagnostics.Debug.WriteLine(msg.GetType().ToString()+": "+msg.Message);
//                return Unit.Default;
//            });
//
//            var rnd = new Random();
//            var waited = 20;
//            for (int i = 0; i < 1000; i++)
//            {
//                Async.Sleep(waited).RunSynchronously();
//                Async.Return(()=>Log.SharedAgent.Debug(waited + " ms on  " + System.Threading.Thread.CurrentThread.ManagedThreadId)).Start();
//            }
//
//            System.Console.ReadLine();
//        }
//    }
}