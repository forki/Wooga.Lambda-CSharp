#pragma once

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t2249;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t2046;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1368;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1362;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.Exception
struct Exception_t121;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
 bool MethodBuilder_get_ContainsGenericParameters_m9685 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
 RuntimeMethodHandle_t2245  MethodBuilder_get_MethodHandle_m9686 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
 Type_t * MethodBuilder_get_ReturnType_m9687 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
 Type_t * MethodBuilder_get_ReflectedType_m9688 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
 Type_t * MethodBuilder_get_DeclaringType_m9689 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
 String_t* MethodBuilder_get_Name_m9690 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
 int32_t MethodBuilder_get_Attributes_m9691 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
 int32_t MethodBuilder_get_CallingConvention_m9692 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
 MethodInfo_t1265 * MethodBuilder_GetBaseDefinition_m9693 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
 ParameterInfoU5BU5D_t1368* MethodBuilder_GetParameters_m9694 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MethodBuilder_Invoke_m9695 (MethodBuilder_t2249 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1362 * ___binder, ObjectU5BU5D_t149* ___parameters, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
 bool MethodBuilder_IsDefined_m9696 (MethodBuilder_t2249 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* MethodBuilder_GetCustomAttributes_m9697 (MethodBuilder_t2249 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* MethodBuilder_GetCustomAttributes_m9698 (MethodBuilder_t2249 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
 String_t* MethodBuilder_ToString_m9699 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
 bool MethodBuilder_Equals_m9700 (MethodBuilder_t2249 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
 int32_t MethodBuilder_GetHashCode_m9701 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
 Exception_t121 * MethodBuilder_NotSupported_m9702 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
 MethodInfo_t1265 * MethodBuilder_MakeGenericMethod_m9703 (MethodBuilder_t2249 * __this, TypeU5BU5D_t1229* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
 bool MethodBuilder_get_IsGenericMethodDefinition_m9704 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
 bool MethodBuilder_get_IsGenericMethod_m9705 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
 TypeU5BU5D_t1229* MethodBuilder_GetGenericArguments_m9706 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
 Module_t2046 * MethodBuilder_get_Module_m9707 (MethodBuilder_t2249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
