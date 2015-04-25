using System;
using System.Diagnostics;
using System.IO;
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

        Either<string, Unit> StartGame(byte[] saveGame)
        {
            return Either.Try(e=> e.Message, ()=> Unit.Default);
        }

        Either<string, byte[]> ValidateSaveGame(byte[] saveGame)
        {
            return Either.When(()=> saveGame.Length > 8, ()=> "corrupt save game", ()=> saveGame);
        }

        Either<string, byte[]> LoadSaveGame(string file)
        {
            return Either.Try(e=> e.Message, ()=> File.ReadAllBytes(file));
        }

        void A()
        {
            LoadSaveGame("x.y")
            .Bind(ValidateSaveGame)
            .Bind(StartGame)
            .FromEither(s=>"problem: "+s, _=>"all okay");
        }

        static void Main(string[] args)
        {
            Either<int, string> left = Either.Left<int, string>(2);
            Either<int, string> right = Either.Right<int, string>("rrr");

            var leftV = left.FromEither(l => l.ToString(), r => r); // "2"
            var rightV = right.FromEither(l => l.ToString(), r => r); // "rrr"


//            AsyncParallelSimple.Run(Uris);
            AsyncBlockSimple.Run();
        }
    }
}
