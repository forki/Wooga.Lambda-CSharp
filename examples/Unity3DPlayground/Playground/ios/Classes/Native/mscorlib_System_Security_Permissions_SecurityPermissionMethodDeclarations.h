#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3841;
// System.Security.IPermission
struct IPermission_t3843;
// System.Security.SecurityElement
struct SecurityElement_t3493;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission__ctor_m12355 (SecurityPermission_t3841 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission_set_Flags_m12356 (SecurityPermission_t3841 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
 bool SecurityPermission_IsUnrestricted_m12357 (SecurityPermission_t3841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
 bool SecurityPermission_IsSubsetOf_m12358 (SecurityPermission_t3841 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
 SecurityElement_t3493 * SecurityPermission_ToXml_m12359 (SecurityPermission_t3841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
 bool SecurityPermission_IsEmpty_m12360 (SecurityPermission_t3841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
 SecurityPermission_t3841 * SecurityPermission_Cast_m12361 (SecurityPermission_t3841 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
