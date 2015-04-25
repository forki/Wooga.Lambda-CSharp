#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>
struct Transform_1_t6234;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t315;
struct Event_t315_marshaled;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m27536 (Transform_1_t6234 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::Invoke(TKey,TValue)
 Event_t315 * Transform_1_Invoke_m27537 (Transform_1_t6234 * __this, Event_t315 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m27538 (Transform_1_t6234 * __this, Event_t315 * ___key, int32_t ___value, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::EndInvoke(System.IAsyncResult)
 Event_t315 * Transform_1_EndInvoke_m27539 (Transform_1_t6234 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
