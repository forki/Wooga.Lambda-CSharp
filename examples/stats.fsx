#I "../src/Wooga.Lambda.Stats/bin/Debug"
#I "../src/Wooga.Lambda.Network/bin/Debug"
#I "../src/Wooga.Lambda.Storage/bin/Debug"
#r "Wooga.Lambda.dll"
#r "Wooga.Lambda.Stats.dll"
#r "Wooga.Lambda.Network.dll"
#r "Wooga.Lambda.Storage.dll"

System.Environment.CurrentDirectory <- __SOURCE_DIRECTORY__

open Wooga.Lambda.Control.Concurrent
open Wooga.Lambda.Stats
open Wooga.Lambda.Stats.Network
open Wooga.Lambda.Stats.Storage
open Wooga.Lambda.Network.Transport
open Wooga.Lambda.Storage.FileSystem

let HTTP = WebRequestTransport.CreateHttpClient()
let FS = LocalFileSystem.Local()
let STATS = Stats.Create(FS,FS.Locate(".stats"),Backends.Statsd.UDP.Create("192.168.59.103",8125))
let HTTPSTATS = HttpClientStats.CollectStats(HTTP,STATS)
let FSSTATS = FileSystemStats.For(FS,STATS)

for i in 0..10 do
    printfn "%i" i
    HTTPSTATS.GetAsync("http://google.com").Catch().RunSynchronously() |> ignore
    HTTPSTATS.GetAsync("http://amazon.com").Catch().RunSynchronously() |> ignore
    HTTPSTATS.GetAsync("http://wooga.com").Catch().RunSynchronously()  |> ignore
    HTTPSTATS.GetAsync("http://www.wooga.com/games/crazykings/").Catch().RunSynchronously() |> ignore
