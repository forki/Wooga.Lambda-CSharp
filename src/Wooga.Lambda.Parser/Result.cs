namespace Wooga.Lambda.Parser
{
    /// <summary>   A result. </summary>
    /// <typeparam name="T">    Generic type parameter. </typeparam>
    public abstract class Result<T>
    {
        /// <summary>   Gets the peek. </summary>
        /// <value> The peek. </value>
        public CharStreamPosition Peek { get; internal set; }

        /// <summary>   A failure. This class cannot be inherited. </summary>
        public sealed class Failure : Result<T>
        {
            /// <summary>   Gets the message. </summary>
            /// <value> The message. </value>
            public string Message { get; internal set; }
        };

        /// <summary>   A success. This class cannot be inherited. </summary>
        public sealed class Success : Result<T>
        {
            /// <summary>   Gets the value. </summary>
            /// <value> The value. </value>
            public T Value { get; internal set; }
        };
    };

    /// <summary>   A result. </summary>
    public static class Result
    {
        /// <summary>   Succeed. </summary>
        /// <typeparam name="T">    Generic type parameter. </typeparam>
        /// <param name="value">    The value. </param>
        /// <param name="peek">     The peek. </param>
        /// <returns>   A Result&lt;T&gt; </returns>
        public static Result<T> Succeed<T>(T value, CharStreamPosition peek)
        {
            return new Result<T>.Success {Value = value, Peek = peek};
        }

        /// <summary>   Fails. </summary>
        /// <typeparam name="R">    Type of the r. </typeparam>
        /// <param name="msg">  The message. </param>
        /// <param name="peek"> The peek. </param>
        /// <returns>   A Result&lt;R&gt; </returns>
        public static Result<R> Fail<R>(string msg, CharStreamPosition peek)
        {
            return new Result<R>.Failure {Message = msg, Peek = peek};
        }
    }
}