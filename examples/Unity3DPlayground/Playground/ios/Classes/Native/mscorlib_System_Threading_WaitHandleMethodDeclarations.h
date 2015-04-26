#pragma once

// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t2526;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
 void WaitHandle__ctor_m11178 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
 void WaitHandle__cctor_m11179 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
 void WaitHandle_System_IDisposable_Dispose_m11180 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitAll_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
 bool WaitHandle_WaitAll_internal_m11181 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t2526* ___handles, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
 void WaitHandle_CheckArray_m11182 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t2526* ___handles, bool ___waitAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitAll(System.Threading.WaitHandle[])
 bool WaitHandle_WaitAll_m11183 (Object_t * __this/* static, unused */, WaitHandleU5BU5D_t2526* ___waitHandles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
 IntPtr_t37 WaitHandle_get_Handle_m11184 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
 void WaitHandle_set_Handle_m11185 (WaitHandle_t533 * __this, IntPtr_t37 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_internal_m11186 (WaitHandle_t533 * __this, IntPtr_t37 ___handle, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
 void WaitHandle_Dispose_m11187 (WaitHandle_t533 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
 bool WaitHandle_WaitOne_m6253 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_m6347 (WaitHandle_t533 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32)
 bool WaitHandle_WaitOne_m2515 (WaitHandle_t533 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
 void WaitHandle_CheckDisposed_m11188 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
 void WaitHandle_Finalize_m11189 (WaitHandle_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
