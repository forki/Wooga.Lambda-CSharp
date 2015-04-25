#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t4556;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m15278_gshared (Comparison_1_t4556 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define Comparison_1__ctor_m15278(__this, ___object, ___method, method) (void)Comparison_1__ctor_m15278_gshared((Comparison_1_t4556 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m15279_gshared (Comparison_1_t4556 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15279(__this, ___x, ___y, method) (int32_t)Comparison_1_Invoke_m15279_gshared((Comparison_1_t4556 *)__this, (Object_t *)___x, (Object_t *)___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m15280_gshared (Comparison_1_t4556 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15280(__this, ___x, ___y, ___callback, ___object, method) (Object_t *)Comparison_1_BeginInvoke_m15280_gshared((Comparison_1_t4556 *)__this, (Object_t *)___x, (Object_t *)___y, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m15281_gshared (Comparison_1_t4556 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15281(__this, ___result, method) (int32_t)Comparison_1_EndInvoke_m15281_gshared((Comparison_1_t4556 *)__this, (Object_t *)___result, method)
