// file:	combinators\common.cs
//
// summary:	Implements the common class

using System;
using System.Collections.Immutable;
using Wooga.Lambda.Control;

namespace Wooga.Lambda.Parser.Combinators
{
    /// <summary>   A common. </summary>
    public static class Common
    {
        /// <summary>   Returns the given r. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="r">    The R to process. </param>
        /// <returns>   A Parser&lt;R&gt; </returns>
        public static Parser<R> Return<R>(R r)
        {
            return s => Result.Succeed(r, s.Position);
        }

        /// <summary>   Gets the zero. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <returns>   A Parser&lt;R&gt; </returns>
        public static Parser<R> Zero<R>()
        {
            return s => Result.Fail<R>("Zero", s.Position);
        }

        /// <summary>   A Parser&lt;R&gt; extension method that binds. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <typeparam name="R2">   Type of the r 2. </typeparam>
        /// <param name="p">    The p to act on. </param>
        /// <param name="f">    The Func&lt;R,Parser&lt;R2&gt;&gt; to process. </param>
        /// <returns>   A Parser&lt;R2&gt; </returns>
        public static Parser<R2> Bind<R, R2>(this Parser<R> p, Func<R, Parser<R2>> f)
        {
//            return s => p(s).MatchResult(x => f(x.Value)(s.AtPosition(x.Peek)), y => Resu lt.Fail<R2>(y.Message, y.Peek));
            return s => Pattern<Result<R2>>
                .Match(p(s))
                .Case<Result<R>.Success>(x => f(x.Value)(s.AtPosition(x.Peek)))
                .Case<Result<R>.Failure>(y => Result.Fail<R2>(y.Message, y.Peek))
                .Run();
        }

        /// <summary>   A Parser&lt;R&gt; extension method that thens. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <typeparam name="R2">   Type of the r 2. </typeparam>
        /// <param name="p">        The p to act on. </param>
        /// <param name="value">    The r. </param>
        /// <returns>   A Parser&lt;R2&gt; </returns>
        public static Parser<R2> Then<R, R2>(this Parser<R> p, R2 value)
        {
            return s => Pattern<Result<R2>>
                .Match(p(s))
                .Case<Result<R>.Success>(x => Result.Succeed(value, x.Peek))
                .Case<Result<R>.Failure>(y => Result.Fail<R2>(y.Message, y.Peek))
                .Run();
        }

        public static Parser<R2> TakeRight<R, R2>(this Parser<R> l, Parser<R2> r)
        {
            return l.Bind(_ => r);
        }

        public static Parser<R> TakeLeft<R, R2>(this Parser<R> l, Parser<R2> r)
        {
            return l.Bind(r.Then);
        }

        public static Parser<Tuple<R, R2>> TakeBoth<R, R2>(this Parser<R> l, Parser<R2> r)
        {
            return l.Bind(lv => r.Bind<R2, Tuple<R, R2>>(rv => c => Result.Succeed(Tuple.Create(lv, rv),c.Position)));
        }

        public static Parser<R> Or<R>(this Parser<R> l, Parser<R> r)
        {
            return c => Pattern<Result<R>>.Match(l(c))
                .Case<Result<R>.Success>(x => x)
                .Case<Result<R>.Failure>(x => r(c))
                .Run();
        }

        private static Parser<ImmutableList<R>> _Many<R>(this Parser<R> p, ImmutableList<R> rs, int min = 0,
            int max = int.MaxValue)
        {
            return chars =>
            {
                var f = p.Bind(value => _Many(p, rs.Add(value), min, max))(chars);
                return Pattern<Result<ImmutableList<R>>>.Match(f)
                    .Case<Result<ImmutableList<R>>.Success>(_ => rs.Count <= max, v => Result.Succeed(v.Value, v.Peek))
                    .Case<Result<ImmutableList<R>>.Failure>(_ => rs.Count <= max && rs.Count >= min, v => Result.Succeed(rs, chars.Position))
                    .Default(v => Result.Fail<ImmutableList<R>>("", v.Peek))
                    .Run();
            };
        }

        /// <summary>   A Parser&lt;R&gt; extension method that manies the given p. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="p">    The p to act on. </param>
        /// <returns>   A list of. </returns>
        public static Parser<ImmutableList<R>> Many<R>(this Parser<R> p)
        {
            return _Many(p, ImmutableList<R>.Empty);
        }

        /// <summary>   A Parser&lt;R&gt; extension method that many 1. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="p">    The p to act on. </param>
        /// <returns>   A list of. </returns>
        public static Parser<ImmutableList<R>> Many1<R>(this Parser<R> p)
        {
            return _Many(p, ImmutableList<R>.Empty, 1, 1);
        }
    }
}