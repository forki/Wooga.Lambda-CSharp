//using System;

using System;
using System.Diagnostics;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;
using System.Linq;

namespace AsyncDownloader
{
//    internal static class AsyncParallelSimple
//    {
//        private static readonly Encoding Enc = Encoding.UTF8;
//
//        public static Async<ImmutableTuple<Uri, string>> GetHtmlAsync(this HttpClient http, string uri)
//        {
//            return () =>
//            {
//                var body = http
//                    .GetAsync(uri)
//                    .RunSynchronously()
//                    .Body
//                    .FromJustOrDefault("", xs => Enc.GetString(xs.ToArray()));
//                return new ImmutableTuple<Uri, string>(new Uri(uri), body);
//            };
//        }
//
//        public static void Run()
//        {
//            var uris = new ImmutableList<string>( new []
//            {   
//                "http://giphy.com/",
//                "http://google.com",
//                "http://wooga.com",
//                "http://apple.com",
//                "http://tumblr.com"
//            });
//
//            var http = WebRequestTransport.CreateHttpClient();
//
////            while (uris.Count < 100)
////                uris = uris.AddRange(uris);
//
//            var reqs = uris.Map(http.GetHtmlAsync);
//
//            var resp = reqs
//                .Parallel()
//                .RunSynchronously();
////
//            var bytesTotal = resp.Fold((a, s) => a + Enc.GetByteCount(s.Item2), 0);
//
//            Debug.WriteLine(bytesTotal + " bytesLoaded");
//
//            // 12932393 bytes = ~12MB total 
//        }
//    }
}