#pragma once

// System.Net.ChunkStream
struct ChunkStream_t1605;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
 void ChunkStream__ctor_m4706 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t1051 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
 void ChunkStream__ctor_m4707 (ChunkStream_t1605 * __this, WebHeaderCollection_t1051 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
 void ChunkStream_ResetBuffer_m4708 (ChunkStream_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
 void ChunkStream_WriteAndReadBack_m4709 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t ChunkStream_Read_m4710 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
 int32_t ChunkStream_ReadFromChunks_m4711 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
 void ChunkStream_Write_m4712 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
 void ChunkStream_InternalWrite_m4713 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
 bool ChunkStream_get_WantMore_m4714 (ChunkStream_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
 int32_t ChunkStream_get_ChunkLeft_m4715 (ChunkStream_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadBody_m4716 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_GetChunkSize_m4717 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
 String_t* ChunkStream_RemoveChunkExtension_m4718 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadCRLF_m4719 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadTrailer_m4720 (ChunkStream_t1605 * __this, ByteU5BU5D_t1071* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
 void ChunkStream_ThrowProtocolViolation_m4721 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
