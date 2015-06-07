#r "../../src/Wooga.Lambda/bin/Debug/Wooga.Lambda.dll"
#r "../../packages/PerfUtil/lib/net40/PerfUtil.dll"

open System
open Wooga.Lambda.Data
open PerfUtil
open System.Collections.Generic

type IOperation<'t> =
    inherit ITestable
    abstract Run : Op<'t> -> unit
and Op<'t> = Append of 't | Prepend of 't //| Head // | Tail | Last | Init

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
        override __.Run op =
            match op with
            | Append x -> _d <- _d@[x]
            | Prepend x -> _d <- x::_d
        member __.Init () = _d <- List.empty
        member __.Fini () = _d <- List.empty
        member __.Name = "FSharpList"

type FSharpArrayOps<'t>() =
    let mutable _d = Array.empty
    interface IOperation<'t> with
        override __.Run op =
            match op with
            | Append x -> _d <- Array.append _d [|x|]
            | Prepend x -> _d <- Array.append [|x|] _d
        member __.Init () = _d <- Array.empty
        member __.Fini () = _d <- Array.empty
        member __.Name = "FSharpArray"

type CSharpListOps<'t>() =
    let mutable _d = List<'t>()
    interface IOperation<'t> with
        override __.Run op =
            match op with
            | Append x -> _d.Add(x)
            | Prepend x -> _d.Insert(0,x)
        member __.Init () = _d <- List<'t>()
        member __.Fini () = _d <- List<'t>()
        member __.Name = "CSharpList"

type CSharpArrayOps<'t>() =
    let mutable _i = 0
    let mutable _d = Array.CreateInstance(typeof<'t>,50050)
    interface IOperation<'t> with
        override __.Run op =
            match op with
            | Append x -> _d.SetValue(x,_i)
                          _i <- _i+1
            | Prepend x -> let a = Array.CreateInstance(typeof<'t>,50100)
                           Array.Copy(_d,0,a,1,System.Math.Min(_d.Length,_i))
                           _d <- a
                           _d.SetValue(x,0)
                           _i <- _i+1
        member __.Init () = _d <- Array.CreateInstance(typeof<'t>,50050)
        member __.Fini () = _d <- Array.CreateInstance(typeof<'t>,50050)
        member __.Name = "CSharpArray"

[<AutoOpen>]
module PerfTests =

    type Marker = class end

    [<PerfTest(50000)>]
    let ``Append`` (s : IOperation<char>) = s.Run(Append('x'))

    [<PerfTest(50000)>]
    let ``Prepend`` (s : IOperation<char>) = s.Run(Prepend('a'))

let tester () = new ImplementationComparer<IOperation<char>>(
                    new FingerTreeOps<char>(),
                    [new FSharpListOps<char>();new FSharpArrayOps<char>();new CSharpListOps<char>();new CSharpArrayOps<char>()],
                    warmup = true) :> PerformanceTester<IOperation<char>>

PerfTest<IOperation<char>>.OfModuleMarker<PerfTests.Marker>()
|> PerfTest.run tester
