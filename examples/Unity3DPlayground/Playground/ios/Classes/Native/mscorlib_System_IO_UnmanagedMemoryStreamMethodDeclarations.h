#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3601;
// System.EventHandler
struct EventHandler_t3600;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
 void UnmanagedMemoryStream__ctor_m11067 (UnmanagedMemoryStream_t3601 * __this, uint8_t* ___pointer, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::add_Closed(System.EventHandler)
 void UnmanagedMemoryStream_add_Closed_m11068 (UnmanagedMemoryStream_t3601 * __this, EventHandler_t3600 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::remove_Closed(System.EventHandler)
 void UnmanagedMemoryStream_remove_Closed_m11069 (UnmanagedMemoryStream_t3601 * __this, EventHandler_t3600 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
 bool UnmanagedMemoryStream_get_CanRead_m11070 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
 bool UnmanagedMemoryStream_get_CanSeek_m11071 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
 bool UnmanagedMemoryStream_get_CanWrite_m11072 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
 int64_t UnmanagedMemoryStream_get_Length_m11073 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
 int64_t UnmanagedMemoryStream_get_Position_m11074 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
 void UnmanagedMemoryStream_set_Position_m11075 (UnmanagedMemoryStream_t3601 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t UnmanagedMemoryStream_Read_m11076 (UnmanagedMemoryStream_t3601 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
 int32_t UnmanagedMemoryStream_ReadByte_m11077 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t UnmanagedMemoryStream_Seek_m11078 (UnmanagedMemoryStream_t3601 * __this, int64_t ___offset, int32_t ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
 void UnmanagedMemoryStream_SetLength_m11079 (UnmanagedMemoryStream_t3601 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
 void UnmanagedMemoryStream_Flush_m11080 (UnmanagedMemoryStream_t3601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
 void UnmanagedMemoryStream_Dispose_m11081 (UnmanagedMemoryStream_t3601 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
 void UnmanagedMemoryStream_Write_m11082 (UnmanagedMemoryStream_t3601 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
 void UnmanagedMemoryStream_WriteByte_m11083 (UnmanagedMemoryStream_t3601 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Initialize(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
 void UnmanagedMemoryStream_Initialize_m11084 (UnmanagedMemoryStream_t3601 * __this, uint8_t* ___pointer, int64_t ___length, int64_t ___capacity, int32_t ___access, MethodInfo* method) IL2CPP_METHOD_ATTR;
