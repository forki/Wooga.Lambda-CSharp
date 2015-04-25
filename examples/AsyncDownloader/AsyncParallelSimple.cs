using System;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;

namespace AsyncDownloader
{
    static class AsyncParallelSimple
    {
        private static readonly Encoding Enc = Encoding.UTF8;

        public static Async<Tuple<string, string>> GetHtmlAsync(this HttpClient http, string uri)
        {
            return () =>
            {
                var body = http
                    .GetAsync(uri)
                    .RunSynchronously()
                    .Body
                    .FromJustOrDefault("", Enc.GetString);
                return new Tuple<string,string>(uri,body);
            };
        }

        public static void Run(string[] uris)
        {
            var http = WebRequestTransport.CreateHttpClient();
            
            var reqs = uris.Map(http.GetHtmlAsync);
            
            var resp = reqs
                       .Parallel()
                       .RunSynchronously();

            System.Diagnostics.Debug.WriteLine( 
                resp.Map(t => Enc.GetByteCount(t.Item2) + " bytes of " + t.Item1 + ",\n")
                    .Fold((a,s)=>a+s,"")
                );

            // 133025 bytes of http://giphy.com/,
            // 52014 bytes of http://google.com,
            // 30253 bytes of http://wooga.com,
            // 9062 bytes of http://apple.com,
            // 70632 bytes of http://tumblr.com,
        }
    }
}
