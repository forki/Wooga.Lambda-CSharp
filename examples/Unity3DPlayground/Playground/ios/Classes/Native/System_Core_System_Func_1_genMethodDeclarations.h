#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Wooga.Lambda.Data.Unit>
struct Func_1_t5410;
// System.Object
struct Object_t;
// Wooga.Lambda.Data.Unit
struct Unit_t150;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Wooga.Lambda.Data.Unit>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_0MethodDeclarations.h"
#define Func_1__ctor_m21509(__this, ___object, ___method, method) (void)Func_1__ctor_m21510_gshared((Func_1_t5411 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TResult System.Func`1<Wooga.Lambda.Data.Unit>::Invoke()
#define Func_1_Invoke_m21511(__this, method) (Unit_t150 *)Func_1_Invoke_m21512_gshared((Func_1_t5411 *)__this, method)
// System.IAsyncResult System.Func`1<Wooga.Lambda.Data.Unit>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m21513(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m21514_gshared((Func_1_t5411 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<Wooga.Lambda.Data.Unit>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m21515(__this, ___result, method) (Unit_t150 *)Func_1_EndInvoke_m21516_gshared((Func_1_t5411 *)__this, (Object_t *)___result, method)
