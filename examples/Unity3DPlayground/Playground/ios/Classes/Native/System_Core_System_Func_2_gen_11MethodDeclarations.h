#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>,System.Threading.WaitHandle>
struct Func_2_t5429;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>
#include "Wooga_Lambda_Wooga_Lambda_Data_Tuple_2_gen_1.h"

// System.Void System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>,System.Threading.WaitHandle>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m21583 (Func_2_t5429 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>,System.Threading.WaitHandle>::Invoke(T)
 WaitHandle_t527 * Func_2_Invoke_m21584 (Func_2_t5429 * __this, Tuple_2_t5432  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>,System.Threading.WaitHandle>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m21585 (Func_2_t5429 * __this, Tuple_2_t5432  ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>,System.Threading.WaitHandle>::EndInvoke(System.IAsyncResult)
 WaitHandle_t527 * Func_2_EndInvoke_m21586 (Func_2_t5429 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
