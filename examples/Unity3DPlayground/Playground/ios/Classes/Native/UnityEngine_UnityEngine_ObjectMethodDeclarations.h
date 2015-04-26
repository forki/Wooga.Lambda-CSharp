#pragma once

// UnityEngine.Object
struct Object_t36;
struct Object_t36_marshaled;
// System.String
struct String_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t104;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
 void Object__ctor_m3646 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
 Object_t36 * Object_Internal_CloneSingle_m3647 (Object_t * __this/* static, unused */, Object_t36 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t36 * Object_Internal_InstantiateSingle_m3648 (Object_t * __this/* static, unused */, Object_t36 * ___data, Vector3_t10  ___pos, Quaternion_t74  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
 Object_t36 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m3649 (Object_t * __this/* static, unused */, Object_t36 * ___data, Vector3_t10 * ___pos, Quaternion_t74 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m548 (Object_t * __this/* static, unused */, Object_t36 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m531 (Object_t * __this/* static, unused */, Object_t36 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m3650 (Object_t * __this/* static, unused */, Object_t36 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m2231 (Object_t * __this/* static, unused */, Object_t36 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
 ObjectU5BU5D_t104* Object_FindObjectsOfType_m286 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m436 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m2314 (Object_t36 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m2192 (Object_t36 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
 void Object_DestroyObject_m3651 (Object_t * __this/* static, unused */, Object_t36 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
 void Object_DestroyObject_m421 (Object_t * __this/* static, unused */, Object_t36 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m295 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m292 (Object_t36 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m294 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m3652 (Object_t * __this/* static, unused */, Object_t36 * ___lhs, Object_t36 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
 bool Object_IsNativeObjectAlive_m3653 (Object_t * __this/* static, unused */, Object_t36 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m3654 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
 IntPtr_t37 Object_GetCachedPtr_m3655 (Object_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t36 * Object_Instantiate_m420 (Object_t * __this/* static, unused */, Object_t36 * ___original, Vector3_t10  ___position, Quaternion_t74  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
 void Object_CheckNullArgument_m3656 (Object_t * __this/* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m468 (Object_t * __this/* static, unused */, Object_t36 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m289 (Object_t * __this/* static, unused */, Object_t36 * ___x, Object_t36 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m288 (Object_t * __this/* static, unused */, Object_t36 * ___x, Object_t36 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t36_marshal(const Object_t36& unmarshaled, Object_t36_marshaled& marshaled);
void Object_t36_marshal_back(const Object_t36_marshaled& marshaled, Object_t36& unmarshaled);
void Object_t36_marshal_cleanup(Object_t36_marshaled& marshaled);
