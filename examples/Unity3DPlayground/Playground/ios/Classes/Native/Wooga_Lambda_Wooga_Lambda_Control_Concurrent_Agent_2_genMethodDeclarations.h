#pragma once

// Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Agent_2_t1087;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>
struct Async_1_t29;
// Wooga.Lambda.Data.Unit
struct Unit_t33;
// Wooga.Lambda.Logging.LoggingAgent/LogMsg
struct LogMsg_t34;
// Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>
struct ImmutableList_1_t1089;
// System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>,Wooga.Lambda.Logging.LoggingAgent/LogMsg>
struct Func_2_t4376;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Async_1_t4377;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Logging.LoggingAgent/LogMsg>
struct Async_1_t1093;

// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::get_IsRunning()
// Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>
#include "Wooga_Lambda_Wooga_Lambda_Control_Concurrent_Agent_2_gen_0MethodDeclarations.h"
#define Agent_2_get_IsRunning_m21464(__this, method) (bool)Agent_2_get_IsRunning_m20392_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::set_IsRunning(System.Boolean)
#define Agent_2_set_IsRunning_m21465(__this, ___value, method) (void)Agent_2_set_IsRunning_m20393_gshared((Agent_2_t1091 *)__this, (bool)___value, method)
// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::CancellationRequested()
#define Agent_2_CancellationRequested_m21466(__this, method) (bool)Agent_2_CancellationRequested_m20394_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::Cancel()
#define Agent_2_Cancel_m21467(__this, method) (void)Agent_2_Cancel_m20395_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit> Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::CancelAsync()
#define Agent_2_CancelAsync_m21468(__this, method) (Async_1_t29 *)Agent_2_CancelAsync_m20396_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::Post(TM)
#define Agent_2_Post_m3064(__this, ___msg, method) (Unit_t33 *)Agent_2_Post_m20397_gshared((Agent_2_t1091 *)__this, (Object_t *)___msg, method)
// TR Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::PostAndReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
#define Agent_2_PostAndReply_m21469(__this, ___f, method) (ImmutableList_1_t1089 *)Agent_2_PostAndReply_m20398_gshared((Agent_2_t1091 *)__this, (Func_2_t4187 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TR> Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::PostAndAsyncReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
#define Agent_2_PostAndAsyncReply_m21470(__this, ___f, method) (Async_1_t4377 *)Agent_2_PostAndAsyncReply_m20399_gshared((Agent_2_t1091 *)__this, (Func_2_t4187 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TM> Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::Receive()
#define Agent_2_Receive_m3065(__this, method) (Async_1_t1093 *)Agent_2_Receive_m20400_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::.ctor()
#define Agent_2__ctor_m21471(__this, method) (void)Agent_2__ctor_m20401_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::<CancelAsync>b__6()
#define Agent_2_U3CCancelAsyncU3Eb__6_m21472(__this, method) (Unit_t33 *)Agent_2_U3CCancelAsyncU3Eb__6_m20402_gshared((Agent_2_t1091 *)__this, method)
// TM Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::<Receive>b__d()
#define Agent_2_U3CReceiveU3Eb__d_m21473(__this, method) (LogMsg_t34 *)Agent_2_U3CReceiveU3Eb__d_m20403_gshared((Agent_2_t1091 *)__this, method)
