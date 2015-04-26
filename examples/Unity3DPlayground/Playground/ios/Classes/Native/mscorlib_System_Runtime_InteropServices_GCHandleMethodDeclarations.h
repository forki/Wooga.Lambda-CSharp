#pragma once

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t1560;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.IntPtr)
 void GCHandle__ctor_m10041 (GCHandle_t1560 * __this, IntPtr_t37 ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object)
 void GCHandle__ctor_m10042 (GCHandle_t1560 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
 void GCHandle__ctor_m10043 (GCHandle_t1560 * __this, Object_t * ___value, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
 bool GCHandle_get_IsAllocated_m6188 (GCHandle_t1560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
 Object_t * GCHandle_get_Target_m6192 (GCHandle_t1560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
 GCHandle_t1560  GCHandle_Alloc_m6185 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
 GCHandle_t1560  GCHandle_Alloc_m10044 (Object_t * __this/* static, unused */, Object_t * ___value, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
 void GCHandle_Free_m6189 (GCHandle_t1560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)
 bool GCHandle_CheckCurrentDomain_m10045 (Object_t * __this/* static, unused */, int32_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
 Object_t * GCHandle_GetTarget_m10046 (Object_t * __this/* static, unused */, int32_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
 int32_t GCHandle_GetTargetHandle_m10047 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
 void GCHandle_FreeHandle_m10048 (Object_t * __this/* static, unused */, int32_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
 bool GCHandle_Equals_m10049 (GCHandle_t1560 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
 int32_t GCHandle_GetHashCode_m10050 (GCHandle_t1560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
 GCHandle_t1560  GCHandle_FromIntPtr_m6191 (Object_t * __this/* static, unused */, IntPtr_t37 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
 IntPtr_t37 GCHandle_ToIntPtr_m6186 (Object_t * __this/* static, unused */, GCHandle_t1560  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
 IntPtr_t37 GCHandle_op_Explicit_m10051 (Object_t * __this/* static, unused */, GCHandle_t1560  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
 GCHandle_t1560  GCHandle_op_Explicit_m10052 (Object_t * __this/* static, unused */, IntPtr_t37 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
