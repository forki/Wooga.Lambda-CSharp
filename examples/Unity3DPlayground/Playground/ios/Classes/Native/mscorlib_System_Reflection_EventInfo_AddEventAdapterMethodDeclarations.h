#pragma once

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t2268;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t452;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m9823 (AddEventAdapter_t2268 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m9824 (AddEventAdapter_t2268 * __this, Object_t * ____this, Delegate_t452 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m9825 (AddEventAdapter_t2268 * __this, Object_t * ____this, Delegate_t452 * ___dele, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m9826 (AddEventAdapter_t2268 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
