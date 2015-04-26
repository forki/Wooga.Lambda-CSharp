#pragma once

// System.ResolveEventHandler
struct ResolveEventHandler_t2533;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1874;
// System.ResolveEventArgs
struct ResolveEventArgs_t2593;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m11997 (ResolveEventHandler_t2533 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t1874 * ResolveEventHandler_Invoke_m11998 (ResolveEventHandler_t2533 * __this, Object_t * ___sender, ResolveEventArgs_t2593 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m11999 (ResolveEventHandler_t2533 * __this, Object_t * ___sender, ResolveEventArgs_t2593 * ___args, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t1874 * ResolveEventHandler_EndInvoke_m12000 (ResolveEventHandler_t2533 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
