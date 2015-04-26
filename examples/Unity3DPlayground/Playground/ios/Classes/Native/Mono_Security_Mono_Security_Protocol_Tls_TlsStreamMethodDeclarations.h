#pragma once

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1964;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
 void TlsStream__ctor_m7356 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
 void TlsStream__ctor_m7357 (TlsStream_t1964 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
 bool TlsStream_get_EOF_m7358 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
 bool TlsStream_get_CanWrite_m7359 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
 bool TlsStream_get_CanRead_m7360 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
 bool TlsStream_get_CanSeek_m7361 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
 int64_t TlsStream_get_Position_m7362 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
 void TlsStream_set_Position_m7363 (TlsStream_t1964 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
 int64_t TlsStream_get_Length_m7364 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
 ByteU5BU5D_t1071* TlsStream_ReadSmallValue_m7365 (TlsStream_t1964 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
 uint8_t TlsStream_ReadByte_m7366 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
 int16_t TlsStream_ReadInt16_m7367 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
 int32_t TlsStream_ReadInt24_m7368 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
 ByteU5BU5D_t1071* TlsStream_ReadBytes_m7369 (TlsStream_t1964 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
 void TlsStream_Write_m7370 (TlsStream_t1964 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
 void TlsStream_Write_m7371 (TlsStream_t1964 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
 void TlsStream_WriteInt24_m7372 (TlsStream_t1964 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
 void TlsStream_Write_m7373 (TlsStream_t1964 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
 void TlsStream_Write_m7374 (TlsStream_t1964 * __this, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
 void TlsStream_Reset_m7375 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
 ByteU5BU5D_t1071* TlsStream_ToArray_m7376 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
 void TlsStream_Flush_m7377 (TlsStream_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
 void TlsStream_SetLength_m7378 (TlsStream_t1964 * __this, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t TlsStream_Seek_m7379 (TlsStream_t1964 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t TlsStream_Read_m7380 (TlsStream_t1964 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
 void TlsStream_Write_m7381 (TlsStream_t1964 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
