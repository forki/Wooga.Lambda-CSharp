#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Object>
struct Func_1_t5411;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_1__ctor_m21510_gshared (Func_1_t5411 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define Func_1__ctor_m21510(__this, ___object, ___method, method) (void)Func_1__ctor_m21510_gshared((Func_1_t5411 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TResult System.Func`1<System.Object>::Invoke()
 Object_t * Func_1_Invoke_m21512_gshared (Func_1_t5411 * __this, MethodInfo* method);
#define Func_1_Invoke_m21512(__this, method) (Object_t *)Func_1_Invoke_m21512_gshared((Func_1_t5411 *)__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Func_1_BeginInvoke_m21514_gshared (Func_1_t5411 * __this, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_1_BeginInvoke_m21514(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m21514_gshared((Func_1_t5411 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_1_EndInvoke_m21516_gshared (Func_1_t5411 * __this, Object_t * ___result, MethodInfo* method);
#define Func_1_EndInvoke_m21516(__this, ___result, method) (Object_t *)Func_1_EndInvoke_m21516_gshared((Func_1_t5411 *)__this, (Object_t *)___result, method)
