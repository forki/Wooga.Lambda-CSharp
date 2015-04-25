Concurrent.Async
======================

[(API Reference)](http://wooga.github.io/Wooga.Lambda-CSharp/reference/wooga-lambda-control-concurrent-async.html)

## The parallel method: Async[T]

    [lang=cs]
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
            public static Async<string> GetHtmlAsync(this HttpClient http, string uri)
            {
                return () => http
                             .GetAsync(uri)
                             .RunSynchronously()
                             .Body
                             .FromJustOrDefault("", Encoding.UTF8.GetString);
            }

            public static void Run(string[] uris)
            {
                var http = WebRequestTransport.CreateHttpClient();
                var reqs = uris
                           .Map(http.GetHtmlAsync);
                var resp = reqs
                           .Parallel()
                           .RunSynchronously();
            }
        }
    }
