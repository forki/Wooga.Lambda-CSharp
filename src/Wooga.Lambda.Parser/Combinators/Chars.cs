using System;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Parser.Combinators
{
    public static class Chars
    {
        public static Parser<char> Satisfy(Func<char, bool> f)
        {
            return chars =>
            {
                var c = chars.Peek();
                var p = chars.PeekPosition(1);
                return f(c) ? Result.Succeed(c, p) : Result.Fail<char>("", p);
            };
        }

        public static Parser<char> Eq(char c)
        {
            return Satisfy(x => x.Equals(c));
        }

        public static Parser<char> Letter()
        {
            return Satisfy(Char.IsLetter);
        }

        public static Parser<char> Digit()
        {
            return Satisfy(Char.IsDigit);
        }

        public static Parser<char> WhiteSpace()
        {
            return Satisfy(Char.IsWhiteSpace);
        }

        public static Parser<char> Newline()
        {
            return AnyOf(new[] {'\n', '\r'});
        }

        public static Parser<char> Any()
        {
            return Satisfy(x => true);
        }

        public static Parser<char> AnyOf(char[] cs)
        {
            return Satisfy(x => Array.Exists(cs, c => c.Equals(x)));
        }

        public static Parser<char> NoneOf(char[] cs)
        {
            return Satisfy(x => Array.TrueForAll(cs, c => !c.Equals(x)));
        }

        public static Parser<char[]> SeqOf(char[] cs)
        {
            return cs.Fold((p, c) => p.Bind(r => Eq(c).Then(r.Append(c))), Common.Return(new char[0]));
        }
    }
}