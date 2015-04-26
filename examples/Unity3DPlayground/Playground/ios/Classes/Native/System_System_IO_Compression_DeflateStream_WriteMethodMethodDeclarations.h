#pragma once

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t1558;
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

// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
 void WriteMethod__ctor_m4479 (WriteMethod_t1558 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
 void WriteMethod_Invoke_m4480 (WriteMethod_t1558 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WriteMethod_BeginInvoke_m4481 (WriteMethod_t1558 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
 void WriteMethod_EndInvoke_m4482 (WriteMethod_t1558 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
