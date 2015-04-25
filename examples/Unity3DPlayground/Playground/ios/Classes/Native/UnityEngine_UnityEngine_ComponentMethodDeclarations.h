#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t118;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.GameObject
struct GameObject_t32;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t378;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
 void Component__ctor_m5769 (Component_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t43 * Component_get_transform_m331 (Component_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t32 * Component_get_gameObject_m342 (Component_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t118 * Component_GetComponent_m2386 (Component_t118 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
 void Component_GetComponentFastPath_m5770 (Component_t118 * __this, Type_t * ___type, IntPtr_t31 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
 void Component_GetComponentsForListInternal_m5771 (Component_t118 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m1981 (Component_t118 * __this, Type_t * ___type, List_1_t378 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m5772 (Component_t118 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
 void Component_SendMessage_m486 (Component_t118 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m5773 (Component_t118 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m498 (Component_t118 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
