#pragma once

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t2242;
// System.Reflection.Assembly
struct Assembly_t1874;
// System.String
struct String_t;
// System.Type
struct Type_t;
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
// System.Object[]
struct ObjectU5BU5D_t149;
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
// System.Reflection.PropertyInfo
struct PropertyInfo_t1677;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.String[]
struct StringU5BU5D_t150;
// System.Exception
struct Exception_t121;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
 int32_t TypeBuilder_GetAttributeFlagsImpl_m9712 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
 Assembly_t1874 * TypeBuilder_get_Assembly_m9713 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
 String_t* TypeBuilder_get_AssemblyQualifiedName_m9714 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
 Type_t * TypeBuilder_get_BaseType_m9715 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
 Type_t * TypeBuilder_get_DeclaringType_m9716 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
 Type_t * TypeBuilder_get_UnderlyingSystemType_m9717 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
 String_t* TypeBuilder_get_FullName_m9718 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
 Module_t2046 * TypeBuilder_get_Module_m9719 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
 String_t* TypeBuilder_get_Name_m9720 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
 String_t* TypeBuilder_get_Namespace_m9721 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
 Type_t * TypeBuilder_get_ReflectedType_m9722 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1391 * TypeBuilder_GetConstructorImpl_m9723 (TypeBuilder_t2242 * __this, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
 bool TypeBuilder_IsDefined_m9724 (TypeBuilder_t2242 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* TypeBuilder_GetCustomAttributes_m9725 (TypeBuilder_t2242 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* TypeBuilder_GetCustomAttributes_m9726 (TypeBuilder_t2242 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t2050* TypeBuilder_GetConstructors_m9727 (TypeBuilder_t2242 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t2050* TypeBuilder_GetConstructorsInternal_m9728 (TypeBuilder_t2242 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
 Type_t * TypeBuilder_GetElementType_m9729 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t2047 * TypeBuilder_GetEvent_m9730 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t2048 * TypeBuilder_GetField_m9731 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
 TypeU5BU5D_t1229* TypeBuilder_GetInterfaces_m9732 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t2049* TypeBuilder_GetMethodsByName_m9733 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2049* TypeBuilder_GetMethods_m9734 (TypeBuilder_t2242 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1265 * TypeBuilder_GetMethodImpl_m9735 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1677 * TypeBuilder_GetPropertyImpl_m9736 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
 bool TypeBuilder_HasElementTypeImpl_m9737 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * TypeBuilder_InvokeMember_m9738 (TypeBuilder_t2242 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1362 * ___binder, Object_t * ___target, ObjectU5BU5D_t149* ___args, ParameterModifierU5BU5D_t1363* ___modifiers, CultureInfo_t1365 * ___culture, StringU5BU5D_t150* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
 bool TypeBuilder_IsArrayImpl_m9739 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
 bool TypeBuilder_IsByRefImpl_m9740 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
 bool TypeBuilder_IsPointerImpl_m9741 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
 bool TypeBuilder_IsPrimitiveImpl_m9742 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
 bool TypeBuilder_IsValueTypeImpl_m9743 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
 Type_t * TypeBuilder_MakeGenericType_m9744 (TypeBuilder_t2242 * __this, TypeU5BU5D_t1229* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
 RuntimeTypeHandle_t2045  TypeBuilder_get_TypeHandle_m9745 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
 bool TypeBuilder_get_IsCompilerContext_m9746 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
 bool TypeBuilder_get_is_created_m9747 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
 Exception_t121 * TypeBuilder_not_supported_m9748 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
 void TypeBuilder_check_created_m9749 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
 String_t* TypeBuilder_ToString_m9750 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
 bool TypeBuilder_IsAssignableFrom_m9751 (TypeBuilder_t2242 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
 bool TypeBuilder_IsSubclassOf_m9752 (TypeBuilder_t2242 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
 bool TypeBuilder_IsAssignableTo_m9753 (TypeBuilder_t2242 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
 TypeU5BU5D_t1229* TypeBuilder_GetGenericArguments_m9754 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
 Type_t * TypeBuilder_GetGenericTypeDefinition_m9755 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
 bool TypeBuilder_get_ContainsGenericParameters_m9756 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
 bool TypeBuilder_get_IsGenericParameter_m9757 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
 bool TypeBuilder_get_IsGenericTypeDefinition_m9758 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
 bool TypeBuilder_get_IsGenericType_m9759 (TypeBuilder_t2242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
