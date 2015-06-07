#r "../../src/Wooga.Lambda/bin/Debug/Wooga.Lambda.dll"

open Wooga.Lambda.Data

do System.Diagnostics.Debugger.Launch() |> ignore

let tree = FingerTree.Empty()
let tree' = FingerTree.Deep(Affix.One('O'), tree ,Affix.One('O'))
let tree'' = tree'.Append('A').Prepend('Z')
let head = tree''.Head()
let last = tree''.Last()
let tail = tree''.Tail()
let init = tree''.Init()

