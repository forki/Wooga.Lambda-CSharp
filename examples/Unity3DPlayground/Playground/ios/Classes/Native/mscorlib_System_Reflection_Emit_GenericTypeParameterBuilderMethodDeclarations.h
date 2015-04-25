#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3615;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m11160 (GenericTypeParameterBuilder_t3615 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m11161 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t2741 * GenericTypeParameterBuilder_GetConstructorImpl_m11162 (GenericTypeParameterBuilder_t3615 * __this, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t3410* GenericTypeParameterBuilder_GetConstructors_m11163 (GenericTypeParameterBuilder_t3615 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t3406 * GenericTypeParameterBuilder_GetEvent_m11164 (GenericTypeParameterBuilder_t3615 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t3407 * GenericTypeParameterBuilder_GetField_m11165 (GenericTypeParameterBuilder_t3615 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t2588* GenericTypeParameterBuilder_GetInterfaces_m11166 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t3408* GenericTypeParameterBuilder_GetMethods_m11167 (GenericTypeParameterBuilder_t3615 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t2624 * GenericTypeParameterBuilder_GetMethodImpl_m11168 (GenericTypeParameterBuilder_t3615 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t3409 * GenericTypeParameterBuilder_GetPropertyImpl_m11169 (GenericTypeParameterBuilder_t3615 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2713 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2588* ___types, ParameterModifierU5BU5D_t2714* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m11170 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m11171 (GenericTypeParameterBuilder_t3615 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m11172 (GenericTypeParameterBuilder_t3615 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m11173 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m11174 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m11175 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m11176 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m11177 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m11178 (GenericTypeParameterBuilder_t3615 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2713 * ___binder, Object_t * ___target, ObjectU5BU5D_t126* ___args, ParameterModifierU5BU5D_t2714* ___modifiers, CultureInfo_t921 * ___culture, StringU5BU5D_t127* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m11179 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m11180 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t1075 * GenericTypeParameterBuilder_get_Assembly_m11181 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m11182 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m11183 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m11184 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m11185 (GenericTypeParameterBuilder_t3615 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* GenericTypeParameterBuilder_GetCustomAttributes_m11186 (GenericTypeParameterBuilder_t3615 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* GenericTypeParameterBuilder_GetCustomAttributes_m11187 (GenericTypeParameterBuilder_t3615 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m11188 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m11189 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t3405 * GenericTypeParameterBuilder_get_Module_m11190 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m11191 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m11192 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t3404  GenericTypeParameterBuilder_get_TypeHandle_m11193 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t2588* GenericTypeParameterBuilder_GetGenericArguments_m11194 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m11195 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m11196 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m11197 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m11198 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m11199 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t115 * GenericTypeParameterBuilder_not_supported_m11200 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m11201 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m11202 (GenericTypeParameterBuilder_t3615 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m11203 (GenericTypeParameterBuilder_t3615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m11204 (GenericTypeParameterBuilder_t3615 * __this, TypeU5BU5D_t2588* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
