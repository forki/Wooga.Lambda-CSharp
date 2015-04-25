#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3430;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeHandle__ctor_m11631 (SafeHandle_t3430 * __this, IntPtr_t31 ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
 void SafeHandle_Close_m11632 (SafeHandle_t3430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
 void SafeHandle_DangerousAddRef_m11633 (SafeHandle_t3430 * __this, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
 IntPtr_t31 SafeHandle_DangerousGetHandle_m11634 (SafeHandle_t3430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
 void SafeHandle_DangerousRelease_m11635 (SafeHandle_t3430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
 void SafeHandle_Dispose_m11636 (SafeHandle_t3430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
 void SafeHandle_Dispose_m11637 (SafeHandle_t3430 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
 void SafeHandle_SetHandle_m11638 (SafeHandle_t3430 * __this, IntPtr_t31 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
 void SafeHandle_Finalize_m11639 (SafeHandle_t3430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
