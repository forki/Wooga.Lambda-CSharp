#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t3609;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3607;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3405;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
 int32_t ConstructorBuilder_get_CallingConvention_m11094 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
 TypeBuilder_t3607 * ConstructorBuilder_get_TypeBuilder_m11095 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
 ParameterInfoU5BU5D_t2718* ConstructorBuilder_GetParameters_m11096 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
 ParameterInfoU5BU5D_t2718* ConstructorBuilder_GetParametersInternal_m11097 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m11098 (ConstructorBuilder_t3609 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m11099 (ConstructorBuilder_t3609 * __this, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
 RuntimeMethodHandle_t3610  ConstructorBuilder_get_MethodHandle_m11100 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
 int32_t ConstructorBuilder_get_Attributes_m11101 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
 Type_t * ConstructorBuilder_get_ReflectedType_m11102 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
 Type_t * ConstructorBuilder_get_DeclaringType_m11103 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
 String_t* ConstructorBuilder_get_Name_m11104 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
 bool ConstructorBuilder_IsDefined_m11105 (ConstructorBuilder_t3609 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* ConstructorBuilder_GetCustomAttributes_m11106 (ConstructorBuilder_t3609 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* ConstructorBuilder_GetCustomAttributes_m11107 (ConstructorBuilder_t3609 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
 Module_t3405 * ConstructorBuilder_get_Module_m11108 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
 String_t* ConstructorBuilder_ToString_m11109 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
 bool ConstructorBuilder_get_IsCompilerContext_m11110 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
 Exception_t115 * ConstructorBuilder_not_supported_m11111 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
 Exception_t115 * ConstructorBuilder_not_created_m11112 (ConstructorBuilder_t3609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
