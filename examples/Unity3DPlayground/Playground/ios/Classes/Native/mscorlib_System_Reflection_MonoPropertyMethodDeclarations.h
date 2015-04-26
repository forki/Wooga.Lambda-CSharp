#pragma once

// System.Reflection.MonoProperty
struct MonoProperty_t2285;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2049;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1368;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2287;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1362;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
 void MonoProperty__ctor_m9975 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
 void MonoProperty_CachePropertyInfo_m9976 (MonoProperty_t2285 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
 int32_t MonoProperty_get_Attributes_m9977 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
 bool MonoProperty_get_CanRead_m9978 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
 bool MonoProperty_get_CanWrite_m9979 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
 Type_t * MonoProperty_get_PropertyType_m9980 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
 Type_t * MonoProperty_get_ReflectedType_m9981 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
 Type_t * MonoProperty_get_DeclaringType_m9982 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
 String_t* MonoProperty_get_Name_m9983 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
 MethodInfoU5BU5D_t2049* MonoProperty_GetAccessors_m9984 (MonoProperty_t2285 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
 MethodInfo_t1265 * MonoProperty_GetGetMethod_m9985 (MonoProperty_t2285 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
 ParameterInfoU5BU5D_t1368* MonoProperty_GetIndexParameters_m9986 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
 MethodInfo_t1265 * MonoProperty_GetSetMethod_m9987 (MonoProperty_t2285 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
 bool MonoProperty_IsDefined_m9988 (MonoProperty_t2285 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t149* MonoProperty_GetCustomAttributes_m9989 (MonoProperty_t2285 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* MonoProperty_GetCustomAttributes_m9990 (MonoProperty_t2285 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
 GetterAdapter_t2287 * MonoProperty_CreateGetterDelegate_m9991 (Object_t * __this/* static, unused */, MethodInfo_t1265 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
 Object_t * MonoProperty_GetValue_m9992 (MonoProperty_t2285 * __this, Object_t * ___obj, ObjectU5BU5D_t149* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoProperty_GetValue_m9993 (MonoProperty_t2285 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1362 * ___binder, ObjectU5BU5D_t149* ___index, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void MonoProperty_SetValue_m9994 (MonoProperty_t2285 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t1362 * ___binder, ObjectU5BU5D_t149* ___index, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
 String_t* MonoProperty_ToString_m9995 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
 TypeU5BU5D_t1229* MonoProperty_GetOptionalCustomModifiers_m9996 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
 TypeU5BU5D_t1229* MonoProperty_GetRequiredCustomModifiers_m9997 (MonoProperty_t2285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoProperty_GetObjectData_m9998 (MonoProperty_t2285 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
