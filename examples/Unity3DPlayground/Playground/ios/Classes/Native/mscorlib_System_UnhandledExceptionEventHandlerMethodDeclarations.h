#pragma once

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2534;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2603;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
 void UnhandledExceptionEventHandler__ctor_m12001 (UnhandledExceptionEventHandler_t2534 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
 void UnhandledExceptionEventHandler_Invoke_m12002 (UnhandledExceptionEventHandler_t2534 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2603 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
 Object_t * UnhandledExceptionEventHandler_BeginInvoke_m12003 (UnhandledExceptionEventHandler_t2534 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2603 * ___e, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
 void UnhandledExceptionEventHandler_EndInvoke_m12004 (UnhandledExceptionEventHandler_t2534 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
