#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t490;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t267;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
 void ReapplyDrivenProperties__ctor_m2396 (ReapplyDrivenProperties_t490 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
 void ReapplyDrivenProperties_Invoke_m5637 (ReapplyDrivenProperties_t490 * __this, RectTransform_t267 * ___driven, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
 Object_t * ReapplyDrivenProperties_BeginInvoke_m5638 (ReapplyDrivenProperties_t490 * __this, RectTransform_t267 * ___driven, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
 void ReapplyDrivenProperties_EndInvoke_m5639 (ReapplyDrivenProperties_t490 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
