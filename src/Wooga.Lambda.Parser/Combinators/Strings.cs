namespace Wooga.Lambda.Parser.Combinators
{
    public static class Strings
    {
        private static Parser<string> ToStringsParser(this Parser<char[]> p)
        {
            return p.Bind(c => Common.Return(new string(c)));
        }

        private static Parser<string> ToStringsParser(this Parser<char> p)
        {
            return p.Bind(c => Common.Return(c.ToString()));
        }

        public static Parser<string> Eq(string s)
        {
            return Chars.SeqOf(s.ToCharArray()).ToStringsParser();
        }
    }
}