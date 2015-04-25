using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Control.PatternMatching;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;

namespace AsyncDownloader
{
    class Program
    {
        private static readonly string[] Uris = 
        {
            "http://giphy.com/",
            "http://google.com",
            "http://wooga.com",
            "http://apple.com",
            "http://tumblr.com"
        };

        static void Main(string[] args)
        {
//            AsyncParallelSimple.Run(Uris);
            AsyncBlockSimple.Run();
        }
    }
}
