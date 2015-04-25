#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>
struct Transform_1_t4457;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m14814 (Transform_1_t4457 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1199  Transform_1_Invoke_m14815 (Transform_1_t4457 * __this, String_t* ___key, VirtualAxis_t2 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m14816 (Transform_1_t4457 * __this, String_t* ___key, VirtualAxis_t2 * ___value, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1199  Transform_1_EndInvoke_m14817 (Transform_1_t4457 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
