#pragma once

// System.IO.Compression.GZipStream
struct GZipStream_t1561;
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
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
 void GZipStream__ctor_m4513 (GZipStream_t1561 * __this, Stream_t1049 * ___compressedStream, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
 void GZipStream__ctor_m4514 (GZipStream_t1561 * __this, Stream_t1049 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
 void GZipStream_Dispose_m4515 (GZipStream_t1561 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t GZipStream_Read_m4516 (GZipStream_t1561 * __this, ByteU5BU5D_t1071* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
 void GZipStream_Write_m4517 (GZipStream_t1561 * __this, ByteU5BU5D_t1071* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Flush()
 void GZipStream_Flush_m4518 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t GZipStream_Seek_m4519 (GZipStream_t1561 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
 void GZipStream_SetLength_m4520 (GZipStream_t1561 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * GZipStream_BeginRead_m4521 (GZipStream_t1561 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * GZipStream_BeginWrite_m4522 (GZipStream_t1561 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
 int32_t GZipStream_EndRead_m4523 (GZipStream_t1561 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
 void GZipStream_EndWrite_m4524 (GZipStream_t1561 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
 bool GZipStream_get_CanRead_m4525 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
 bool GZipStream_get_CanSeek_m4526 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
 bool GZipStream_get_CanWrite_m4527 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Length()
 int64_t GZipStream_get_Length_m4528 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Position()
 int64_t GZipStream_get_Position_m4529 (GZipStream_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
 void GZipStream_set_Position_m4530 (GZipStream_t1561 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
