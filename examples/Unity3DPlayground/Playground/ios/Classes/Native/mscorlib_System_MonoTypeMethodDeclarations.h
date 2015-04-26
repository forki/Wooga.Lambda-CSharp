#pragma once

// System.MonoType
struct MonoType_t2584;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1874;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t2046;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1391;
// System.Reflection.Binder
struct Binder_t1362;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1363;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2050;
// System.Reflection.EventInfo
struct EventInfo_t2047;
// System.Reflection.FieldInfo
struct FieldInfo_t2048;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2049;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2265;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1677;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.String[]
struct StringU5BU5D_t150;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Reflection.MethodBase
struct MethodBase_t1367;
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
 int32_t MonoType_get_attributes_m11685 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
 ConstructorInfo_t1391 * MonoType_GetDefaultConstructor_m11686 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
 int32_t MonoType_GetAttributeFlagsImpl_m11687 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1391 * MonoType_GetConstructorImpl_m11688 (MonoType_t2584 * __this, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
 ConstructorInfoU5BU5D_t2050* MonoType_GetConstructors_internal_m11689 (MonoType_t2584 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t2050* MonoType_GetConstructors_m11690 (MonoType_t2584 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t2047 * MonoType_InternalGetEvent_m11691 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t2047 * MonoType_GetEvent_m11692 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t2048 * MonoType_GetField_m11693 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
 TypeU5BU5D_t1229* MonoType_GetInterfaces_m11694 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t2049* MonoType_GetMethodsByName_m11695 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2049* MonoType_GetMethods_m11696 (MonoType_t2584 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1265 * MonoType_GetMethodImpl_m11697 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 PropertyInfoU5BU5D_t2265* MonoType_GetPropertiesByName_m11698 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1677 * MonoType_GetPropertyImpl_m11699 (MonoType_t2584 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
 bool MonoType_HasElementTypeImpl_m11700 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
 bool MonoType_IsArrayImpl_m11701 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
 bool MonoType_IsByRefImpl_m11702 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
 bool MonoType_IsPointerImpl_m11703 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
 bool MonoType_IsPrimitiveImpl_m11704 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
 bool MonoType_IsSubclassOf_m11705 (MonoType_t2584 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * MonoType_InvokeMember_m11706 (MonoType_t2584 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1362 * ___binder, Object_t * ___target, ObjectU5BU5D_t149* ___args, ParameterModifierU5BU5D_t1363* ___modifiers, CultureInfo_t1365 * ___culture, StringU5BU5D_t150* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
 Type_t * MonoType_GetElementType_m11707 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
 Type_t * MonoType_get_UnderlyingSystemType_m11708 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
 Assembly_t1874 * MonoType_get_Assembly_m11709 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
 String_t* MonoType_get_AssemblyQualifiedName_m11710 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
 String_t* MonoType_getFullName_m11711 (MonoType_t2584 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
 Type_t * MonoType_get_BaseType_m11712 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
 String_t* MonoType_get_FullName_m11713 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
 bool MonoType_IsDefined_m11714 (MonoType_t2584 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* MonoType_GetCustomAttributes_m11715 (MonoType_t2584 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* MonoType_GetCustomAttributes_m11716 (MonoType_t2584 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
 int32_t MonoType_get_MemberType_m11717 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
 String_t* MonoType_get_Name_m11718 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
 String_t* MonoType_get_Namespace_m11719 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
 Module_t2046 * MonoType_get_Module_m11720 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
 Type_t * MonoType_get_DeclaringType_m11721 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
 Type_t * MonoType_get_ReflectedType_m11722 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
 RuntimeTypeHandle_t2045  MonoType_get_TypeHandle_m11723 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoType_GetObjectData_m11724 (MonoType_t2584 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
 String_t* MonoType_ToString_m11725 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
 TypeU5BU5D_t1229* MonoType_GetGenericArguments_m11726 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
 bool MonoType_get_ContainsGenericParameters_m11727 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
 bool MonoType_get_IsGenericParameter_m11728 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
 Type_t * MonoType_GetGenericTypeDefinition_m11729 (MonoType_t2584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
 MethodBase_t1367 * MonoType_CheckMethodSecurity_m11730 (MonoType_t2584 * __this, MethodBase_t1367 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
 void MonoType_ReorderParamArrayArguments_m11731 (MonoType_t2584 * __this, ObjectU5BU5D_t149** ___args, MethodBase_t1367 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
