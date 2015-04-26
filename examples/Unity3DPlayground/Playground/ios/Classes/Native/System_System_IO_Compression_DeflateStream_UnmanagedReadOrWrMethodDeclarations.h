#pragma once

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1556;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
 void UnmanagedReadOrWrite__ctor_m4471 (UnmanagedReadOrWrite_t1556 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
 int32_t UnmanagedReadOrWrite_Invoke_m4472 (UnmanagedReadOrWrite_t1556 * __this, IntPtr_t37 ___buffer, int32_t ___length, IntPtr_t37 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
 Object_t * UnmanagedReadOrWrite_BeginInvoke_m4473 (UnmanagedReadOrWrite_t1556 * __this, IntPtr_t37 ___buffer, int32_t ___length, IntPtr_t37 ___data, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
 int32_t UnmanagedReadOrWrite_EndInvoke_m4474 (UnmanagedReadOrWrite_t1556 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
