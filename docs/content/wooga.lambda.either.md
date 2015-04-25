# Monad.Either

[Documentation](reference/wooga-lambda-control-monad-either.html)

### The problem: exceptions and error-handling

    [lang=cs]
    bool ValidPassword(string x)
    {
        if(x.Length < 8)
            throw new System.Exception("Password needs at least 8 chars");
        if(x.Contains("-"))
            throw new System.Exception("Password needs to contain a dash");
        return true;
    }

    var valid = false;
    try
    {
        valid = ValidPassword(pw);
    }
    catch (Exception e)
    {
        Console.WriteLine("Validation error:"+e);
    }
    if(valid) Console.WriteLine("Validation succeeded");

### The solution: Either[TL,TR]

> "The Either type represents values with two possibilities: a value of type Either[T1,T2] is either Left[T1] or Right[T2].
> The Either type is sometimes used to represent a value which is either correct or an error; by convention, Left is used to hold an error value and Right holds a correct value"

### An example: Either[TL,TR]

    [lang=cs]
    Either<Exception,string> ValidPassword(string x)
    {
        if(x.Length < 8)
            return Either.Left<Exception,string>(new Exception("Password needs at least 8 chars"));
        if (x.Contains("-"))
            return Either.Left<Exception, string>(new Exception("Password needs to contain a dash"));
        return Either.Right<Exception,string>(x);
    }

    var valid = ValidPassword(pw);
    valid.IsLeft()
        ? Console.WriteLine("Validation error:" + valid.FromLeft())
        : Console.WriteLine("Validation succeeded");

### Composing: Either[TL,TR]

    [lang=cs]
    Either<Exception, string> AtLeast8Chars(string x)
    {
        return x.Length < 8
            ? Either.Left<Exception, string>(new Exception("Password needs at least 8 chars"))
            : Either.Right<Exception, string>(x);
    }

    Either<Exception, string> ContainsDash(string x)
    {
        return x.Contains("-")
            ? Either.Left<Exception, string>(new Exception("Password needs to contain a dash"))
            : Either.Right<Exception, string>(x);
    }

    Either<Exception,string> ValidPassword(string x)
    {
        return AtLeast8Chars(x)
              .Bind(ContainsDash);
    }

    var valid = ValidPassword(pw);
    valid.IsLeft()
        ? Console.WriteLine("Validation error:" + valid.FromLeft())
        : Console.WriteLine("Validation succeeded");

        ### The Try method: Either[TL,TR]

            [lang=cs]
            public Uri GetEndpoint(string host)
            {
                return new Uri("http://" + host);
            }

            var x = GetEndpoint("~spaghetti~");
            // System.UriFormatException : Invalid URI: The hostname could not be parsed.

            // vs.

            public Uri GetEndpoint(string host)
            {
                return new Uri("http://" + host);
            }

            var x = Either.Try(()=>GetEndpoint("~spaghetti~"))();
            if(x.IsRight())
            {
                System.Console.WriteLine(x.RightValue());
            }
