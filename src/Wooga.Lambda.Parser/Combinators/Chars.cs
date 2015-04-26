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
            return Satisfy(char.IsLetter);
        }

        public static Parser<char> Digit()
        {
            return Satisfy(char.IsDigit);
        }

        public static Parser<char> WhiteSpace()
        {
            return Satisfy(char.IsWhiteSpace);
        }

        public static Parser<char> Newline()
        {
            return AnyOf(new ImmutableList<char>{'\n', '\r'});
        }

        public static Parser<char> Any()
        {
            return Satisfy(x => true);
        }

        public static Parser<char> AnyOf(ImmutableList<char> cs)
        {
            return Satisfy(cs.Contains);
        }

        public static Parser<char> NoneOf(ImmutableList<char> cs)
        {
            return Satisfy(x => !cs.Contains(x));
        }

        public static Parser<ImmutableList<char>> SeqOf(ImmutableList<char> cs)
        {
            return cs.Fold((p, c) => p.Bind(r => Eq(c).Then(r.Add(c))), Common.Return(new ImmutableList<char>()));
        }
    }
}