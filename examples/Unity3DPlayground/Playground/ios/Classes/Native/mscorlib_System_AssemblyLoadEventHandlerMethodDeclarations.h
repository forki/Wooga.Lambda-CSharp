#pragma once

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t2532;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2540;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
 void AssemblyLoadEventHandler__ctor_m11991 (AssemblyLoadEventHandler_t2532 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
 void AssemblyLoadEventHandler_Invoke_m11992 (AssemblyLoadEventHandler_t2532 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2540 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
 Object_t * AssemblyLoadEventHandler_BeginInvoke_m11993 (AssemblyLoadEventHandler_t2532 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2540 * ___args, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
 void AssemblyLoadEventHandler_EndInvoke_m11994 (AssemblyLoadEventHandler_t2532 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
