open System
open Wooga.Lambda.Data
open PerfUtil
open System.Collections.Generic

[<AutoOpen>]
module Perf =
    type IOperation<'t> =
        inherit ITestable
        abstract Run : Op<'t> -> unit
    and Op<'t> = Append of 't | Prepend of 't | Head // | Tail | Last | Init

    type FingerTreeOps<'t>() =
        let mutable _d : FingerTree<'t> = FingerTree.Empty() :> FingerTree<'t>
        interface IOperation<'t> with
            override __.Run op =
                match op with
                | Append x -> _d <- _d.Append(x)
                | Prepend x -> _d <- _d.Prepend(x)
            member __.Init () = _d <- FingerTree.Empty()
            member __.Fini () = _d <- FingerTree.Empty()
            member __.Name = "FingerTree"

    type FSharpListOps<'t>() =
        let mutable _d = List.empty
        interface IOperation<'t> with
            override __.Run op = ()
//                match op with
//                | Append x -> _d <- _d@[x]
//                | Prepend x -> _d <- x::_d
            member __.Init () = _d <- List.empty
            member __.Fini () = _d <- List.empty
            member __.Name = "FSharpList"

[<AutoOpen>]
module PerfTests =

    type Marker = class end

    [<PerfTest(50000)>]
    let ``Append`` (s : IOperation<char>) = s.Run(Append('x'))

    [<PerfTest(50000)>]
    let ``Prepend`` (s : IOperation<char>) = s.Run(Prepend('a'))    

[<EntryPoint>]
let main argv = 
    printfn "%A" argv

    let tester () = new ImplementationComparer<IOperation<char>>(
                        new FingerTreeOps<char>(),
                        [new FSharpListOps<char>()],
                        warmup = true) :> PerformanceTester<IOperation<char>>

    PerfTest<IOperation<char>>.OfModuleMarker<PerfTests.Marker>()
    |> PerfTest.run tester
    |> ignore

    0 // return an integer exit code
