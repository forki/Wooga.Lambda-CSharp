#pragma once

// Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>
struct PatterMatch_2_t4221;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>
struct Either_2_t4206;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void PatterMatch_2__ctor_m20524_gshared (PatterMatch_2_t4221 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method);
#define PatterMatch_2__ctor_m20524(__this, ___object, ___method, method) (void)PatterMatch_2__ctor_m20524_gshared((PatterMatch_2_t4221 *)__this, (Object_t *)___object, (IntPtr_t37)___method, method)
// Wooga.Lambda.Control.Monad.Either`2<TResult,TValue> Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::Invoke()
 Either_2_t4206 * PatterMatch_2_Invoke_m20525_gshared (PatterMatch_2_t4221 * __this, MethodInfo* method);
#define PatterMatch_2_Invoke_m20525(__this, method) (Either_2_t4206 *)PatterMatch_2_Invoke_m20525_gshared((PatterMatch_2_t4221 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * PatterMatch_2_BeginInvoke_m20526_gshared (PatterMatch_2_t4221 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method);
#define PatterMatch_2_BeginInvoke_m20526(__this, ___callback, ___object, method) (Object_t *)PatterMatch_2_BeginInvoke_m20526_gshared((PatterMatch_2_t4221 *)__this, (AsyncCallback_t189 *)___callback, (Object_t *)___object, method)
// Wooga.Lambda.Control.Monad.Either`2<TResult,TValue> Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Either_2_t4206 * PatterMatch_2_EndInvoke_m20527_gshared (PatterMatch_2_t4221 * __this, Object_t * ___result, MethodInfo* method);
#define PatterMatch_2_EndInvoke_m20527(__this, ___result, method) (Either_2_t4206 *)PatterMatch_2_EndInvoke_m20527_gshared((PatterMatch_2_t4221 *)__this, (Object_t *)___result, method)
