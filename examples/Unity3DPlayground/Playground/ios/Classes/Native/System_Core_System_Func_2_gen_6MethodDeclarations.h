#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>,System.Int32>
struct Func_2_t4753;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>
#include "Wooga_Lambda_Wooga_Lambda_Data_Tuple_2_gen.h"

// System.Void System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m16636 (Func_2_t4753 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>,System.Int32>::Invoke(T)
 int32_t Func_2_Invoke_m16637 (Func_2_t4753 * __this, Tuple_2_t4755  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16638 (Func_2_t4753 * __this, Tuple_2_t4755  ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Int32>>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Func_2_EndInvoke_m16639 (Func_2_t4753 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
