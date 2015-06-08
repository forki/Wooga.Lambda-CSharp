#r "../../packages/PerfUtil/lib/net40/PerfUtil.dll"
#r "../../src/Wooga.Lambda/bin/Debug/Wooga.Lambda.dll"

open System
open PerfUtil
open Wooga.Lambda.Data

module Utils =
    let Epoch () = DateTime.Now.Subtract(DateTime(1970,1,1,0,0,0,0,System.DateTimeKind.Utc)).TotalSeconds.ToString()

type Impl =
    inherit ITestable
    abstract Fill : unit -> unit
    abstract Append : IV -> unit
    abstract Prepend : IV -> unit
    abstract Tail : unit -> unit
    abstract Initial : unit -> unit
    abstract Head : unit -> unit
    abstract Last : unit -> unit
and IV = int

let [<Literal>] countFull = 500

type FingerTreeImpl() =
    let empty = FingerTree.Empty() :> FingerTree<IV>
    let full = List.fold (fun (s:FingerTree<IV>) x -> s.Append(x)) empty [1..countFull]
    let mutable c = empty
    interface Impl with
        member __.Name = "FingerTree"
        member __.Init() = ()
        member __.Fini() = c <- empty
        member __.Fill() = c <- full
        member __.Append v = c <- c.Append v
        member __.Prepend v = c <- c.Prepend v
        member __.Tail () = c <- c.Tail()
        member __.Initial () = c <- c.Init()
        member __.Head () = c.Head() |> ignore
        member __.Last () = c.Last() |> ignore

type FListImpl() =
    let empty = List<IV>.Empty
    let full = [1..countFull]
    let mutable c = empty
    interface Impl with
        member __.Name = "FSharp.List"
        member __.Init() = ()
        member __.Fini() = c <- empty
        member __.Fill() = c <- full
        member __.Append v = c <- c@[v]
        member __.Prepend v = c <- v::c
        member __.Tail () = c <- c.Tail
        member __.Initial () = c <- c |> (List.rev >> List.tail)
        member __.Head () = c.Head |> ignore
        member __.Last () = c |> (List.rev >> List.head) |> ignore

type CListImpl() =
    let empty = System.Collections.Generic.List<IV>()
    let full = List.fold (fun (s:System.Collections.Generic.List<IV>) x -> let _ = s.Add(x) in s) empty [1..countFull]
    let mutable c = empty
    interface Impl with
        member __.Name = "CSharp.List"
        member __.Init() = ()
        member __.Fini() = c <- System.Collections.Generic.List<IV>()
        member __.Fill() = c <- List.fold (fun (s:System.Collections.Generic.List<IV>) x -> let _ = s.Add(x) in s) empty [1..countFull]
        member __.Append v = c.Add(v)
        member __.Prepend v = c.Insert(0,v)
        member __.Tail () = c.RemoveAt(0)
        member __.Initial () = c.RemoveAt(c.Count-1)
        member __.Head () = c.Item(0) |> ignore
        member __.Last () = c.Item(c.Count-1) |> ignore

type CImmutableListImpl() =
    let empty = ImmutableList.Empty()
    let full = List.fold (fun (s:ImmutableList<IV>) x -> s.Add(x)) empty [1..countFull]
    let mutable c = empty
    interface Impl with
        member __.Name = "CSharp.ImmutableList"
        member __.Init() = ()
        member __.Fini() = c <- empty
        member __.Fill() = c <- full
        member __.Append v = c <- c.Add(v)
        member __.Prepend v = c <- c.Insert(v,0)
        member __.Tail () = c <- c.RemoveAt(0)
        member __.Initial () = c <- c.RemoveAt(c.Count-1)
        member __.Head () = c.Item(0) |> ignore
        member __.Last () = c.Item(c.Count-1) |> ignore

module Tests =
    type Marker =
        class
        end

    let intlist1 = [ 1..countFull/2 ]
    let intlist2 = [ 1..countFull ]

    [<PerfTest(100)>]
    let ``Append`` (s : Impl) = List.iter s.Append intlist1

    [<PerfTest(100)>]
    let ``Append2`` (s : Impl) = List.iter s.Append intlist2

    [<PerfTest(100)>]
    let ``Prepend`` (s : Impl) = List.iter s.Prepend intlist1

    [<PerfTest(100)>]
    let ``Prepend2`` (s : Impl) = List.iter s.Prepend intlist2

    [<PerfTest(100)>]
    let ``Tail`` (s : Impl) =
        s.Fill()
        List.iter (fun _ -> s.Tail()) intlist1

    [<PerfTest(100)>]
    let ``Tail2`` (s : Impl) =
        s.Fill()
        List.iter (fun _ -> s.Tail()) intlist2

    [<PerfTest(100)>]
    let ``Initial`` (s : Impl) =
        s.Fill()
        List.iter (fun _ -> s.Initial()) intlist1

    [<PerfTest(100)>]
    let ``Initial2`` (s : Impl) =
        s.Fill()
        List.iter (fun _ -> s.Initial()) intlist2

    [<PerfTest(100)>]
    let ``Head&Tail`` (s : Impl) =
        s.Fill()
        List.iter (fun _ ->
            s.Head()
            s.Tail()) intlist1

    [<PerfTest(100)>]
    let ``Head&Tail2`` (s : Impl) =
        s.Fill()
        List.iter (fun _ ->
            s.Head()
            s.Tail()) intlist2

    [<PerfTest(100)>]
    let ``Last&Initial`` (s : Impl) =
        s.Fill()
        List.iter (fun _ ->
            s.Last()
            s.Initial()) intlist1

    [<PerfTest(100)>]
    let ``Last&Initial2`` (s : Impl) =
        s.Fill()
        List.iter (fun _ ->
            s.Last()
            s.Initial()) intlist2

PerfTest.OfModuleMarker<Tests.Marker>()
|> PerfTest.run (fun () -> new ImplementationComparer<Impl>(FingerTreeImpl(), [ FListImpl(); CListImpl(); CImmutableListImpl(); ],new WeightedComparer(spaceFactor = 0.2, leastAcceptableImprovementFactor = 7.),true,true) :> _)

//PerfTest.OfModuleMarker<Tests.Marker> ()
//|> PerfTest.run (fun () -> new PastImplementationComparer<Impl>(FingerTreeImpl(),Utils.Epoch(),"performance.tests",true,new WeightedComparer(spaceFactor = 0.2, leastAcceptableImprovementFactor = 1.)) :> _)
