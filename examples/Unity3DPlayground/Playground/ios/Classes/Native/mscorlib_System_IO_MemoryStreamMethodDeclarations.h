#pragma once

// System.IO.MemoryStream
struct MemoryStream_t1679;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MemoryStream::.ctor()
 void MemoryStream__ctor_m6428 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
 void MemoryStream__ctor_m7592 (MemoryStream_t1679 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
 void MemoryStream__ctor_m7593 (MemoryStream_t1679 * __this, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void MemoryStream_InternalConstructor_m9389 (MemoryStream_t1679 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
 void MemoryStream_CheckIfClosedThrowDisposed_m9390 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
 bool MemoryStream_get_CanRead_m9391 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
 bool MemoryStream_get_CanSeek_m7591 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
 bool MemoryStream_get_CanWrite_m9392 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
 void MemoryStream_set_Capacity_m9393 (MemoryStream_t1679 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
 int64_t MemoryStream_get_Length_m6430 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
 int64_t MemoryStream_get_Position_m7586 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
 void MemoryStream_set_Position_m7588 (MemoryStream_t1679 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
 void MemoryStream_Dispose_m9394 (MemoryStream_t1679 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
 void MemoryStream_Flush_m7595 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::GetBuffer()
 ByteU5BU5D_t1071* MemoryStream_GetBuffer_m6431 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t MemoryStream_Read_m7587 (MemoryStream_t1679 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
 int32_t MemoryStream_ReadByte_m9395 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t MemoryStream_Seek_m7589 (MemoryStream_t1679 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
 int32_t MemoryStream_CalculateNewCapacity_m9396 (MemoryStream_t1679 * __this, int32_t ___minimum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
 void MemoryStream_Expand_m9397 (MemoryStream_t1679 * __this, int32_t ___newSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
 void MemoryStream_SetLength_m6668 (MemoryStream_t1679 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
 ByteU5BU5D_t1071* MemoryStream_ToArray_m7594 (MemoryStream_t1679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
 void MemoryStream_Write_m6429 (MemoryStream_t1679 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
 void MemoryStream_WriteByte_m6669 (MemoryStream_t1679 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
