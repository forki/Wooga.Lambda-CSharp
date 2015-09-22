using System.Collections.Immutable;
using System.Linq;

namespace Wooga.Lambda.Parser.Combinators
{
    /// <summary>   A strings. </summary>
    public static class Strings
    {
        private static Parser<string> ToStringsParser(this Parser<ImmutableList<char>> p)
        {
            return p.Bind(c => Common.Return(new string(c.ToArray())));
        }

        private static Parser<string> ToStringsParser(this Parser<char> p)
        {
            return p.Bind(c => Common.Return(c.ToString()));
        }

        /// <summary>   Eqs. </summary>
        /// <param name="s">    The string. </param>
        /// <returns>   A Parser&lt;string&gt; </returns>
        public static Parser<string> Eq(string s)
        {
            return Chars.SeqOf(s.ToCharArray().ToImmutableList()).ToStringsParser();
        }
    }
}