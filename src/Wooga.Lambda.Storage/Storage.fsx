#I "bin/Release"
#I "../Wooga.Lambda/bin/Release"
#r "Wooga.Lambda.dll"
#r "Wooga.Lambda.Storage.dll"

//System.Diagnostics.Debugger.Launch()

open Wooga.Lambda.Control.Concurrent;
open Wooga.Lambda.Storage.Apis;

let fs = LocalFileSystem.Create()

System.Environment.CurrentDirectory <- __SOURCE_DIRECTORY__

fs.GetDirAsync(fs.DirPath(".")).RunSynchronously()

fs.CpDirAsync(fs.DirPath("../../.paket"),fs.DirPath("../../.paket2")).RunSynchronously()
