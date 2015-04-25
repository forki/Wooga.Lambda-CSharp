#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t3613;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3612;
// System.Reflection.Module
struct Module_t3405;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2713;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Exception
struct Exception_t115;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
 int32_t FieldBuilder_get_Attributes_m11145 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
 Type_t * FieldBuilder_get_DeclaringType_m11146 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
 RuntimeFieldHandle_t3411  FieldBuilder_get_FieldHandle_m11147 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
 Type_t * FieldBuilder_get_FieldType_m11148 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
 String_t* FieldBuilder_get_Name_m11149 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
 Type_t * FieldBuilder_get_ReflectedType_m11150 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* FieldBuilder_GetCustomAttributes_m11151 (FieldBuilder_t3613 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* FieldBuilder_GetCustomAttributes_m11152 (FieldBuilder_t3613 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
 Object_t * FieldBuilder_GetValue_m11153 (FieldBuilder_t3613 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
 bool FieldBuilder_IsDefined_m11154 (FieldBuilder_t3613 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
 int32_t FieldBuilder_GetFieldOffset_m11155 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void FieldBuilder_SetValue_m11156 (FieldBuilder_t3613 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2713 * ___binder, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
 UnmanagedMarshal_t3612 * FieldBuilder_get_UMarshal_m11157 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
 Exception_t115 * FieldBuilder_CreateNotSupportedException_m11158 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
 Module_t3405 * FieldBuilder_get_Module_m11159 (FieldBuilder_t3613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
