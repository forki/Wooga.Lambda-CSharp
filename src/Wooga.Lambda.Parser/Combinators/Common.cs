using System;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Parser.Combinators
{
    public static class Common
    {
        public static Parser<R> Return<R>(R r)
        {
            return s => Result.Succeed(r, s.Position);
        }

        public static Parser<R> Zero<R>()
        {
            return s => Result.Fail<R>("Zero", s.Position);
        }

        public static Parser<R2> Bind<R, R2>(this Parser<R> p, Func<R, Parser<R2>> f)
        {
            return s => p(s).MatchResult(x => f(x.Value)(s.AtPosition(x.Peek)), y => Result.Fail<R2>(y.Message, y.Peek));
        }

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

        private static Parser<R[]> _Many<R>(this Parser<R> p, R[] rs, int min = 0, int max = int.MaxValue)
        {
            return chars =>
            {
                var f = p.Bind(value => _Many(p, rs.Append(value), min, max))(chars);
                return
                    f.MatchResult(
                        value =>
                            rs.Length > max ? Result.Fail<R[]>("", value.Peek) : Result.Succeed(value.Value, value.Peek),
                        value =>
                            rs.Length > max || rs.Length < min
                                ? Result.Fail<R[]>("", value.Peek)
                                : Result.Succeed(rs, chars.Position));
            };
        }

        public static Parser<R[]> Many<R>(this Parser<R> p)
        {
            return _Many(p, new R[0]);
        }
        
        public static Parser<R[]> Many1<R>(this Parser<R> p)
        {
            return _Many(p, new R[0], 1, 1);
        }
    }
}