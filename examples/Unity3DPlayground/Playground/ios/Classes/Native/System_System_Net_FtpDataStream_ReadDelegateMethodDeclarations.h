#pragma once

// System.Net.FtpDataStream/ReadDelegate
struct ReadDelegate_t1636;
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

// System.Void System.Net.FtpDataStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
 void ReadDelegate__ctor_m4898 (ReadDelegate_t1636 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 int32_t ReadDelegate_Invoke_m4899 (ReadDelegate_t1636 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ReadDelegate_BeginInvoke_m4900 (ReadDelegate_t1636 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::EndInvoke(System.IAsyncResult)
 int32_t ReadDelegate_EndInvoke_m4901 (ReadDelegate_t1636 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
