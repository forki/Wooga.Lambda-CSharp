#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// System.String
struct String_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t98;
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
 void Object__ctor_m5758 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
 Object_t30 * Object_Internal_CloneSingle_m5759 (Object_t * __this/* static, unused */, Object_t30 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t30 * Object_Internal_InstantiateSingle_m5760 (Object_t * __this/* static, unused */, Object_t30 * ___data, Vector3_t10  ___pos, Quaternion_t68  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
 Object_t30 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m5761 (Object_t * __this/* static, unused */, Object_t30 * ___data, Vector3_t10 * ___pos, Quaternion_t68 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m516 (Object_t * __this/* static, unused */, Object_t30 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m499 (Object_t * __this/* static, unused */, Object_t30 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m5762 (Object_t * __this/* static, unused */, Object_t30 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m2225 (Object_t * __this/* static, unused */, Object_t30 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
 ObjectU5BU5D_t98* Object_FindObjectsOfType_m281 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m404 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m2308 (Object_t30 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m2186 (Object_t30 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
 void Object_DestroyObject_m5763 (Object_t * __this/* static, unused */, Object_t30 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
 void Object_DestroyObject_m388 (Object_t * __this/* static, unused */, Object_t30 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m290 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m287 (Object_t30 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m289 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m5764 (Object_t * __this/* static, unused */, Object_t30 * ___lhs, Object_t30 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
 bool Object_IsNativeObjectAlive_m5765 (Object_t * __this/* static, unused */, Object_t30 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m5766 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
 IntPtr_t31 Object_GetCachedPtr_m5767 (Object_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t30 * Object_Instantiate_m387 (Object_t * __this/* static, unused */, Object_t30 * ___original, Vector3_t10  ___position, Quaternion_t68  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
 void Object_CheckNullArgument_m5768 (Object_t * __this/* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m436 (Object_t * __this/* static, unused */, Object_t30 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m284 (Object_t * __this/* static, unused */, Object_t30 * ___x, Object_t30 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m283 (Object_t * __this/* static, unused */, Object_t30 * ___x, Object_t30 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t30_marshal(const Object_t30& unmarshaled, Object_t30_marshaled& marshaled);
void Object_t30_marshal_back(const Object_t30_marshaled& marshaled, Object_t30& unmarshaled);
void Object_t30_marshal_cleanup(Object_t30_marshaled& marshaled);
