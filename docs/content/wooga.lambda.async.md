# Working with Async

> "An operation is **synchronous** if the caller **must wait** for it to complete before making progress.
> More specifically, the calling thread may **block** until the synchronous operation is complete.
> Note that a CPU-bound task exhibits behavior similar to blocking.
>
>
> An operation is **asynchronous** if the request to begin the operation
> and the result of the operation can be delivered through **different channels**.
> This provides a convenient mechanism to encapsulate waiting. In other words,
> an asynchronous operations **decouples** the means of **sending** the request from the means of **receiving** a response."
> *- FSharp.Control.AsyncSeq documentation*

## Introducing *Async* computations

Asynchronous computations of type **Async<'T>** can be executed
in a non-blocking manner on a worker-thread as well as in a blocking manner on the current thread.
Creation and manipulation of **Async<'T>** computations is done via the various functions in **Concurrent.Async**.

## *Async* instance

Creating an **Async<'T>** is as simple as defining a Lambda:

    [lang=cs]
    Async<string> a = () => "async";

Computing the value **'T** is done in a blocking manner on the current thread with **RunSynchronously()**:

    [lang=cs]
    Async<string> a = () => "async";
    var s = a.RunSynchronously(); // "async"

The simplest way to execute an **Async<'T>** on a worker-thread is done with **Start()**:

    [lang=cs]
    Async<string> a = () => "async";
    var s = a.Start(); // Unit (it does not wait for the value)

To get the result of an **Async<'T>** running on another thread an **AsyncReplyChannel<'T>** needs to be provided to **StartAndReply('T->'T)**:

    [lang=cs]
    Async<string> a = () => "async";
    a.StartAndReply(_ => new AsyncReplyChannel<string>(r =>
    {
        Debug.WriteLine("reply: " + r); // reply: async
        return Unit.Default;
    }));

## Composing *Async* sequentially

To have multiple **Async<'T>** compute sequentially (one after the other) is easily done with a monadic bind:

    [lang=cs]
    Func<string, Async<string>> Append(Async<string> x)
    {
        return s => Async.Return(s + " " + x.RunSynchronously());
    }

    var first   = Async.Return("first");
    var second  = Async.Return("second");
    var third   = Async.Return("third");

    var seq = first
              .Bind(Append(second))
              .Bind(Append(third))
              .RunSynchronously(); // "first second third"

Another option would be to do it sequentially inside of another **Async<'T>**:

    [lang=cs]
    var first = Async.Return("first");
    var second = Async.Return("second");
    var third = Async.Return("third");

    Async<string> comp = () =>
    {
        var x = first.RunSynchronously();
        var y = second.RunSynchronously();
        var z = third.RunSynchronously();
        return x + " " + y + " " + z;
    };

    var r = comp.RunSynchronously(); // "first second third"

## Composing *Async* parallel

Multiple **Async<'T>** can be executed in parallel with **Async.Parallel(Async<'T>[])**.
Returns an array of values from the array of input computations.

    [lang=cs]
    Async<int> threadId = () => Thread.CurrentThread.ManagedThreadId;
    var blocker = Async.Sleep(300).Bind(_ => threadId);
    var sleeps = new[]{blocker,...,blocker};

    var stopwatch = new Stopwatch();
    stopwatch.Start();

    var threadCount = sleeps
                      .Parallel().RunSynchronously()
                      .Distinct().Count();

    stopwatch.Stop();
    var t = stopwatch.Elapsed.Milliseconds;

    Debug.WriteLine("total ms: {0} for threads: {1}",t,threadCount);
    // total ms: 953 for threads: 4

## *Async* gotchas

**Async<'T>** can sleep for a given time using **Async.Sleep(int)**:

    [lang=cs]
    Async.Sleep(300)
    .RunSynchronously();

**Async<'T>** exceptions can be caught with **Async.Catch()**:

    [lang=cs]
    var failure = Async.Return(() =>
    {
        throw new System.Exception("ga");
        return "txt";
    });

    var txt = failure.Catch().RunSynchronously();
    if(txt.IsLeft())
        Debug.WriteLine(txt.LeftValue().Message); // "ga"


Check out the [API Reference](http://wooga.github.io/Wooga.Lambda-CSharp/reference/wooga-lambda-control-concurrent-async.html) for more information.
