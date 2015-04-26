#pragma once

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t2468;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2469;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2133;
// System.Type
struct Type_t;

// System.Void System.Security.CodeAccessPermission::.ctor()
 void CodeAccessPermission__ctor_m10817 (CodeAccessPermission_t2468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
 bool CodeAccessPermission_Equals_m10818 (CodeAccessPermission_t2468 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
 int32_t CodeAccessPermission_GetHashCode_m10819 (CodeAccessPermission_t2468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsSubsetOf(System.Security.IPermission)
// System.String System.Security.CodeAccessPermission::ToString()
 String_t* CodeAccessPermission_ToString_m10820 (CodeAccessPermission_t2468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::ToXml()
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
 SecurityElement_t2133 * CodeAccessPermission_Element_m10821 (CodeAccessPermission_t2468 * __this, int32_t ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
 void CodeAccessPermission_ThrowInvalidPermission_m10822 (Object_t * __this/* static, unused */, Object_t * ___target, Type_t * ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
