#pragma once

// System.Reflection.MemberFilter
struct MemberFilter_t2044;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t1357;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
 void MemberFilter__ctor_m11969 (MemberFilter_t2044 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
 bool MemberFilter_Invoke_m11970 (MemberFilter_t2044 * __this, MemberInfo_t1357 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
 Object_t * MemberFilter_BeginInvoke_m11971 (MemberFilter_t2044 * __this, MemberInfo_t1357 * ___m, Object_t * ___filterCriteria, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
 bool MemberFilter_EndInvoke_m11972 (MemberFilter_t2044 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
