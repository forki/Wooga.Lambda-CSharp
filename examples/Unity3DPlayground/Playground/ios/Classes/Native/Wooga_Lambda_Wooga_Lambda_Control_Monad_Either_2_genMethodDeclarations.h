#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Monad.Either`2<System.Exception,System.Object>
struct Either_2_t5450;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Monad.Either/Result`2<System.Exception,System.Object>
struct Result_2_t5446;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.Monad.Either`2<System.Exception,System.Object>::.ctor(System.Object,System.IntPtr)
// Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>
#include "Wooga_Lambda_Wooga_Lambda_Control_Monad_Either_2_gen_0MethodDeclarations.h"
#define Either_2__ctor_m21639(__this, ___object, ___method, method) (void)Either_2__ctor_m21640_gshared((Either_2_t5451 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// Wooga.Lambda.Control.Monad.Either/Result`2<TLeft,TRight> Wooga.Lambda.Control.Monad.Either`2<System.Exception,System.Object>::Invoke()
#define Either_2_Invoke_m21641(__this, method) (Result_2_t5446 *)Either_2_Invoke_m21642_gshared((Either_2_t5451 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.Monad.Either`2<System.Exception,System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
#define Either_2_BeginInvoke_m21643(__this, ___callback, ___object, method) (Object_t *)Either_2_BeginInvoke_m21644_gshared((Either_2_t5451 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// Wooga.Lambda.Control.Monad.Either/Result`2<TLeft,TRight> Wooga.Lambda.Control.Monad.Either`2<System.Exception,System.Object>::EndInvoke(System.IAsyncResult)
#define Either_2_EndInvoke_m21645(__this, ___result, method) (Result_2_t5446 *)Either_2_EndInvoke_m21646_gshared((Either_2_t5451 *)__this, (Object_t *)___result, method)
