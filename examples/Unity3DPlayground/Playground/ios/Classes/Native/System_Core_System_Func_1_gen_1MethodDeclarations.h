#pragma once

// System.Func`1<System.Object>
struct Func_1_t135;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_1__ctor_m13703_gshared (Func_1_t135 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method);
#define Func_1__ctor_m13703(__this, ___object, ___method, method) (void)Func_1__ctor_m13703_gshared((Func_1_t135 *)__this, (Object_t *)___object, (IntPtr_t37)___method, method)
// TResult System.Func`1<System.Object>::Invoke()
 Object_t * Func_1_Invoke_m13705_gshared (Func_1_t135 * __this, MethodInfo* method);
#define Func_1_Invoke_m13705(__this, method) (Object_t *)Func_1_Invoke_m13705_gshared((Func_1_t135 *)__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Func_1_BeginInvoke_m13707_gshared (Func_1_t135 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_1_BeginInvoke_m13707(__this, ___callback, ___object, method) (Object_t *)Func_1_BeginInvoke_m13707_gshared((Func_1_t135 *)__this, (AsyncCallback_t189 *)___callback, (Object_t *)___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_1_EndInvoke_m13709_gshared (Func_1_t135 * __this, Object_t * ___result, MethodInfo* method);
#define Func_1_EndInvoke_m13709(__this, ___result, method) (Object_t *)Func_1_EndInvoke_m13709_gshared((Func_1_t135 *)__this, (Object_t *)___result, method)
