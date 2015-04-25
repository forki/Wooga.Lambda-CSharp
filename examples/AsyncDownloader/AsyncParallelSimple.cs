//using System;

using System;
using System.Diagnostics;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;

namespace AsyncDownloader
{
    internal static class AsyncParallelSimple
    {
        private static readonly Encoding Enc = Encoding.UTF8;

        public static Async<Wooga.Lambda.Data.ImmutableTuple<Uri, string>> GetHtmlAsync(this HttpClient http, string uri)
        {
            return () =>
            {
                var body = http
                    .GetAsync(uri)
                    .RunSynchronously()
                    .Body
                    .FromJustOrDefault("", Enc.GetString);
                return new Wooga.Lambda.Data.ImmutableTuple<Uri, string>(new Uri(uri), body);
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

            Debug.WriteLine(bytesTotal + " bytesLoaded");

            // 12932393 bytes = ~12MB total 
        }
    }
}