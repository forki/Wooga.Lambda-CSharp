//using System;
//using Wooga.Lambda.Control.Monad;
//
namespace AsyncDownloader
{
//    public static class EitherMethods
//    {
//        public static Either<string, Exception> GetString()
//        {
//            return Either.Success<string, Exception>("hans-wurst");
//        }
//
//        public static Either<string, Exception> GetOtherString()
//        {
//            return Either.Success<string, Exception>("hans-kaese");
//        }
//
//        public static TSuccess _FromSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TSuccess d)
//        {
//            return m.IsSuccess() ? m.FromSuccess() : d;
//        }
//
//        public static TSuccess _FromSuccess<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TSuccess> f)
//        {
//            return m.IsSuccess() ? m.FromSuccess() : f();
//        }
//
//        public static TFailure _FromFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, TFailure d)
//        {
//            return m.IsFailure() ? m.FromFailure() : d;
//        }
//
//        public static TFailure _FromFailure<TSuccess, TFailure>(this Either<TSuccess, TFailure> m, Func<TFailure> d)
//        {
//            return m.IsFailure() ? m.FromFailure() : d();
//        }
//    }
//
//
    public class Program
    {
//        public static string _Serialize(object x)
//        {
//            return x.ToString();
//        }
//
//        public static Either<string, Exception> Serialize(object x)
//        {
//            return Either.Success<string,Exception>(x.ToString());
//        }
//
//        public static Either<object, Exception> GetUser()
//        {
//            return Either.Success<object, Exception>("my-user");
//        }
//
//        public static string Uppercase(string x)
//        {
//            return x.ToUpper();
//        }
//
        private static void Main(string[] args)
        {
//            var x = EitherMethods.GetString();
//            string y;
//            y = x.IsSuccess() ? Uppercase(x.FromSuccess()) : "failure";
//
//            var user = GetUser();
//
//            user.Bind(Serialize)._FromSuccess(()=>"xxx");
//
//            //
//            //            EitherMethods.GetString().FromSuccess();
//            //
//            //            EitherMethods.GetString().Bind(EitherUppercase);
//            //
//            //            EitherMethods.GetString().Map(Uppercase).FromSuccessOr("failure"));
//            //
//            //            Uppercase(EitherMethods.GetString().FromSuccessOr("failure"));
//            //
//
//            EitherMethods.GetString().From(s => 0, exception => 1);
//
////            Uppercase(EitherMethods.GetString().FromSuccessOr(execption => exception.type+"failure"));
        }
    }
}
