#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3614;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3405;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2718;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2713;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Exception
struct Exception_t115;
// System.Type[]
struct TypeU5BU5D_t2588;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
 bool MethodBuilder_get_ContainsGenericParameters_m11205 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
 RuntimeMethodHandle_t3610  MethodBuilder_get_MethodHandle_m11206 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
 Type_t * MethodBuilder_get_ReturnType_m11207 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
 Type_t * MethodBuilder_get_ReflectedType_m11208 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
 Type_t * MethodBuilder_get_DeclaringType_m11209 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
 String_t* MethodBuilder_get_Name_m11210 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
 int32_t MethodBuilder_get_Attributes_m11211 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
 int32_t MethodBuilder_get_CallingConvention_m11212 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
 MethodInfo_t2624 * MethodBuilder_GetBaseDefinition_m11213 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
 ParameterInfoU5BU5D_t2718* MethodBuilder_GetParameters_m11214 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MethodBuilder_Invoke_m11215 (MethodBuilder_t3614 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
 bool MethodBuilder_IsDefined_m11216 (MethodBuilder_t3614 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MethodBuilder_GetCustomAttributes_m11217 (MethodBuilder_t3614 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MethodBuilder_GetCustomAttributes_m11218 (MethodBuilder_t3614 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
 String_t* MethodBuilder_ToString_m11219 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
 bool MethodBuilder_Equals_m11220 (MethodBuilder_t3614 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
 int32_t MethodBuilder_GetHashCode_m11221 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
 Exception_t115 * MethodBuilder_NotSupported_m11222 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
 MethodInfo_t2624 * MethodBuilder_MakeGenericMethod_m11223 (MethodBuilder_t3614 * __this, TypeU5BU5D_t2588* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
 bool MethodBuilder_get_IsGenericMethodDefinition_m11224 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
 bool MethodBuilder_get_IsGenericMethod_m11225 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
 TypeU5BU5D_t2588* MethodBuilder_GetGenericArguments_m11226 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
 Module_t3405 * MethodBuilder_get_Module_m11227 (MethodBuilder_t3614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
