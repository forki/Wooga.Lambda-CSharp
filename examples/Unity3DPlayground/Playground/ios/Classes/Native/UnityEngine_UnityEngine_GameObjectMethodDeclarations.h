#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t32;
// UnityEngine.Transform
struct Transform_t43;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t118;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
 void GameObject__ctor_m446 (GameObject_t32 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
 Component_t118 * GameObject_GetComponent_m5774 (GameObject_t32 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
 void GameObject_GetComponentFastPath_m5775 (GameObject_t32 * __this, Type_t * ___type, IntPtr_t31 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
 Array_t * GameObject_GetComponentsInternal_m5776 (GameObject_t32 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
 Transform_t43 * GameObject_get_transform_m385 (GameObject_t32 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
 int32_t GameObject_get_layer_m2189 (GameObject_t32 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
 void GameObject_set_layer_m2190 (GameObject_t32 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
 void GameObject_SetActive_m343 (GameObject_t32 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
 bool GameObject_get_activeInHierarchy_m1843 (GameObject_t32 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m5777 (GameObject_t32 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void GameObject_BroadcastMessage_m5778 (GameObject_t32 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
 void GameObject_BroadcastMessage_m384 (GameObject_t32 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
 Component_t118 * GameObject_Internal_AddComponentWithType_m5779 (GameObject_t32 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
 Component_t118 * GameObject_AddComponent_m5780 (GameObject_t32 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
 void GameObject_Internal_CreateGameObject_m5781 (Object_t * __this/* static, unused */, GameObject_t32 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
