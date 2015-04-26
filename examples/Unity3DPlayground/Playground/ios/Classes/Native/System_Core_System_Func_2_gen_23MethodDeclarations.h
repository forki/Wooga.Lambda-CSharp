#pragma once

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t490;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m19879 (Func_2_t490 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m19880 (Func_2_t490 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m19881 (Func_2_t490 * __this, Object_t * ___arg1, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m19882 (Func_2_t490 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
