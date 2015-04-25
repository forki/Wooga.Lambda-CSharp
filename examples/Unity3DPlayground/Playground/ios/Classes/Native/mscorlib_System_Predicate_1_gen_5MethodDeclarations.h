#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.String>
struct Predicate_1_t4552;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m15355(__this, ___object, ___method, method) (void)Predicate_1__ctor_m15232_gshared((Predicate_1_t4554 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Boolean System.Predicate`1<System.String>::Invoke(T)
#define Predicate_1_Invoke_m15356(__this, ___obj, method) (bool)Predicate_1_Invoke_m15233_gshared((Predicate_1_t4554 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m15357(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m15234_gshared((Predicate_1_t4554 *)__this, (Object_t *)___obj, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.String>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m15358(__this, ___result, method) (bool)Predicate_1_EndInvoke_m15235_gshared((Predicate_1_t4554 *)__this, (Object_t *)___result, method)
