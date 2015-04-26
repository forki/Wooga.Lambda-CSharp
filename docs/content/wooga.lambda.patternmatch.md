# Working with Pattern.Match

> In computer science, **pattern matching** is the act of checking
> a given sequence of tokens for the presence of the constituents of some pattern.
> In contrast to pattern recognition, the match usually has to be exact.
> The patterns generally have the form of either sequences or tree structures.
> *- Wikipedia*

Most of these ideas are stolen from [**Bob Nystrom**](http://journal.stuffwithstuff.com/) and his blogpost on [*ML-style Pattern Matching in C#*](http://journal.stuffwithstuff.com/2009/05/13/ml-style-pattern-matching-in-c/).
In contrast to his examples: this version is entirely **expression-based** and does **not yet extract fields** of input values like **monads** or **discriminated unions**. It might be possible to use **tuples** with **structural equality** to allow for matching on **nested data-structures** in the future,
which would be pretty close to what most functional languages offer.

## Matching on *equality*

In this case the objects **Equals('T)** method is used

    [lang=cs]
    var i = Pattern<int>
            .Match("hugo")
            .Case("hans", _ => 1)
            .Case("hugo", _ => 2)
            .Run(); // 2

## *Case order* is important

The first **case** to match the input will yield the result

    [lang=cs]
    var i = Pattern<int>
            .Match("hugo")
            .Case("hugo", _ => 1)
            .Case("hugo", _ => 2)
            .Run(); // 1

## Providing a *default case*

    [lang=cs]
    var i = Pattern<int>
            .Match("hugo")
            .Run(); // this causes an exception

When no case matches the input an **exception** is thrown,
providing a **default case** will avoid that

    [lang=cs]
    var i = Pattern<int>
            .Match("hugo")
            .Default(_ => 0)
            .Run(); // 0

## Matching on *predicates*

Lambdas of the type **'T->bool** can also be used to match the input

    [lang=cs]
    Func<int,Func<string,bool>> p = x => s => s.Length < x;
    var i = Pattern<string>
            .Match("hugo")
            .Case(s => s.Length == 0, _ => "A")
            .Case(p(3), _ => "B")
            .Case(p(5), _ => "C")
            .Default(_ => "D")
            .Run(); // "C"

## Matching on *types*

Adding a type parameter allows for sub-type matching of the input  

    [lang=cs]
    var just = Maybe.Just("hans")();
    var not = Maybe.Nothing<string>()();

    var s1 = Pattern<string>
            .Match(just)
            .Case<Maybe.Result<string>.Just>(x => "just")
            .Case<Maybe.Result<string>.Nothing>(x => "not")
            .Run(); // "just"

    var s2 = Pattern<string>
            .Match(not)
            .Case<Maybe.Result<string>.Just>(x => "just")
            .Case<Maybe.Result<string>.Nothing>(x => "not")
            .Run(); // "not"
