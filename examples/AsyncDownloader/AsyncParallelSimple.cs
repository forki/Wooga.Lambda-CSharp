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

        public static Async<Wooga.Lambda.Data.Tuple<string, string>> GetHtmlAsync(this HttpClient http, string uri)
        {
            return () =>
            {
                var body = http
                    .GetAsync(uri)
                    .RunSynchronously()
                    .Body
                    .FromJustOrDefault("", Enc.GetString);
                return new Wooga.Lambda.Data.Tuple<string,string>(uri,body);
            };
        }

        public static void Run()
        {
            var uris = new[]
            {
                "http://giphy.com/", 
                "http://google.com", 
                "http://wooga.com", 
                "http://apple.com", 
                "http://tumblr.com"
            };

            var http = WebRequestTransport.CreateHttpClient();

            while (uris.Length < 100)
                uris = uris.Append(uris.Head());

            var reqs = uris.Map(http.GetHtmlAsync);
            
            var resp = reqs
                       .Parallel()
                       .RunSynchronously();

            var bytesTotal = resp.Fold((a, s) => a + Enc.GetByteCount(s.Item2), 0);

            System.Diagnostics.Debug.WriteLine( bytesTotal + " bytesLoaded");

            // 133025 bytes of http://giphy.com/,
            // 52014 bytes of http://google.com,
            // 30253 bytes of http://wooga.com,
            // 9062 bytes of http://apple.com,
            // 70632 bytes of http://tumblr.com,
        }
    }
}
