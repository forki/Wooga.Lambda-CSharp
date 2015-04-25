using System.Diagnostics;
using System.Linq;
using System.Threading;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace AsyncDownloader
{
    class Program
    {

        static void Main(string[] args)
        {
              AsyncBlockSimple.Run();
        }
    }
}
