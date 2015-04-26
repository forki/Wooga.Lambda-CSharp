using Wooga.Lambda.Control;
using Wooga.Lambda.Control.Monad;

namespace AsyncDownloader
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var just = Maybe.Just("hans")();
            var not = Maybe.Nothing<string>()();

            var s1 = Pattern<string>
                    .Match(just)
                    .Case<Maybe.Result<string>.Just>(x => "just")
                    .Case<Maybe.Result<string>.Nothing>(x => "not")
                    .Run(); // "just"

            var s2 = Pattern<string>
                    .Match(not)
                    .Case<Maybe.Result<string>.Just>(x => "just")
                    .Case<Maybe.Result<string>.Nothing>(x => "not")
                    .Run(); // "not"
        }
    }
}
