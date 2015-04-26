#pragma once

// System.EventHandler
struct EventHandler_t1653;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1675;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
 void EventHandler__ctor_m6423 (EventHandler_t1653 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
 void EventHandler_Invoke_m6373 (EventHandler_t1653 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_BeginInvoke_m11995 (EventHandler_t1653 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
 void EventHandler_EndInvoke_m11996 (EventHandler_t1653 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
