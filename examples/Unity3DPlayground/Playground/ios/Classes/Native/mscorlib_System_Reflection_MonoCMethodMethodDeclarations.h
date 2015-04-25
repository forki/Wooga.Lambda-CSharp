#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t3648;
// System.Type
struct Type_t;
// System.String
struct String_t;
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
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
 void MonoCMethod__ctor_m11496 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
 ParameterInfoU5BU5D_t2718* MonoCMethod_GetParameters_m11497 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoCMethod_InternalInvoke_m11498 (MonoCMethod_t3648 * __this, Object_t * ___obj, ObjectU5BU5D_t126* ___parameters, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m11499 (MonoCMethod_t3648 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m11500 (MonoCMethod_t3648 * __this, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___parameters, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
 RuntimeMethodHandle_t3610  MonoCMethod_get_MethodHandle_m11501 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
 int32_t MonoCMethod_get_Attributes_m11502 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
 int32_t MonoCMethod_get_CallingConvention_m11503 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
 Type_t * MonoCMethod_get_ReflectedType_m11504 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
 Type_t * MonoCMethod_get_DeclaringType_m11505 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
 String_t* MonoCMethod_get_Name_m11506 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
 bool MonoCMethod_IsDefined_m11507 (MonoCMethod_t3648 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MonoCMethod_GetCustomAttributes_m11508 (MonoCMethod_t3648 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MonoCMethod_GetCustomAttributes_m11509 (MonoCMethod_t3648 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
 String_t* MonoCMethod_ToString_m11510 (MonoCMethod_t3648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoCMethod_GetObjectData_m11511 (MonoCMethod_t3648 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
