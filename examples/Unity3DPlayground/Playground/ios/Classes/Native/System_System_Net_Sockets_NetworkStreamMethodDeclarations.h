#pragma once

// System.Net.Sockets.NetworkStream
struct NetworkStream_t1577;
// System.Net.Sockets.Socket
struct Socket_t1576;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
 void NetworkStream__ctor_m4565 (NetworkStream_t1577 * __this, Socket_t1576 * ___socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
 void NetworkStream__ctor_m4566 (NetworkStream_t1577 * __this, Socket_t1576 * ___socket, bool ___owns_socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
 void NetworkStream__ctor_m4567 (NetworkStream_t1577 * __this, Socket_t1576 * ___socket, int32_t ___access, bool ___owns_socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
 void NetworkStream_System_IDisposable_Dispose_m4568 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
 bool NetworkStream_get_CanRead_m4569 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
 bool NetworkStream_get_CanSeek_m4570 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
 bool NetworkStream_get_CanWrite_m4571 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
 int64_t NetworkStream_get_Length_m4572 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
 int64_t NetworkStream_get_Position_m4573 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
 void NetworkStream_set_Position_m4574 (NetworkStream_t1577 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
 int32_t NetworkStream_get_ReadTimeout_m4575 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
 int32_t NetworkStream_get_WriteTimeout_m4576 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * NetworkStream_BeginRead_m4577 (NetworkStream_t1577 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * NetworkStream_BeginWrite_m4578 (NetworkStream_t1577 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
 void NetworkStream_Finalize_m4579 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
 void NetworkStream_Dispose_m4580 (NetworkStream_t1577 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
 int32_t NetworkStream_EndRead_m4581 (NetworkStream_t1577 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
 void NetworkStream_EndWrite_m4582 (NetworkStream_t1577 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
 void NetworkStream_Flush_m4583 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t NetworkStream_Read_m4584 (NetworkStream_t1577 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t NetworkStream_Seek_m4585 (NetworkStream_t1577 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
 void NetworkStream_SetLength_m4586 (NetworkStream_t1577 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
 void NetworkStream_Write_m4587 (NetworkStream_t1577 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
 void NetworkStream_CheckDisposed_m4588 (NetworkStream_t1577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
