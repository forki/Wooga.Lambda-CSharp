#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t155;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3704;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.cctor()
 void Thread__cctor_m12700 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
 Context_t3704 * Thread_get_CurrentContext_m12701 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
 Thread_t155 * Thread_CurrentThread_internal_m12702 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
 Thread_t155 * Thread_get_CurrentThread_m558 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
 int32_t Thread_GetDomainID_m12703 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
 CultureInfo_t921 * Thread_GetCachedCurrentCulture_m12704 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
 ByteU5BU5D_t961* Thread_GetSerializedCurrentCulture_m12705 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentCulture_m12706 (Thread_t155 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
 CultureInfo_t921 * Thread_GetCachedCurrentUICulture_m12707 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
 ByteU5BU5D_t961* Thread_GetSerializedCurrentUICulture_m12708 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentUICulture_m12709 (Thread_t155 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
 CultureInfo_t921 * Thread_get_CurrentCulture_m12710 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
 CultureInfo_t921 * Thread_get_CurrentUICulture_m12711 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::MemoryBarrier()
 void Thread_MemoryBarrier_m5161 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
 void Thread_Thread_free_internal_m12712 (Thread_t155 * __this, IntPtr_t31 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
 void Thread_Finalize_m12713 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
 int32_t Thread_GetNewManagedId_m12714 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
 int32_t Thread_GetNewManagedId_internal_m12715 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
 int32_t Thread_get_ManagedThreadId_m559 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
 int32_t Thread_GetHashCode_m12716 (Thread_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
