// file:	combinators\chars.cs
//
// summary:	Implements the characters class

using System;
using System.Collections.Immutable;
using System.Linq;

namespace Wooga.Lambda.Parser.Combinators
{
    /// <summary>   A characters. </summary>
    public static class Chars
    {
        /// <summary>   Satisfies the given f. </summary>
        /// <param name="f">    The Func&lt;char,bool&gt; to process. </param>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Satisfy(Func<char, bool> f)
        {
            return chars =>
            {
                var c = chars.Peek();
                var p = chars.PeekPosition(1);
                return f(c) ? Result.Succeed(c, p) : Result.Fail<char>("", p);
            };
        }

        /// <summary>   Eqs the given c. </summary>
        /// <param name="c">    The character. </param>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Eq(char c)
        {
            return Satisfy(x => x.Equals(c));
        }

        /// <summary>   Gets the letter. </summary>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Letter()
        {
            return Satisfy(char.IsLetter);
        }

        /// <summary>   Gets the digit. </summary>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Digit()
        {
            return Satisfy(char.IsDigit);
        }

        /// <summary>   White space. </summary>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> WhiteSpace()
        {
            return Satisfy(char.IsWhiteSpace);
        }

        /// <summary>   Gets the newline. </summary>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Newline()
        {
            return AnyOf(ImmutableList.Create('\n', '\r'));
        }

        /// <summary>   Gets any. </summary>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> Any()
        {
            return Satisfy(x => true);
        }

        /// <summary>   Any of the given create struct. </summary>
        /// <param name="cs">   The create struct. </param>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> AnyOf(ImmutableList<char> cs)
        {
            return Satisfy(cs.Contains);
        }

        /// <summary>   None of the given create struct. </summary>
        /// <param name="cs">   The create struct. </param>
        /// <returns>   A Parser&lt;char&gt; </returns>
        public static Parser<char> NoneOf(ImmutableList<char> cs)
        {
            return Satisfy(x => !cs.Contains(x));
        }

        /// <summary>   Sequence of the given create struct. </summary>
        /// <param name="cs">   The create struct. </param>
        /// <returns>   A list of. </returns>
        public static Parser<ImmutableList<char>> SeqOf(ImmutableList<char> cs)
        {
            return cs.Aggregate(Common.Return(ImmutableList<char>.Empty),(p, c) => p.Bind(r => Eq(c).Then(r.Add(c))));
        }
    }
}