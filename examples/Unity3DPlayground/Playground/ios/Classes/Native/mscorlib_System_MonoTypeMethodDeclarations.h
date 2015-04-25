#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t3954;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t3405;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2741;
// System.Reflection.Binder
struct Binder_t2713;
// System.Type[]
struct TypeU5BU5D_t2588;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2714;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3410;
// System.Reflection.EventInfo
struct EventInfo_t3406;
// System.Reflection.FieldInfo
struct FieldInfo_t3407;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t3408;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t3631;
// System.Reflection.PropertyInfo
struct PropertyInfo_t3409;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.String[]
struct StringU5BU5D_t127;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.MethodBase
struct MethodBase_t2717;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
 int32_t MonoType_get_attributes_m13243 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
 ConstructorInfo_t2741 * MonoType_GetDefaultConstructor_m13244 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
 int32_t MonoType_GetAttributeFlagsImpl_m13245 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t2741 * MonoType_GetConstructorImpl_m13246 (MonoType_t3954 * __this, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
 ConstructorInfoU5BU5D_t3410* MonoType_GetConstructors_internal_m13247 (MonoType_t3954 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t3410* MonoType_GetConstructors_m13248 (MonoType_t3954 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3406 * MonoType_InternalGetEvent_m13249 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3406 * MonoType_GetEvent_m13250 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t3407 * MonoType_GetField_m13251 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
 TypeU5BU5D_t2588* MonoType_GetInterfaces_m13252 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t3408* MonoType_GetMethodsByName_m13253 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t3408* MonoType_GetMethods_m13254 (MonoType_t3954 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t2624 * MonoType_GetMethodImpl_m13255 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 PropertyInfoU5BU5D_t3631* MonoType_GetPropertiesByName_m13256 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t3409 * MonoType_GetPropertyImpl_m13257 (MonoType_t3954 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
 bool MonoType_HasElementTypeImpl_m13258 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
 bool MonoType_IsArrayImpl_m13259 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
 bool MonoType_IsByRefImpl_m13260 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
 bool MonoType_IsPointerImpl_m13261 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
 bool MonoType_IsPrimitiveImpl_m13262 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
 bool MonoType_IsSubclassOf_m13263 (MonoType_t3954 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * MonoType_InvokeMember_m13264 (MonoType_t3954 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2713 * ___binder, Object_t * ___target, ObjectU5BU5D_t126* ___args, ParameterModifierU5BU5D_t2714* ___modifiers, CultureInfo_t921 * ___culture, StringU5BU5D_t127* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
 Type_t * MonoType_GetElementType_m13265 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
 Type_t * MonoType_get_UnderlyingSystemType_m13266 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
 Assembly_t1075 * MonoType_get_Assembly_m13267 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
 String_t* MonoType_get_AssemblyQualifiedName_m13268 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
 String_t* MonoType_getFullName_m13269 (MonoType_t3954 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
 Type_t * MonoType_get_BaseType_m13270 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
 String_t* MonoType_get_FullName_m13271 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
 bool MonoType_IsDefined_m13272 (MonoType_t3954 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MonoType_GetCustomAttributes_m13273 (MonoType_t3954 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MonoType_GetCustomAttributes_m13274 (MonoType_t3954 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
 int32_t MonoType_get_MemberType_m13275 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
 String_t* MonoType_get_Name_m13276 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
 String_t* MonoType_get_Namespace_m13277 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
 Module_t3405 * MonoType_get_Module_m13278 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
 Type_t * MonoType_get_DeclaringType_m13279 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
 Type_t * MonoType_get_ReflectedType_m13280 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
 RuntimeTypeHandle_t3404  MonoType_get_TypeHandle_m13281 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoType_GetObjectData_m13282 (MonoType_t3954 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
 String_t* MonoType_ToString_m13283 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
 TypeU5BU5D_t2588* MonoType_GetGenericArguments_m13284 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
 bool MonoType_get_ContainsGenericParameters_m13285 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
 bool MonoType_get_IsGenericParameter_m13286 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
 Type_t * MonoType_GetGenericTypeDefinition_m13287 (MonoType_t3954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
 MethodBase_t2717 * MonoType_CheckMethodSecurity_m13288 (MonoType_t3954 * __this, MethodBase_t2717 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
 void MonoType_ReorderParamArrayArguments_m13289 (MonoType_t3954 * __this, ObjectU5BU5D_t126** ___args, MethodBase_t2717 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
