#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty
struct MonoProperty_t3651;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t3408;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2718;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3653;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2713;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Type[]
struct TypeU5BU5D_t2588;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
 void MonoProperty__ctor_m11518 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
 void MonoProperty_CachePropertyInfo_m11519 (MonoProperty_t3651 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
 int32_t MonoProperty_get_Attributes_m11520 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
 bool MonoProperty_get_CanRead_m11521 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
 bool MonoProperty_get_CanWrite_m11522 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
 Type_t * MonoProperty_get_PropertyType_m11523 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
 Type_t * MonoProperty_get_ReflectedType_m11524 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
 Type_t * MonoProperty_get_DeclaringType_m11525 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
 String_t* MonoProperty_get_Name_m11526 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
 MethodInfoU5BU5D_t3408* MonoProperty_GetAccessors_m11527 (MonoProperty_t3651 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
 MethodInfo_t2624 * MonoProperty_GetGetMethod_m11528 (MonoProperty_t3651 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
 ParameterInfoU5BU5D_t2718* MonoProperty_GetIndexParameters_m11529 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
 MethodInfo_t2624 * MonoProperty_GetSetMethod_m11530 (MonoProperty_t3651 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
 bool MonoProperty_IsDefined_m11531 (MonoProperty_t3651 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t126* MonoProperty_GetCustomAttributes_m11532 (MonoProperty_t3651 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* MonoProperty_GetCustomAttributes_m11533 (MonoProperty_t3651 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
 GetterAdapter_t3653 * MonoProperty_CreateGetterDelegate_m11534 (Object_t * __this/* static, unused */, MethodInfo_t2624 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
 Object_t * MonoProperty_GetValue_m11535 (MonoProperty_t3651 * __this, Object_t * ___obj, ObjectU5BU5D_t126* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoProperty_GetValue_m11536 (MonoProperty_t3651 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___index, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void MonoProperty_SetValue_m11537 (MonoProperty_t3651 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2713 * ___binder, ObjectU5BU5D_t126* ___index, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
 String_t* MonoProperty_ToString_m11538 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
 TypeU5BU5D_t2588* MonoProperty_GetOptionalCustomModifiers_m11539 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
 TypeU5BU5D_t2588* MonoProperty_GetRequiredCustomModifiers_m11540 (MonoProperty_t3651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoProperty_GetObjectData_m11541 (MonoProperty_t3651 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
