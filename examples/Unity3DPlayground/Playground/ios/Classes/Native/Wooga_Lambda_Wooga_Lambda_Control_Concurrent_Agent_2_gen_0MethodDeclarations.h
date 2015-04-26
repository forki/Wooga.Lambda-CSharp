#pragma once

// Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>
struct Agent_2_t1091;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>
struct Async_1_t29;
// Wooga.Lambda.Data.Unit
struct Unit_t33;
// System.Object
struct Object_t;
// System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<System.Object>,System.Object>
struct Func_2_t4187;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Object>
struct Async_1_t134;

// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::get_IsRunning()
 bool Agent_2_get_IsRunning_m20392_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_get_IsRunning_m20392(__this, method) (bool)Agent_2_get_IsRunning_m20392_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::set_IsRunning(System.Boolean)
 void Agent_2_set_IsRunning_m20393_gshared (Agent_2_t1091 * __this, bool ___value, MethodInfo* method);
#define Agent_2_set_IsRunning_m20393(__this, ___value, method) (void)Agent_2_set_IsRunning_m20393_gshared((Agent_2_t1091 *)__this, (bool)___value, method)
// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::CancellationRequested()
 bool Agent_2_CancellationRequested_m20394_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_CancellationRequested_m20394(__this, method) (bool)Agent_2_CancellationRequested_m20394_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Cancel()
 void Agent_2_Cancel_m20395_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_Cancel_m20395(__this, method) (void)Agent_2_Cancel_m20395_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::CancelAsync()
 Async_1_t29 * Agent_2_CancelAsync_m20396_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_CancelAsync_m20396(__this, method) (Async_1_t29 *)Agent_2_CancelAsync_m20396_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Post(TM)
 Unit_t33 * Agent_2_Post_m20397_gshared (Agent_2_t1091 * __this, Object_t * ___msg, MethodInfo* method);
#define Agent_2_Post_m20397(__this, ___msg, method) (Unit_t33 *)Agent_2_Post_m20397_gshared((Agent_2_t1091 *)__this, (Object_t *)___msg, method)
// TR Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::PostAndReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
 Object_t * Agent_2_PostAndReply_m20398_gshared (Agent_2_t1091 * __this, Func_2_t4187 * ___f, MethodInfo* method);
#define Agent_2_PostAndReply_m20398(__this, ___f, method) (Object_t *)Agent_2_PostAndReply_m20398_gshared((Agent_2_t1091 *)__this, (Func_2_t4187 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TR> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::PostAndAsyncReply(System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<TR>,TM>)
 Async_1_t134 * Agent_2_PostAndAsyncReply_m20399_gshared (Agent_2_t1091 * __this, Func_2_t4187 * ___f, MethodInfo* method);
#define Agent_2_PostAndAsyncReply_m20399(__this, ___f, method) (Async_1_t134 *)Agent_2_PostAndAsyncReply_m20399_gshared((Agent_2_t1091 *)__this, (Func_2_t4187 *)___f, method)
// Wooga.Lambda.Control.Concurrent.Async`1<TM> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::Receive()
 Async_1_t134 * Agent_2_Receive_m20400_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_Receive_m20400(__this, method) (Async_1_t134 *)Agent_2_Receive_m20400_gshared((Agent_2_t1091 *)__this, method)
// System.Void Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::.ctor()
 void Agent_2__ctor_m20401_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2__ctor_m20401(__this, method) (void)Agent_2__ctor_m20401_gshared((Agent_2_t1091 *)__this, method)
// Wooga.Lambda.Data.Unit Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::<CancelAsync>b__6()
 Unit_t33 * Agent_2_U3CCancelAsyncU3Eb__6_m20402_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_U3CCancelAsyncU3Eb__6_m20402(__this, method) (Unit_t33 *)Agent_2_U3CCancelAsyncU3Eb__6_m20402_gshared((Agent_2_t1091 *)__this, method)
// TM Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::<Receive>b__d()
 Object_t * Agent_2_U3CReceiveU3Eb__d_m20403_gshared (Agent_2_t1091 * __this, MethodInfo* method);
#define Agent_2_U3CReceiveU3Eb__d_m20403(__this, method) (Object_t *)Agent_2_U3CReceiveU3Eb__d_m20403_gshared((Agent_2_t1091 *)__this, method)
