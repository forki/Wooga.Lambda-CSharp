(*** hide ***)
// This block of code is omitted in the generated HTML documentation. Use
// it to define helpers that you do not want to show in the documentation.
#I "../../bin"

(**
# Functional primitives for Unity3D

*Unity3D* being so far behind the *.NET* and *Mono* world,
this library is an attempt at backporting some features found in more
recent runtimes and *C# libraries* as well as pick up and harness useful
ideas and patterns from other languages and/or programming paradigms.


Immutable and persistent data-structures, parser-combinators,
monads for concurrency and control-flow
as well as network and filesystem utilities can already be found here
thanks to the heavy inspiration by
[csharp-monads](https://github.com/louthy/csharp-monad), [Haskell](https://www.haskell.org/) & [F#](http://fsharp.org).


It's all still far from feature complete,
but as it turns out C# is actually not so bad for functional programming:
parametric-polymorphism, delegates, higher-order functions/lambdas, type-inference and extension-methods are quite a good fit.


Samples & documentation
-----------------------

The library comes with ~~comprehensible~~ documentation and includes ~~several~~ tutorials.

 * [Have a look at the **Maybe** tutorial to get started](wooga.lambda.maybe.html)

 * [If you know that already, how about **Either**?](wooga.lambda.either.html)

 * [Have a peek at a rather small slide deck](presentation_04_2015/index.html)

 * [Check out the API Reference](reference/index.html)

 * [Or straight to the source-code](http://github.com/wooga/Wooga.Lambda-CSharp)

Contributing and copyright
--------------------------

The project is hosted on [GitHub][gh] where you can [report issues][issues], fork
the project and submit pull requests. If you're adding a new public API, please also
consider adding [samples][content] that can be turned into a documentation. You might
also want to read the [library design notes][readme] to understand how it works.

The library is available under Public Domain license, which allows modification and
redistribution for both commercial and non-commercial purposes. For more information see the
[License file][license] in the GitHub repository.

  [content]: https://github.com/wooga/Wooga.Lambda-CSharp/tree/master/docs/content
  [gh]: https://github.com/wooga/Wooga.Lambda-CSharp
  [issues]: https://github.com/wooga/Wooga.Lambda-CSharp/issues
  [readme]: https://github.com/wooga/Wooga.Lambda-CSharp/blob/master/README.md
  [license]: https://github.com/wooga/Wooga.Lambda-CSharp/blob/master/LICENSE.txt
*)
