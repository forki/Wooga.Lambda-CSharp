#pragma once

// System.Security.SecurityManager
struct SecurityManager_t2487;
// System.Security.PermissionSet
struct PermissionSet_t2260;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
 void SecurityManager__cctor_m10870 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
 bool SecurityManager_get_SecurityEnabled_m10871 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
 PermissionSet_t2260 * SecurityManager_Decode_m10872 (Object_t * __this/* static, unused */, IntPtr_t37 ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
 PermissionSet_t2260 * SecurityManager_Decode_m10873 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
