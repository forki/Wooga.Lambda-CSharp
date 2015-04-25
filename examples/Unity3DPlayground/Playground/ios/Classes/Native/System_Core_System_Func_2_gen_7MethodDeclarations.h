#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
struct Func_2_t4764;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>
struct Async_1_t160;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m16668 (Func_2_t4764 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::Invoke(T)
 Async_1_t160 * Func_2_Invoke_m16669 (Func_2_t4764 * __this, int32_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Int32,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16670 (Func_2_t4764 * __this, int32_t ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Int32,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::EndInvoke(System.IAsyncResult)
 Async_1_t160 * Func_2_EndInvoke_m16671 (Func_2_t4764 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
