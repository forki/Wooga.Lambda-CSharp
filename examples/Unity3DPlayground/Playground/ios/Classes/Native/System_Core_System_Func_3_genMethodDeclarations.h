#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>,System.Object,System.Object>
struct Func_3_t5418;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>
struct Agent_2_t5406;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_0MethodDeclarations.h"
#define Func_3__ctor_m21536(__this, ___object, ___method, method) (void)Func_3__ctor_m21537_gshared((Func_3_t5419 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TResult System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>,System.Object,System.Object>::Invoke(T1,T2)
#define Func_3_Invoke_m21538(__this, ___arg1, ___arg2, method) (Object_t *)Func_3_Invoke_m21539_gshared((Func_3_t5419 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, method)
// System.IAsyncResult System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m21540(__this, ___arg1, ___arg2, ___callback, ___object, method) (Object_t *)Func_3_BeginInvoke_m21541_gshared((Func_3_t5419 *)__this, (Object_t *)___arg1, (Object_t *)___arg2, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TResult System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m21542(__this, ___result, method) (Object_t *)Func_3_EndInvoke_m21543_gshared((Func_3_t5419 *)__this, (Object_t *)___result, method)
