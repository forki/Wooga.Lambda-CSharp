#pragma once

// System.Delegate
struct Delegate_t452;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Delegate[]
struct DelegateU5BU5D_t2035;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
 MethodInfo_t1265 * Delegate_get_Method_m4172 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
 Object_t * Delegate_get_Target_m4174 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_internal_m8150 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t1265 * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
 void Delegate_SetMulticastInvoke_m8151 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
 bool Delegate_arg_type_match_m8152 (Object_t * __this/* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
 bool Delegate_return_type_match_m8153 (Object_t * __this/* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_m8154 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t1265 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
 Delegate_t452 * Delegate_CreateDelegate_m4178 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t1265 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_m8155 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo_t1265 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
 Delegate_t452 * Delegate_CreateDelegate_m8156 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
 MethodInfo_t1265 * Delegate_GetCandidateMethod_m8157 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_m8158 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
 Delegate_t452 * Delegate_CreateDelegate_m8159 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_m8160 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
 Delegate_t452 * Delegate_CreateDelegate_m8161 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
 Object_t * Delegate_Clone_m2121 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
 bool Delegate_Equals_m8162 (Delegate_t452 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
 int32_t Delegate_GetHashCode_m8163 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Delegate_GetObjectData_m8164 (Delegate_t452 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
 DelegateU5BU5D_t2035* Delegate_GetInvocationList_m8165 (Delegate_t452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
 Delegate_t452 * Delegate_Combine_m2028 (Object_t * __this/* static, unused */, Delegate_t452 * ___a, Delegate_t452 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
 Delegate_t452 * Delegate_Combine_m8166 (Object_t * __this/* static, unused */, DelegateU5BU5D_t2035* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
 Delegate_t452 * Delegate_CombineImpl_m8167 (Delegate_t452 * __this, Delegate_t452 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
 Delegate_t452 * Delegate_Remove_m2029 (Object_t * __this/* static, unused */, Delegate_t452 * ___source, Delegate_t452 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
 Delegate_t452 * Delegate_RemoveImpl_m8168 (Delegate_t452 * __this, Delegate_t452 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
