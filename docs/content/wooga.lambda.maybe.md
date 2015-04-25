# Monad.Maybe

[Documentation](reference/wooga-lambda-control-monad-maybe.html)

### The problem: null

    [lang=cs]
    string FirstOf(string[] xs)
    {
      return xs.Length > 0 ? xs[0] : null;
    }

    var name = FirstOf(names);
    var letters = name.Length; // Causes NullReferenceException

### The solution: Maybe[T]

> "The Maybe type encapsulates an optional value. A value of type Maybe[T] either contains a value of type T (Just[T]), or it is empty (Nothing[T])."

### An example: Maybe[T]

    [lang=cs]
    Maybe<string> FirstOf(string[] xs)
    {
      return xs.Length > 0 ? Maybe.Just(xs[0]) : Maybe.Nothing<string>();
    }

    var name = FirstOf(names);
    var letters = name.FromJustOrDefault(0,s => s.Length);

### Composing: Maybe[T]

    [lang=cs]
    Maybe<string> FirstOf(string[] xs)
    {
        return xs.Length > 0 ? Maybe.Just(xs[0]) : Maybe.Nothing<string>();
    }

    Maybe<string> StartsWithA(string s)
    {
        return s.StartsWith("A") ? Maybe.Just(s) : Maybe.Nothing<string>();
    }

    Maybe<string> AtLeast5Chars(string s)
    {
        return s.Length >= 5 ? Maybe.Just(s) : Maybe.Nothing<string>();
    }

    var letters = FirstOf(names)
                  .Bind(StartsWithA)
                  .Bind(AtLeast5Chars)
                  .FromJustOrDefault(0,s => s.Length);
