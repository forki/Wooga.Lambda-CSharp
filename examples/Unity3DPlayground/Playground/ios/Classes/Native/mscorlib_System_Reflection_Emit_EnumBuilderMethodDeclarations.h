#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t3611;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.String
struct String_t;
// System.Type
struct Type_t;
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
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Reflection.EventInfo
struct EventInfo_t3406;
// System.Reflection.FieldInfo
struct FieldInfo_t3407;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t3408;
// System.Reflection.PropertyInfo
struct PropertyInfo_t3409;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.String[]
struct StringU5BU5D_t127;
// System.Exception
struct Exception_t115;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t1075 * EnumBuilder_get_Assembly_m11113 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m11114 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m11115 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m11116 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m11117 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t3405 * EnumBuilder_get_Module_m11118 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m11119 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m11120 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m11121 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3404  EnumBuilder_get_TypeHandle_m11122 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m11123 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m11124 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t2741 * EnumBuilder_GetConstructorImpl_m11125 (EnumBuilder_t3611 * __this, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t3410* EnumBuilder_GetConstructors_m11126 (EnumBuilder_t3611 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* EnumBuilder_GetCustomAttributes_m11127 (EnumBuilder_t3611 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* EnumBuilder_GetCustomAttributes_m11128 (EnumBuilder_t3611 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m11129 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3406 * EnumBuilder_GetEvent_m11130 (EnumBuilder_t3611 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t3407 * EnumBuilder_GetField_m11131 (EnumBuilder_t3611 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t2588* EnumBuilder_GetInterfaces_m11132 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t2624 * EnumBuilder_GetMethodImpl_m11133 (EnumBuilder_t3611 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t3408* EnumBuilder_GetMethods_m11134 (EnumBuilder_t3611 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t3409 * EnumBuilder_GetPropertyImpl_m11135 (EnumBuilder_t3611 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m11136 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m11137 (EnumBuilder_t3611 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2713 * ___binder, Object_t * ___target, ObjectU5BU5D_t126* ___args, ParameterModifierU5BU5D_t2714* ___modifiers, CultureInfo_t921 * ___culture, StringU5BU5D_t127* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m11138 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m11139 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m11140 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m11141 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m11142 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m11143 (EnumBuilder_t3611 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t115 * EnumBuilder_CreateNotSupportedException_m11144 (EnumBuilder_t3611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
