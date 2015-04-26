#pragma once

// System.AppDomainInitializer
struct AppDomainInitializer_t2535;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t150;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
 void AppDomainInitializer__ctor_m11987 (AppDomainInitializer_t2535 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
 void AppDomainInitializer_Invoke_m11988 (AppDomainInitializer_t2535 * __this, StringU5BU5D_t150* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
 Object_t * AppDomainInitializer_BeginInvoke_m11989 (AppDomainInitializer_t2535 * __this, StringU5BU5D_t150* ___args, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
 void AppDomainInitializer_EndInvoke_m11990 (AppDomainInitializer_t2535 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
