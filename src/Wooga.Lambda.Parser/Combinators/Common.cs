// file:	combinators\common.cs
//
// summary:	Implements the common class

using System;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Parser.Combinators
{
    /// <summary>   A common. </summary>
    public static class Common
    {
        /// <summary>   Returns the given r. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="r">    The R to process. </param>
        ///
        /// <returns>   A Parser&lt;R&gt; </returns>

        public static Parser<R> Return<R>(R r)
        {
            return s => Result.Succeed(r, s.Position);
        }

        /// <summary>   Gets the zero. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        ///
        /// <returns>   A Parser&lt;R&gt; </returns>

        public static Parser<R> Zero<R>()
        {
            return s => Result.Fail<R>("Zero", s.Position);
        }

        /// <summary>   A Parser&lt;R&gt; extension method that binds. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <typeparam name="R2">   Type of the r 2. </typeparam>
        /// <param name="p">    The p to act on. </param>
        /// <param name="f">    The Func&lt;R,Parser&lt;R2&gt;&gt; to process. </param>
        ///
        /// <returns>   A Parser&lt;R2&gt; </returns>

        public static Parser<R2> Bind<R, R2>(this Parser<R> p, Func<R, Parser<R2>> f)
        {
            return s => p(s).MatchResult(x => f(x.Value)(s.AtPosition(x.Peek)), y => Result.Fail<R2>(y.Message, y.Peek));
        }

        /// <summary>   A Parser&lt;R&gt; extension method that thens. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <typeparam name="R2">   Type of the r 2. </typeparam>
        /// <param name="p">        The p to act on. </param>
        /// <param name="value">    The value. </param>
        ///
        /// <returns>   A Parser&lt;R2&gt; </returns>

        public static Parser<R2> Then<R, R2>(this Parser<R> p, R2 value)
        {
            return s => p(s).MatchResult(x => Result.Succeed(value, x.Peek), y => Result.Fail<R2>(y.Message, y.Peek));
        }

//        public static Parser<R2, US> TakeRight<R, R2, US>(this Parser<R, US> l, Parser<R2, US> value)
//        {
//            return l.Bind(_ => value);
//        }
//
//        public static Parser<R, US> TakeLeft<R, R2, US>(this Parser<R, US> l, Parser<R2, US> value)
//        {
//            return l.Bind(value.Then);
//        }
//
//        public static Parser<R3, US> Pipe2<R, R2, R3, US>(this Parser<R,US> p, Parser<R2,US> p2, Func<R,R2,R3> f)
//        {
//            return p.Bind(a => p2.Bind(b => Return<R3,US>(f(a,b))));
//        }

        private static Parser<ImmutableList<R>> _Many<R>(this Parser<R> p, ImmutableList<R> rs, int min = 0, int max = int.MaxValue)
        {
            return chars =>
            {
                var f = p.Bind(value => _Many(p, rs.Add(value), min, max))(chars);
                return
                    f.MatchResult(
                        value =>
                            rs.Count > max ? Result.Fail<ImmutableList<R>>("", value.Peek) : Result.Succeed(value.Value, value.Peek),
                        value =>
                            rs.Count > max || rs.Count < min
                                ? Result.Fail<ImmutableList<R>>("", value.Peek)
                                : Result.Succeed(rs, chars.Position));
            };
        }

        /// <summary>   A Parser&lt;R&gt; extension method that manies the given p. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="p">    The p to act on. </param>
        ///
        /// <returns>   A list of. </returns>

        public static Parser<ImmutableList<R>> Many<R>(this Parser<R> p)
        {
            return _Many(p, new ImmutableList<R>());
        }

        /// <summary>   A Parser&lt;R&gt; extension method that many 1. </summary>
        ///
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="p">    The p to act on. </param>
        ///
        /// <returns>   A list of. </returns>

        public static Parser<ImmutableList<R>> Many1<R>(this Parser<R> p)
        {
            return _Many(p, new ImmutableList<R>(), 1, 1);
        }
    }
}