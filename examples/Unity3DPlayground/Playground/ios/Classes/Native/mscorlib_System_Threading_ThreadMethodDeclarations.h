#pragma once

// System.Threading.Thread
struct Thread_t1588;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.Threading.ExecutionContext
struct ExecutionContext_t2345;
// System.Threading.ThreadStart
struct ThreadStart_t1860;
// System.MulticastDelegate
struct MulticastDelegate_t311;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Threading.CompressedStack
struct CompressedStack_t2480;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
 void Thread__ctor_m6354 (Thread_t1588 * __this, ThreadStart_t1860 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
 void Thread__cctor_m11147 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
 Context_t2332 * Thread_get_CurrentContext_m11148 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
 Thread_t1588 * Thread_CurrentThread_internal_m11149 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
 Thread_t1588 * Thread_get_CurrentThread_m6245 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
 int32_t Thread_GetDomainID_m11150 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort_internal()
 void Thread_ResetAbort_internal_m11151 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort()
 void Thread_ResetAbort_m6246 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
 IntPtr_t37 Thread_Thread_internal_m11152 (Thread_t1588 * __this, MulticastDelegate_t311 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
 void Thread_Thread_init_m11153 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
 CultureInfo_t1365 * Thread_GetCachedCurrentCulture_m11154 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
 ByteU5BU5D_t1071* Thread_GetSerializedCurrentCulture_m11155 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentCulture_m11156 (Thread_t1588 * __this, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
 CultureInfo_t1365 * Thread_GetCachedCurrentUICulture_m11157 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
 ByteU5BU5D_t1071* Thread_GetSerializedCurrentUICulture_m11158 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentUICulture_m11159 (Thread_t1588 * __this, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
 CultureInfo_t1365 * Thread_get_CurrentCulture_m11160 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
 CultureInfo_t1365 * Thread_get_CurrentUICulture_m11161 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
 void Thread_Abort_internal_m11162 (Thread_t1588 * __this, Object_t * ___stateInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
 void Thread_Abort_m6256 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
 void Thread_Start_m6355 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
 void Thread_Thread_free_internal_m11163 (Thread_t1588 * __this, IntPtr_t37 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
 void Thread_Finalize_m11164 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
 int32_t Thread_GetNewManagedId_m11165 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
 int32_t Thread_GetNewManagedId_internal_m11166 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
 ExecutionContext_t2345 * Thread_get_ExecutionContext_m11167 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
 int32_t Thread_get_ManagedThreadId_m11168 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
 int32_t Thread_GetHashCode_m11169 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
 CompressedStack_t2480 * Thread_GetCompressedStack_m11170 (Thread_t1588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
