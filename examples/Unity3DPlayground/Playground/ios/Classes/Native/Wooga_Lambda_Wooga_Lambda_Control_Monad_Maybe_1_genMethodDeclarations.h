#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Monad.Maybe`1<System.Object>
struct Maybe_1_t5474;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Monad.Maybe/Result`1<System.Object>
struct Result_1_t5473;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.Monad.Maybe`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Maybe_1__ctor_m21715_gshared (Maybe_1_t5474 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define Maybe_1__ctor_m21715(__this, ___object, ___method, method) (void)Maybe_1__ctor_m21715_gshared((Maybe_1_t5474 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// Wooga.Lambda.Control.Monad.Maybe/Result`1<T> Wooga.Lambda.Control.Monad.Maybe`1<System.Object>::Invoke()
 Result_1_t5473 * Maybe_1_Invoke_m21716_gshared (Maybe_1_t5474 * __this, MethodInfo* method);
#define Maybe_1_Invoke_m21716(__this, method) (Result_1_t5473 *)Maybe_1_Invoke_m21716_gshared((Maybe_1_t5474 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.Monad.Maybe`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Maybe_1_BeginInvoke_m21717_gshared (Maybe_1_t5474 * __this, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define Maybe_1_BeginInvoke_m21717(__this, ___callback, ___object, method) (Object_t *)Maybe_1_BeginInvoke_m21717_gshared((Maybe_1_t5474 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// Wooga.Lambda.Control.Monad.Maybe/Result`1<T> Wooga.Lambda.Control.Monad.Maybe`1<System.Object>::EndInvoke(System.IAsyncResult)
 Result_1_t5473 * Maybe_1_EndInvoke_m21718_gshared (Maybe_1_t5474 * __this, Object_t * ___result, MethodInfo* method);
#define Maybe_1_EndInvoke_m21718(__this, ___result, method) (Result_1_t5473 *)Maybe_1_EndInvoke_m21718_gshared((Maybe_1_t5474 *)__this, (Object_t *)___result, method)
