#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t3904;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.ResolveEventArgs
struct ResolveEventArgs_t3963;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m13565 (ResolveEventHandler_t3904 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t1075 * ResolveEventHandler_Invoke_m13566 (ResolveEventHandler_t3904 * __this, Object_t * ___sender, ResolveEventArgs_t3963 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m13567 (ResolveEventHandler_t3904 * __this, Object_t * ___sender, ResolveEventArgs_t3963 * ___args, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t1075 * ResolveEventHandler_EndInvoke_m13568 (ResolveEventHandler_t3904 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
