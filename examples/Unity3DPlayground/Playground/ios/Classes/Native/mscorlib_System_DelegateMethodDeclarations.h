#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t447;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Delegate[]
struct DelegateU5BU5D_t3394;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
 MethodInfo_t2624 * Delegate_get_Method_m6276 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
 Object_t * Delegate_get_Target_m6278 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_internal_m9539 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t2624 * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
 void Delegate_SetMulticastInvoke_m9540 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
 bool Delegate_arg_type_match_m9541 (Object_t * __this/* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
 bool Delegate_return_type_match_m9542 (Object_t * __this/* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_m9543 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t2624 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
 Delegate_t447 * Delegate_CreateDelegate_m6282 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t2624 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_m9544 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo_t2624 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
 Delegate_t447 * Delegate_CreateDelegate_m9545 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
 MethodInfo_t2624 * Delegate_GetCandidateMethod_m9546 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_m9547 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
 Delegate_t447 * Delegate_CreateDelegate_m9548 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_m9549 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
 Delegate_t447 * Delegate_CreateDelegate_m9550 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
 Object_t * Delegate_Clone_m2114 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
 bool Delegate_Equals_m9551 (Delegate_t447 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
 int32_t Delegate_GetHashCode_m9552 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Delegate_GetObjectData_m9553 (Delegate_t447 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
 DelegateU5BU5D_t3394* Delegate_GetInvocationList_m9554 (Delegate_t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
 Delegate_t447 * Delegate_Combine_m2022 (Object_t * __this/* static, unused */, Delegate_t447 * ___a, Delegate_t447 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
 Delegate_t447 * Delegate_Combine_m9555 (Object_t * __this/* static, unused */, DelegateU5BU5D_t3394* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
 Delegate_t447 * Delegate_CombineImpl_m9556 (Delegate_t447 * __this, Delegate_t447 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
 Delegate_t447 * Delegate_Remove_m2023 (Object_t * __this/* static, unused */, Delegate_t447 * ___source, Delegate_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
 Delegate_t447 * Delegate_RemoveImpl_m9557 (Delegate_t447 * __this, Delegate_t447 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
