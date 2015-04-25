#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>
struct PatterMatch_2_t5464;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>
struct Either_2_t5451;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void PatterMatch_2__ctor_m21687_gshared (PatterMatch_2_t5464 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define PatterMatch_2__ctor_m21687(__this, ___object, ___method, method) (void)PatterMatch_2__ctor_m21687_gshared((PatterMatch_2_t5464 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// Wooga.Lambda.Control.Monad.Either`2<TResult,TValue> Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::Invoke()
 Either_2_t5451 * PatterMatch_2_Invoke_m21688_gshared (PatterMatch_2_t5464 * __this, MethodInfo* method);
#define PatterMatch_2_Invoke_m21688(__this, method) (Either_2_t5451 *)PatterMatch_2_Invoke_m21688_gshared((PatterMatch_2_t5464 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * PatterMatch_2_BeginInvoke_m21689_gshared (PatterMatch_2_t5464 * __this, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define PatterMatch_2_BeginInvoke_m21689(__this, ___callback, ___object, method) (Object_t *)PatterMatch_2_BeginInvoke_m21689_gshared((PatterMatch_2_t5464 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// Wooga.Lambda.Control.Monad.Either`2<TResult,TValue> Wooga.Lambda.Control.PatterMatch`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Either_2_t5451 * PatterMatch_2_EndInvoke_m21690_gshared (PatterMatch_2_t5464 * __this, Object_t * ___result, MethodInfo* method);
#define PatterMatch_2_EndInvoke_m21690(__this, ___result, method) (Either_2_t5451 *)PatterMatch_2_EndInvoke_m21690_gshared((PatterMatch_2_t5464 *)__this, (Object_t *)___result, method)
