#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>
struct Agent_2_t5406;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>
struct Async_1_t160;
// Wooga.Lambda.Data.Unit
struct Unit_t150;
// System.Object
struct Object_t;
// System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<System.Object>,System.Object>
struct Func_2_t5407;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Object>
struct Async_1_t162;

// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::get_IsRunning()
 bool Agent_2_get_IsRunning_m21475_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_get_IsRunning_m21475(__this, method) (bool)Agent_2_get_IsRunning_m21475_gshared((Agent_2_t5406 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::set_IsRunning(System.Boolean)
 void Agent_2_set_IsRunning_m21476_gshared (Agent_2_t5406 * __this, bool ___value, MethodInfo* method);
#define Agent_2_set_IsRunning_m21476(__this, ___value, method) (void)Agent_2_set_IsRunning_m21476_gshared((Agent_2_t5406 *)__this, (bool)___value, method)
// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::CancellationRequested()
 bool Agent_2_CancellationRequested_m21477_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_CancellationRequested_m21477(__this, method) (bool)Agent_2_CancellationRequested_m21477_gshared((Agent_2_t5406 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Cancel()
 void Agent_2_Cancel_m21478_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_Cancel_m21478(__this, method) (void)Agent_2_Cancel_m21478_gshared((Agent_2_t5406 *)__this, method)
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::CancelAsync()
 Async_1_t160 * Agent_2_CancelAsync_m21479_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_CancelAsync_m21479(__this, method) (Async_1_t160 *)Agent_2_CancelAsync_m21479_gshared((Agent_2_t5406 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Post(TM)
 Unit_t150 * Agent_2_Post_m21480_gshared (Agent_2_t5406 * __this, Object_t * ___msg, MethodInfo* method);
#define Agent_2_Post_m21480(__this, ___msg, method) (Unit_t150 *)Agent_2_Post_m21480_gshared((Agent_2_t5406 *)__this, (Object_t *)___msg, method)
// TR Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::PostAndReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
 Object_t * Agent_2_PostAndReply_m21481_gshared (Agent_2_t5406 * __this, Func_2_t5407 * ___f, MethodInfo* method);
#define Agent_2_PostAndReply_m21481(__this, ___f, method) (Object_t *)Agent_2_PostAndReply_m21481_gshared((Agent_2_t5406 *)__this, (Func_2_t5407 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TR> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::PostAndAsyncReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
 Async_1_t162 * Agent_2_PostAndAsyncReply_m21482_gshared (Agent_2_t5406 * __this, Func_2_t5407 * ___f, MethodInfo* method);
#define Agent_2_PostAndAsyncReply_m21482(__this, ___f, method) (Async_1_t162 *)Agent_2_PostAndAsyncReply_m21482_gshared((Agent_2_t5406 *)__this, (Func_2_t5407 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TM> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Receive()
 Async_1_t162 * Agent_2_Receive_m21483_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_Receive_m21483(__this, method) (Async_1_t162 *)Agent_2_Receive_m21483_gshared((Agent_2_t5406 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::.ctor()
 void Agent_2__ctor_m21484_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2__ctor_m21484(__this, method) (void)Agent_2__ctor_m21484_gshared((Agent_2_t5406 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::<CancelAsync>b__6()
 Unit_t150 * Agent_2_U3CCancelAsyncU3Eb__6_m21485_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_U3CCancelAsyncU3Eb__6_m21485(__this, method) (Unit_t150 *)Agent_2_U3CCancelAsyncU3Eb__6_m21485_gshared((Agent_2_t5406 *)__this, method)
// TM Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::<Receive>b__d()
 Object_t * Agent_2_U3CReceiveU3Eb__d_m21486_gshared (Agent_2_t5406 * __this, MethodInfo* method);
#define Agent_2_U3CReceiveU3Eb__d_m21486(__this, method) (Object_t *)Agent_2_U3CReceiveU3Eb__d_m21486_gshared((Agent_2_t5406 *)__this, method)
