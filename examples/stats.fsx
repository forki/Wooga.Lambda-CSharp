#I "../src/Wooga.Lambda.Stats/bin/Debug"
#I "../src/Wooga.Lambda.Network/bin/Debug"
#r "Wooga.Lambda.dll"
#r "Wooga.Lambda.Stats.dll"
#r "Wooga.Lambda.Network.dll"

System.Environment.CurrentDirectory <- __SOURCE_DIRECTORY__

open Wooga.Lambda.Stats
open Wooga.Lambda.Stats.Network
open Wooga.Lambda.Network.Transport

let stats = Stats.Shared
let HTTP = WebRequestTransport.CreateHttpClient ()
let STATSHTTP = HttpClientStats.CollectStats(HTTP,stats)

STATSHTTP.Get("http://google.com")
STATSHTTP.Get("http://amazon.com")
STATSHTTP.Get("http://wooga.com")
STATSHTTP.Get("http://king.com")