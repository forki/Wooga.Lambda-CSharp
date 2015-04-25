# Working with Maybe

> "The **Maybe** type encapsulates an optional value.
> A value of type **Maybe 'T** either contains a value of type **'T**, or it is empty."
> *- Haskell documentation*

The **Maybe** type in **Wooga.Lambda** borrows its name from Haskell:
The empty **Maybe** case is called **Nothing** and the **Maybe** holding a value is called **Just**.

## *Maybe* instance

Create a **Maybe** by injecting a value with **Maybe.Just('T)** or create the empty one with **Maybe.Nothing<'T>()**.

    [lang=cs]
    Maybe<string> justAnX = Maybe.Just("x");
    Maybe<string> nothing = Maybe.Nothing<string>();

Use the **FromMaybe('T)** or **FromJustOrDefault('T2,'T->'T2)** functions to extract the **Just** value;
both will fallback to the given default value in case of **Nothing**.

    [lang=cs]
    string ofJustAnX = justAnX.FromMaybe("not x"); // "x"
    string ofNothing = nothing.FromMaybe("not x"); // "not x"

    int ofJustAnX2 = justAnX.FromJustOrDefault(0, s => s.Length); // 1
    int ofNothing2 = nothing.FromJustOrDefault(0, s => s.Length); // 0

Check out the [API Reference](reference/wooga-lambda-control-monad-maybe.html) for more information.

## Avoiding *null* and *NullReferenceExceptions*

Avoid using **null** to represent empty values. The following snippet is valid code and will raise a NullReferenceException.  

    [lang=cs]
    string name = null;
    int letters = name.Length;

By using **Maybe** you make sure that the potential empty case will be handled at runtime.

    [lang=cs]
    Maybe<string> name = Maybe.Nothing<string>();
    int letters = name.FromJustOrDefault(0, s => s.Length);

## Composing *Maybe*

Because **Maybe** is a monad, composing multiple of them is very straightforward.
The monadic operators **>>=** & **>>** are implemented as **Maybe.Bind** and **Maybe.Then**.

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
