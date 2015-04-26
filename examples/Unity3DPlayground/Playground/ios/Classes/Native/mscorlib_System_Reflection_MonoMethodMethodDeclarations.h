#pragma once

// System.Reflection.MonoMethod
struct MonoMethod_t2280;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1368;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Exception
struct Exception_t121;
// System.Reflection.Binder
struct Binder_t1362;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t2053;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
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
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
 void MonoMethod__ctor_m9925 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
 String_t* MonoMethod_get_name_m9926 (Object_t * __this/* static, unused */, MethodBase_t1367 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
 MonoMethod_t2280 * MonoMethod_get_base_definition_m9927 (Object_t * __this/* static, unused */, MonoMethod_t2280 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
 MethodInfo_t1265 * MonoMethod_GetBaseDefinition_m9928 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
 Type_t * MonoMethod_get_ReturnType_m9929 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
 ParameterInfoU5BU5D_t1368* MonoMethod_GetParameters_m9930 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoMethod_InternalInvoke_m9931 (MonoMethod_t2280 * __this, Object_t * ___obj, ObjectU5BU5D_t149* ___parameters, Exception_t121 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoMethod_Invoke_m9932 (MonoMethod_t2280 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1362 * ___binder, ObjectU5BU5D_t149* ___parameters, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
 RuntimeMethodHandle_t2245  MonoMethod_get_MethodHandle_m9933 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
 int32_t MonoMethod_get_Attributes_m9934 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
 int32_t MonoMethod_get_CallingConvention_m9935 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
 Type_t * MonoMethod_get_ReflectedType_m9936 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
 Type_t * MonoMethod_get_DeclaringType_m9937 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
 String_t* MonoMethod_get_Name_m9938 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
 bool MonoMethod_IsDefined_m9939 (MonoMethod_t2280 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* MonoMethod_GetCustomAttributes_m9940 (MonoMethod_t2280 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* MonoMethod_GetCustomAttributes_m9941 (MonoMethod_t2280 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
 DllImportAttribute_t2053 * MonoMethod_GetDllImportAttribute_m9942 (Object_t * __this/* static, unused */, IntPtr_t37 ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
 ObjectU5BU5D_t149* MonoMethod_GetPseudoCustomAttributes_m9943 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
 bool MonoMethod_ShouldPrintFullName_m9944 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
 String_t* MonoMethod_ToString_m9945 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoMethod_GetObjectData_m9946 (MonoMethod_t2280 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
 MethodInfo_t1265 * MonoMethod_MakeGenericMethod_m9947 (MonoMethod_t2280 * __this, TypeU5BU5D_t1229* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
 MethodInfo_t1265 * MonoMethod_MakeGenericMethod_impl_m9948 (MonoMethod_t2280 * __this, TypeU5BU5D_t1229* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
 TypeU5BU5D_t1229* MonoMethod_GetGenericArguments_m9949 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
 bool MonoMethod_get_IsGenericMethodDefinition_m9950 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
 bool MonoMethod_get_IsGenericMethod_m9951 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
 bool MonoMethod_get_ContainsGenericParameters_m9952 (MonoMethod_t2280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
