#pragma once

// System.Net.FtpDataStream/WriteDelegate
struct WriteDelegate_t1635;
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

// System.Void System.Net.FtpDataStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
 void WriteDelegate__ctor_m4894 (WriteDelegate_t1635 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 void WriteDelegate_Invoke_m4895 (WriteDelegate_t1635 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WriteDelegate_BeginInvoke_m4896 (WriteDelegate_t1635 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::EndInvoke(System.IAsyncResult)
 void WriteDelegate_EndInvoke_m4897 (WriteDelegate_t1635 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
