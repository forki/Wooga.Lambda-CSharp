#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>>
struct Action_1_t5428;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>
#include "Wooga_Lambda_Wooga_Lambda_Data_Tuple_2_gen_1.h"

// System.Void System.Action`1<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m21579 (Action_1_t5428 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>>::Invoke(T)
 void Action_1_Invoke_m21580 (Action_1_t5428 * __this, Tuple_2_t5432  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m21581 (Action_1_t5428 * __this, Tuple_2_t5432  ___obj, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Wooga.Lambda.Data.Tuple`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>>>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m21582 (Action_1_t5428 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
