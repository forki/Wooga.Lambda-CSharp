#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t1048;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t2709;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2719;

// System.Void System.Attribute::.ctor()
 void Attribute__ctor_m4970 (Attribute_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
 void Attribute_CheckParameters_m8984 (Object_t * __this/* static, unused */, Object_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
 Attribute_t1048 * Attribute_GetCustomAttribute_m8985 (Object_t * __this/* static, unused */, MemberInfo_t2709 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
 Attribute_t1048 * Attribute_GetCustomAttribute_m8986 (Object_t * __this/* static, unused */, MemberInfo_t2709 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
 int32_t Attribute_GetHashCode_m4972 (Attribute_t1048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
 bool Attribute_IsDefined_m8987 (Object_t * __this/* static, unused */, ParameterInfo_t2719 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
 bool Attribute_IsDefined_m8988 (Object_t * __this/* static, unused */, MemberInfo_t2709 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m8989 (Object_t * __this/* static, unused */, MemberInfo_t2709 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m8990 (Object_t * __this/* static, unused */, ParameterInfo_t2719 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
 bool Attribute_Equals_m4971 (Attribute_t1048 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
