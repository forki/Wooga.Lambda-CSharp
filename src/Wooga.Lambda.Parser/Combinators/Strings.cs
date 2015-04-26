using Wooga.Lambda.Data;

namespace Wooga.Lambda.Parser.Combinators
{
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

        public static Parser<string> Eq(string s)
        {
            return Chars.SeqOf(new ImmutableList<char>(s.ToCharArray())).ToStringsParser();
        }
    }
}