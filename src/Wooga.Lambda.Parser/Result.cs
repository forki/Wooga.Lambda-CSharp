using System;

namespace Wooga.Lambda.Parser
{
    public abstract class Result<T>
    {
        public CharStreamPosition Peek { get; internal set; }

        public sealed class Failure : Result<T>
        {
            public string Message { get; internal set; }
        };

        public sealed class Success : Result<T>
        {
            public T Value { get; internal set; }
        };
    };

    public static class Result
    {
        public static Result<T> Succeed<T>(T value, CharStreamPosition peek)
        {
            return new Result<T>.Success {Value = value, Peek = peek};
        }

        public static Result<R> Fail<R>(string msg, CharStreamPosition peek)
        {
            return new Result<R>.Failure {Message = msg, Peek = peek};
        }

        public static T MatchResult<R, T>(this Result<R> r, Func<Result<R>.Success, T> Success,
            Func<Result<R>.Failure, T> Failure)
        {
            return (r is Result<R>.Success) ? Success(((Result<R>.Success) r)) : Failure(((Result<R>.Failure) r));
        }
    }
}