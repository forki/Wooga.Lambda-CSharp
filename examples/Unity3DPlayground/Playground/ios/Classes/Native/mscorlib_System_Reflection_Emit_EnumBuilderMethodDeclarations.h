#pragma once

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t2246;
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2050;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.EventInfo
struct EventInfo_t2047;
// System.Reflection.FieldInfo
struct FieldInfo_t2048;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2049;
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

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t1874 * EnumBuilder_get_Assembly_m9593 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m9594 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m9595 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m9596 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m9597 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t2046 * EnumBuilder_get_Module_m9598 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m9599 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m9600 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m9601 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t2045  EnumBuilder_get_TypeHandle_m9602 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m9603 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m9604 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1391 * EnumBuilder_GetConstructorImpl_m9605 (EnumBuilder_t2246 * __this, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t2050* EnumBuilder_GetConstructors_m9606 (EnumBuilder_t2246 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* EnumBuilder_GetCustomAttributes_m9607 (EnumBuilder_t2246 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* EnumBuilder_GetCustomAttributes_m9608 (EnumBuilder_t2246 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m9609 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t2047 * EnumBuilder_GetEvent_m9610 (EnumBuilder_t2246 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t2048 * EnumBuilder_GetField_m9611 (EnumBuilder_t2246 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t1229* EnumBuilder_GetInterfaces_m9612 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t1265 * EnumBuilder_GetMethodImpl_m9613 (EnumBuilder_t2246 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t2049* EnumBuilder_GetMethods_m9614 (EnumBuilder_t2246 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1677 * EnumBuilder_GetPropertyImpl_m9615 (EnumBuilder_t2246 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1362 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m9616 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m9617 (EnumBuilder_t2246 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1362 * ___binder, Object_t * ___target, ObjectU5BU5D_t149* ___args, ParameterModifierU5BU5D_t1363* ___modifiers, CultureInfo_t1365 * ___culture, StringU5BU5D_t150* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m9618 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m9619 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m9620 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m9621 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m9622 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m9623 (EnumBuilder_t2246 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t121 * EnumBuilder_CreateNotSupportedException_m9624 (EnumBuilder_t2246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
