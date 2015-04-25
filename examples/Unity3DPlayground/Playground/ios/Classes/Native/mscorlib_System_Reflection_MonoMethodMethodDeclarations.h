#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethod
struct MonoMethod_t3646;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t2717;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2718;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Exception
struct Exception_t115;
// System.Reflection.Binder
struct Binder_t2713;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t3413;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
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
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
 void MonoMethod__ctor_m11468 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
 String_t* MonoMethod_get_name_m11469 (Object_t * __this/* static, unused */, MethodBase_t2717 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
 MonoMethod_t3646 * MonoMethod_get_base_definition_m11470 (Object_t * __this/* static, unused */, MonoMethod_t3646 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
 MethodInfo_t2624 * MonoMethod_GetBaseDefinition_m11471 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
 Type_t * MonoMethod_get_ReturnType_m11472 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
 ParameterInfoU5BU5D_t2718* MonoMethod_GetParameters_m11473 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoMethod_InternalInvoke_m11474 (MonoMethod_t3646 * __this, Object_t * ___obj, ObjectU5BU5D_t126* ___parameters, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoMethod_Invoke_m11475 (MonoMethod_t3646 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
 RuntimeMethodHandle_t3610  MonoMethod_get_MethodHandle_m11476 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
 int32_t MonoMethod_get_Attributes_m11477 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
 int32_t MonoMethod_get_CallingConvention_m11478 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
 Type_t * MonoMethod_get_ReflectedType_m11479 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
 Type_t * MonoMethod_get_DeclaringType_m11480 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
 String_t* MonoMethod_get_Name_m11481 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
 bool MonoMethod_IsDefined_m11482 (MonoMethod_t3646 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MonoMethod_GetCustomAttributes_m11483 (MonoMethod_t3646 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MonoMethod_GetCustomAttributes_m11484 (MonoMethod_t3646 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
 DllImportAttribute_t3413 * MonoMethod_GetDllImportAttribute_m11485 (Object_t * __this/* static, unused */, IntPtr_t31 ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
 ObjectU5BU5D_t126* MonoMethod_GetPseudoCustomAttributes_m11486 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
 bool MonoMethod_ShouldPrintFullName_m11487 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
 String_t* MonoMethod_ToString_m11488 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoMethod_GetObjectData_m11489 (MonoMethod_t3646 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
 MethodInfo_t2624 * MonoMethod_MakeGenericMethod_m11490 (MonoMethod_t3646 * __this, TypeU5BU5D_t2588* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
 MethodInfo_t2624 * MonoMethod_MakeGenericMethod_impl_m11491 (MonoMethod_t3646 * __this, TypeU5BU5D_t2588* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
 TypeU5BU5D_t2588* MonoMethod_GetGenericArguments_m11492 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
 bool MonoMethod_get_IsGenericMethodDefinition_m11493 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
 bool MonoMethod_get_IsGenericMethod_m11494 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
 bool MonoMethod_get_ContainsGenericParameters_m11495 (MonoMethod_t3646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
