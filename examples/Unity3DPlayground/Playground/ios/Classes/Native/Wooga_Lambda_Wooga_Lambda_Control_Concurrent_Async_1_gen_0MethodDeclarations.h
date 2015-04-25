#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>
struct Async_1_t160;
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

// System.Void Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>::.ctor(System.Object,System.IntPtr)
// Wooga.Lambda.Control.Concurrent.Async`1<System.Object>
#include "Wooga_Lambda_Wooga_Lambda_Control_Concurrent_Async_1_gen_2MethodDeclarations.h"
#define Async_1__ctor_m2533(__this, ___object, ___method, method) (void)Async_1__ctor_m16585_gshared((Async_1_t162 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>::Invoke()
#define Async_1_Invoke_m16586(__this, method) (Unit_t150 *)Async_1_Invoke_m16587_gshared((Async_1_t162 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>::BeginInvoke(System.AsyncCallback,System.Object)
#define Async_1_BeginInvoke_m16588(__this, ___callback, ___object, method) (Object_t *)Async_1_BeginInvoke_m16589_gshared((Async_1_t162 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>::EndInvoke(System.IAsyncResult)
#define Async_1_EndInvoke_m16590(__this, ___result, method) (Unit_t150 *)Async_1_EndInvoke_m16591_gshared((Async_1_t162 *)__this, (Object_t *)___result, method)
