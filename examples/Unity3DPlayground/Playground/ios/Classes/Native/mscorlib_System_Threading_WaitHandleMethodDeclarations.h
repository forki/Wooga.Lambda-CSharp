#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t3896;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
 void WaitHandle__ctor_m12725 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
 void WaitHandle__cctor_m12726 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
 void WaitHandle_System_IDisposable_Dispose_m12727 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitAll_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
 bool WaitHandle_WaitAll_internal_m12728 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t3896* ___handles, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
 void WaitHandle_CheckArray_m12729 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t3896* ___handles, bool ___waitAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitAll(System.Threading.WaitHandle[])
 bool WaitHandle_WaitAll_m12730 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t3896* ___waitHandles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
 IntPtr_t31 WaitHandle_get_Handle_m12731 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
 void WaitHandle_set_Handle_m12732 (WaitHandle_t527 * __this, IntPtr_t31 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_internal_m12733 (WaitHandle_t527 * __this, IntPtr_t31 ___handle, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
 void WaitHandle_Dispose_m12734 (WaitHandle_t527 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
 bool WaitHandle_WaitOne_m8934 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_m8963 (WaitHandle_t527 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32)
 bool WaitHandle_WaitOne_m2510 (WaitHandle_t527 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
 void WaitHandle_CheckDisposed_m12735 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
 void WaitHandle_Finalize_m12736 (WaitHandle_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
