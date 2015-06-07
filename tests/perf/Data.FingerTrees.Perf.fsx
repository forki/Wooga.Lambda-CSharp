#r "../../src/Wooga.Lambda/bin/Debug/Wooga.Lambda.dll"
#r "../../packages/PerfUtil/lib/net40/PerfUtil.dll"

open System
open Wooga.Lambda.Data
open PerfUtil
open System.Collections.Generic

type IOperation<'t> =
    inherit ITestable
    abstract Run : Op<char> -> unit
and Op<'t> = Append of char list | Prepend of char list | Tail of int //| Head // | Tail | Last | Init

let chars = [0..5000] |> List.map char |> List.sortBy (fun x -> System.DateTime.Now.Ticks)

type FingerTreeOps() =
    let empty = (FingerTree.Empty<char>() :> FingerTree<char>)
    let full  = List.fold (fun s x -> FingerTree.Append(s,x)) empty chars
    interface IOperation<char> with
        override __.Run op =
            match op with
            | Append xs -> List.fold (fun s x -> FingerTree.Append(s,x)) empty  xs
                           |> ignore 
            | Prepend xs -> List.fold (fun s x -> FingerTree.Prepend(s,x)) empty  xs
                            |> ignore
            | Tail n -> let mutable tail = full in for i in 1..n do tail <- tail.Tail()
                        |> ignore  
        member __.Init () = ()
        member __.Fini () = ()
        member __.Name = "FingerTree"

type FSharpListOps() =
    let empty = List.empty
    let full = List.fold (fun s x -> List.append s [x]) empty chars
    interface IOperation<char> with
        override __.Run op =
            match op with
            | Append xs -> List.fold (fun s x -> List.append s [x]) empty xs
                           |> ignore
            | Prepend xs -> List.fold (fun s x -> x::s) empty xs
                            |> ignore
            | Tail n -> let mutable tail = full in for i in 1..n do tail <- tail.Tail
                        |> ignore
        member __.Init () = ()
        member __.Fini () = ()
        member __.Name = "FSharpList"

type FSharpArrayOps() =
    let empty = Array.empty
    let full = List.fold (fun s x -> Array.append s [|x|]) empty chars 
    interface IOperation<char> with
        override __.Run op =
            match op with
            | Append xs -> List.fold (fun s x -> Array.append s [|x|]) empty xs
                           |> ignore
            | Prepend xs -> List.fold (fun s x -> Array.append [|x|] s) empty xs
                            |> ignore
            | Tail n -> let mutable tail = full in for i in 1..n do tail <- Array.sub full 1 (full.Length-1)  
                        |> ignore
        member __.Init () = ()
        member __.Fini () = ()
        member __.Name = "FSharpArray"

type CSharpListOps() =
    let empty () = new List<char>()
    let _full() = List.fold (fun (s:List<char>) x -> s.Add(x)
                                                     s) (empty()) chars
    let mutable full = _full()
    interface IOperation<char> with
        override __.Run op =
            match op with
            | Append xs -> List.fold (fun (s:List<char>) x -> s.Add(x)
                                                              s) (empty()) xs
                           |> ignore
            | Prepend xs -> List.fold (fun (s:List<char>) x -> s.Insert(0,x)
                                                               s) (empty()) xs
                           |> ignore
            | Tail n -> let mutable tail = full
                        for i in 1..n do tail <- tail.GetRange(1,tail.Count-1)
        member __.Init () = full <- _full()
        member __.Fini () = ()
        member __.Name = "CSharpList"

[<AutoOpen>]
module PerfTests =

    type Marker = class end

    [<PerfTest(500)>]
    let ``Append`` (s : IOperation<char>) = s.Run(Append(chars))

    [<PerfTest(500)>]
    let ``Prepend`` (s : IOperation<char>) = s.Run(Prepend(chars))

    [<PerfTest(500)>]
    let ``Tail`` (s : IOperation<char>) = s.Run(Tail(500))

let tester () = new ImplementationComparer<IOperation<char>>(
                    new FingerTreeOps(),
                    [new FSharpListOps();new FSharpArrayOps();new CSharpListOps()],
                    warmup = true) :> PerformanceTester<IOperation<char>>

let test = PerfTest<IOperation<char>>.OfModuleMarker<PerfTests.Marker>()
let result = PerfTest.run tester test
