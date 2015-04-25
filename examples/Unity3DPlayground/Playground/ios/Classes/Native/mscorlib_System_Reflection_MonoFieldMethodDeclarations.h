#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoField
struct MonoField_t3644;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t3407;
// System.Reflection.Binder
struct Binder_t2713;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
 void MonoField__ctor_m11437 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
 int32_t MonoField_get_Attributes_m11438 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
 RuntimeFieldHandle_t3411  MonoField_get_FieldHandle_m11439 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
 Type_t * MonoField_get_FieldType_m11440 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
 Type_t * MonoField_GetParentType_m11441 (MonoField_t3644 * __this, bool ___declaring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
 Type_t * MonoField_get_ReflectedType_m11442 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
 Type_t * MonoField_get_DeclaringType_m11443 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
 String_t* MonoField_get_Name_m11444 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
 bool MonoField_IsDefined_m11445 (MonoField_t3644 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MonoField_GetCustomAttributes_m11446 (MonoField_t3644 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MonoField_GetCustomAttributes_m11447 (MonoField_t3644 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
 int32_t MonoField_GetFieldOffset_m11448 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
 Object_t * MonoField_GetValueInternal_m11449 (MonoField_t3644 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
 Object_t * MonoField_GetValue_m11450 (MonoField_t3644 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
 String_t* MonoField_ToString_m11451 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
 void MonoField_SetValueInternal_m11452 (Object_t * __this/* static, unused */, FieldInfo_t3407 * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void MonoField_SetValue_m11453 (MonoField_t3644 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2713 * ___binder, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoField_GetObjectData_m11454 (MonoField_t3644 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
 void MonoField_CheckGeneric_m11455 (MonoField_t3644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
