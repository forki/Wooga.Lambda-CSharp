#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MemoryStream
struct MemoryStream_t3338;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MemoryStream::.ctor()
 void MemoryStream__ctor_m8946 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
 void MemoryStream__ctor_m8968 (MemoryStream_t3338 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
 void MemoryStream__ctor_m8969 (MemoryStream_t3338 * __this, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void MemoryStream_InternalConstructor_m10884 (MemoryStream_t3338 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
 void MemoryStream_CheckIfClosedThrowDisposed_m10885 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
 bool MemoryStream_get_CanRead_m10886 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
 bool MemoryStream_get_CanSeek_m8967 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
 bool MemoryStream_get_CanWrite_m10887 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
 void MemoryStream_set_Capacity_m10888 (MemoryStream_t3338 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
 int64_t MemoryStream_get_Length_m8955 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
 int64_t MemoryStream_get_Position_m8954 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
 void MemoryStream_set_Position_m8958 (MemoryStream_t3338 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
 void MemoryStream_Dispose_m10889 (MemoryStream_t3338 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
 void MemoryStream_Flush_m8971 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t MemoryStream_Read_m8956 (MemoryStream_t3338 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
 int32_t MemoryStream_ReadByte_m10890 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t MemoryStream_Seek_m8959 (MemoryStream_t3338 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
 int32_t MemoryStream_CalculateNewCapacity_m10891 (MemoryStream_t3338 * __this, int32_t ___minimum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
 void MemoryStream_Expand_m10892 (MemoryStream_t3338 * __this, int32_t ___newSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
 void MemoryStream_SetLength_m8960 (MemoryStream_t3338 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
 ByteU5BU5D_t961* MemoryStream_ToArray_m8970 (MemoryStream_t3338 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
 void MemoryStream_Write_m8957 (MemoryStream_t3338 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
 void MemoryStream_WriteByte_m10893 (MemoryStream_t3338 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
