#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t6408;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Converter_2__ctor_m28705_gshared (Converter_2_t6408 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define Converter_2__ctor_m28705(__this, ___object, ___method, method) (void)Converter_2__ctor_m28705_gshared((Converter_2_t6408 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
 Object_t * Converter_2_Invoke_m28706_gshared (Converter_2_t6408 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m28706(__this, ___input, method) (Object_t *)Converter_2_Invoke_m28706_gshared((Converter_2_t6408 *)__this, (Object_t *)___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
 Object_t * Converter_2_BeginInvoke_m28707_gshared (Converter_2_t6408 * __this, Object_t * ___input, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m28707(__this, ___input, ___callback, ___object, method) (Object_t *)Converter_2_BeginInvoke_m28707_gshared((Converter_2_t6408 *)__this, (Object_t *)___input, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Converter_2_EndInvoke_m28708_gshared (Converter_2_t6408 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m28708(__this, ___result, method) (Object_t *)Converter_2_EndInvoke_m28708_gshared((Converter_2_t6408 *)__this, (Object_t *)___result, method)
