#pragma once

// System.MonoCustomAttrs
struct MonoCustomAttrs_t2580;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2581;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t1174;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1677;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1359;

// System.Void System.MonoCustomAttrs::.cctor()
 void MonoCustomAttrs__cctor_m11670 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
 bool MonoCustomAttrs_IsUserCattrProvider_m11671 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t149* MonoCustomAttrs_GetCustomAttributesInternal_m11672 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t149* MonoCustomAttrs_GetPseudoCustomAttributes_m11673 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
 ObjectU5BU5D_t149* MonoCustomAttrs_GetCustomAttributesBase_m11674 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 Attribute_t1174 * MonoCustomAttrs_GetCustomAttribute_m11675 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 ObjectU5BU5D_t149* MonoCustomAttrs_GetCustomAttributes_m11676 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
 ObjectU5BU5D_t149* MonoCustomAttrs_GetCustomAttributes_m11677 (Object_t * __this/* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
 bool MonoCustomAttrs_IsDefined_m11678 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
 bool MonoCustomAttrs_IsDefinedInternal_m11679 (Object_t * __this/* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
 PropertyInfo_t1677 * MonoCustomAttrs_GetBasePropertyDefinition_m11680 (Object_t * __this/* static, unused */, PropertyInfo_t1677 * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
 Object_t * MonoCustomAttrs_GetBase_m11681 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
 AttributeUsageAttribute_t1359 * MonoCustomAttrs_RetrieveAttributeUsage_m11682 (Object_t * __this/* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
