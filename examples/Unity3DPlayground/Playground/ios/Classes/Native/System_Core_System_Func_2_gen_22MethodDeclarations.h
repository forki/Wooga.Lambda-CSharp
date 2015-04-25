#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t5857;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
#define Func_2__ctor_m25091(__this, ___object, ___method, method) (void)Func_2__ctor_m16592_gshared((Func_2_t4748 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::Invoke(T)
#define Func_2_Invoke_m25092(__this, ___arg1, method) (Object_t*)Func_2_Invoke_m16594_gshared((Func_2_t4748 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m25093(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m16596_gshared((Func_2_t4748 *)__this, (Object_t *)___arg1, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m25094(__this, ___result, method) (Object_t*)Func_2_EndInvoke_m16598_gshared((Func_2_t4748 *)__this, (Object_t *)___result, method)
