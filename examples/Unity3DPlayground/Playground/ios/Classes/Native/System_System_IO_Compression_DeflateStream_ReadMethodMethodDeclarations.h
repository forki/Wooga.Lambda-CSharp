#pragma once

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t1557;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
 void ReadMethod__ctor_m4475 (ReadMethod_t1557 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
 int32_t ReadMethod_Invoke_m4476 (ReadMethod_t1557 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ReadMethod_BeginInvoke_m4477 (ReadMethod_t1557 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
 int32_t ReadMethod_EndInvoke_m4478 (ReadMethod_t1557 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
