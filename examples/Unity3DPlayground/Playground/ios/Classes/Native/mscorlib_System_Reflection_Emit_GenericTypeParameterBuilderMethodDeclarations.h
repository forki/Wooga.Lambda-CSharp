#pragma once

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t2250;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m9640 (GenericTypeParameterBuilder_t2250 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m9641 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1391 * GenericTypeParameterBuilder_GetConstructorImpl_m9642 (GenericTypeParameterBuilder_t2250 * __this, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t2050* GenericTypeParameterBuilder_GetConstructors_m9643 (GenericTypeParameterBuilder_t2250 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t2047 * GenericTypeParameterBuilder_GetEvent_m9644 (GenericTypeParameterBuilder_t2250 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t2048 * GenericTypeParameterBuilder_GetField_m9645 (GenericTypeParameterBuilder_t2250 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t1229* GenericTypeParameterBuilder_GetInterfaces_m9646 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2049* GenericTypeParameterBuilder_GetMethods_m9647 (GenericTypeParameterBuilder_t2250 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1265 * GenericTypeParameterBuilder_GetMethodImpl_m9648 (GenericTypeParameterBuilder_t2250 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1677 * GenericTypeParameterBuilder_GetPropertyImpl_m9649 (GenericTypeParameterBuilder_t2250 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m9650 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m9651 (GenericTypeParameterBuilder_t2250 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m9652 (GenericTypeParameterBuilder_t2250 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m9653 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m9654 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m9655 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m9656 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m9657 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m9658 (GenericTypeParameterBuilder_t2250 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1362 * ___binder, Object_t * ___target, ObjectU5BU5D_t149* ___args, ParameterModifierU5BU5D_t1363* ___modifiers, CultureInfo_t1365 * ___culture, StringU5BU5D_t150* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m9659 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m9660 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t1874 * GenericTypeParameterBuilder_get_Assembly_m9661 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m9662 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m9663 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m9664 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m9665 (GenericTypeParameterBuilder_t2250 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* GenericTypeParameterBuilder_GetCustomAttributes_m9666 (GenericTypeParameterBuilder_t2250 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* GenericTypeParameterBuilder_GetCustomAttributes_m9667 (GenericTypeParameterBuilder_t2250 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m9668 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m9669 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t2046 * GenericTypeParameterBuilder_get_Module_m9670 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m9671 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m9672 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t2045  GenericTypeParameterBuilder_get_TypeHandle_m9673 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t1229* GenericTypeParameterBuilder_GetGenericArguments_m9674 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m9675 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m9676 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m9677 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m9678 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m9679 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t121 * GenericTypeParameterBuilder_not_supported_m9680 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m9681 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m9682 (GenericTypeParameterBuilder_t2250 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m9683 (GenericTypeParameterBuilder_t2250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m9684 (GenericTypeParameterBuilder_t2250 * __this, TypeU5BU5D_t1229* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
