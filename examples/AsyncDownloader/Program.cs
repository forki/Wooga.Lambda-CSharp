using System;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;

namespace AsyncDownloader
{
    public static class Ext
    {
        public static Async<ImmutableTuple<Uri, string>> GetHtmlAsync(this HttpClient http, string uri)
        {
            return () =>
            {
                var body = http.GetAsync(uri).RunSynchronously();
                //							.RunSynchronously()
                //							.Body
                //							.FromJustOrDefault("", xs => Encoding.UTF8.GetString(xs.ToArray()));
                //			Async.Sleep(1000)
                return new ImmutableTuple<Uri, string>(new Uri("http://pech.de"), "");
            };
        }
    }

    public static class Debug
    {
        public static void Log(string msg)
        {
            System.Diagnostics.Debug.WriteLine(msg);
        } 
    }

    public class Program
    {
        private static void Main(string[] args)
        {
            AsyncBlockSimple.Run();;
        }
    }
}
