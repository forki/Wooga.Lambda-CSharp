#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ParameterInfo
struct ParameterInfo_t2719;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t2709;
// System.String
struct String_t;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3618;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
 void ParameterInfo__ctor_m11542 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
 void ParameterInfo__ctor_m11543 (ParameterInfo_t2719 * __this, ParameterBuilder_t3618 * ___pb, Type_t * ___type, MemberInfo_t2709 * ___member, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
 void ParameterInfo__ctor_m11544 (ParameterInfo_t2719 * __this, ParameterInfo_t2719 * ___pinfo, MemberInfo_t2709 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
 String_t* ParameterInfo_ToString_m11545 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
 Type_t * ParameterInfo_get_ParameterType_m6266 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
 int32_t ParameterInfo_get_Attributes_m11546 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
 bool ParameterInfo_get_IsIn_m11547 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
 bool ParameterInfo_get_IsOptional_m11548 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
 bool ParameterInfo_get_IsOut_m11549 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
 bool ParameterInfo_get_IsRetval_m11550 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
 MemberInfo_t2709 * ParameterInfo_get_Member_m11551 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
 String_t* ParameterInfo_get_Name_m11552 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
 int32_t ParameterInfo_get_Position_m11553 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* ParameterInfo_GetCustomAttributes_m11554 (ParameterInfo_t2719 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
 bool ParameterInfo_IsDefined_m11555 (ParameterInfo_t2719 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t126* ParameterInfo_GetPseudoCustomAttributes_m11556 (ParameterInfo_t2719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
