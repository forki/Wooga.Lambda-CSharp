#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>
struct Transform_1_t5154;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m19846 (Transform_1_t5154 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::Invoke(TKey,TValue)
 Graphic_t273 * Transform_1_Invoke_m19847 (Transform_1_t5154 * __this, Graphic_t273 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m19848 (Transform_1_t5154 * __this, Graphic_t273 * ___key, int32_t ___value, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::EndInvoke(System.IAsyncResult)
 Graphic_t273 * Transform_1_EndInvoke_m19849 (Transform_1_t5154 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
