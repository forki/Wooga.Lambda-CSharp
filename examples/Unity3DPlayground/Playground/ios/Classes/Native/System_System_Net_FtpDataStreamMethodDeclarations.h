#pragma once

// System.Net.FtpDataStream
struct FtpDataStream_t1638;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1637;
// System.IO.Stream
struct Stream_t1049;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
 void FtpDataStream__ctor_m4902 (FtpDataStream_t1638 * __this, FtpWebRequest_t1637 * ___request, Stream_t1049 * ___stream, bool ___isRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
 void FtpDataStream_System_IDisposable_Dispose_m4903 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanRead()
 bool FtpDataStream_get_CanRead_m4904 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanWrite()
 bool FtpDataStream_get_CanWrite_m4905 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanSeek()
 bool FtpDataStream_get_CanSeek_m4906 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Length()
 int64_t FtpDataStream_get_Length_m4907 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Position()
 int64_t FtpDataStream_get_Position_m4908 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::set_Position(System.Int64)
 void FtpDataStream_set_Position_m4909 (FtpDataStream_t1638 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Close()
 void FtpDataStream_Close_m4910 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Flush()
 void FtpDataStream_Flush_m4911 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t FtpDataStream_Seek_m4912 (FtpDataStream_t1638 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::SetLength(System.Int64)
 void FtpDataStream_SetLength_m4913 (FtpDataStream_t1638 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
 int32_t FtpDataStream_ReadInternal_m4914 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * FtpDataStream_BeginRead_m4915 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
 int32_t FtpDataStream_EndRead_m4916 (FtpDataStream_t1638 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t FtpDataStream_Read_m4917 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
 void FtpDataStream_WriteInternal_m4918 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * FtpDataStream_BeginWrite_m4919 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
 void FtpDataStream_EndWrite_m4920 (FtpDataStream_t1638 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
 void FtpDataStream_Write_m4921 (FtpDataStream_t1638 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Finalize()
 void FtpDataStream_Finalize_m4922 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
 void FtpDataStream_Dispose_m4923 (FtpDataStream_t1638 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::CheckDisposed()
 void FtpDataStream_CheckDisposed_m4924 (FtpDataStream_t1638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
