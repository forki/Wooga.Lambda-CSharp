#pragma once

// System.IO.Compression.DeflateStream
struct DeflateStream_t1559;
// System.IO.Stream
struct Stream_t1049;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1556;
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
 void DeflateStream__ctor_m4483 (DeflateStream_t1559 * __this, Stream_t1049 * ___compressedStream, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
 void DeflateStream__ctor_m4484 (DeflateStream_t1559 * __this, Stream_t1049 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, bool ___gzip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
 void DeflateStream_Dispose_m4485 (DeflateStream_t1559 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
 int32_t DeflateStream_UnmanagedRead_m4486 (Object_t * __this/* static, unused */, IntPtr_t37 ___buffer, int32_t ___length, IntPtr_t37 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
 int32_t DeflateStream_UnmanagedRead_m4487 (DeflateStream_t1559 * __this, IntPtr_t37 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
 int32_t DeflateStream_UnmanagedWrite_m4488 (Object_t * __this/* static, unused */, IntPtr_t37 ___buffer, int32_t ___length, IntPtr_t37 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
 int32_t DeflateStream_UnmanagedWrite_m4489 (DeflateStream_t1559 * __this, IntPtr_t37 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
 int32_t DeflateStream_ReadInternal_m4490 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t DeflateStream_Read_m4491 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
 void DeflateStream_WriteInternal_m4492 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
 void DeflateStream_Write_m4493 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
 void DeflateStream_CheckResult_m4494 (Object_t * __this/* static, unused */, int32_t ___result, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
 void DeflateStream_Flush_m4495 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * DeflateStream_BeginRead_m4496 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * DeflateStream_BeginWrite_m4497 (DeflateStream_t1559 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
 int32_t DeflateStream_EndRead_m4498 (DeflateStream_t1559 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
 void DeflateStream_EndWrite_m4499 (DeflateStream_t1559 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t DeflateStream_Seek_m4500 (DeflateStream_t1559 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
 void DeflateStream_SetLength_m4501 (DeflateStream_t1559 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
 bool DeflateStream_get_CanRead_m4502 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
 bool DeflateStream_get_CanSeek_m4503 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
 bool DeflateStream_get_CanWrite_m4504 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
 int64_t DeflateStream_get_Length_m4505 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
 int64_t DeflateStream_get_Position_m4506 (DeflateStream_t1559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
 void DeflateStream_set_Position_m4507 (DeflateStream_t1559 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
 IntPtr_t37 DeflateStream_CreateZStream_m4508 (Object_t * __this/* static, unused */, int32_t ___compress, bool ___gzip, UnmanagedReadOrWrite_t1556 * ___feeder, IntPtr_t37 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
 int32_t DeflateStream_CloseZStream_m4509 (Object_t * __this/* static, unused */, IntPtr_t37 ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
 int32_t DeflateStream_Flush_m4510 (Object_t * __this/* static, unused */, IntPtr_t37 ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
 int32_t DeflateStream_ReadZStream_m4511 (Object_t * __this/* static, unused */, IntPtr_t37 ___stream, IntPtr_t37 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
 int32_t DeflateStream_WriteZStream_m4512 (Object_t * __this/* static, unused */, IntPtr_t37 ___stream, IntPtr_t37 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
