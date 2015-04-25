#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t3634;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t447;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m11361 (AddEventAdapter_t3634 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m11362 (AddEventAdapter_t3634 * __this, Object_t * ____this, Delegate_t447 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m11363 (AddEventAdapter_t3634 * __this, Object_t * ____this, Delegate_t447 * ___dele, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m11364 (AddEventAdapter_t3634 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
