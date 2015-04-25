#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t3574;
// System.IO.Stream
struct Stream_t3308;
// System.Text.Encoding
struct Encoding_t3222;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.IO.StreamReader::.ctor()
 void StreamReader__ctor_m10969 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamReader__ctor_m10970 (StreamReader_t3574 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m10971 (StreamReader_t3574 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
 void StreamReader__ctor_m10972 (StreamReader_t3574 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m10973 (StreamReader_t3574 * __this, String_t* ___path, Encoding_t3222 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
 void StreamReader__cctor_m10974 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader_Initialize_m10975 (StreamReader_t3574 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
 void StreamReader_Dispose_m10976 (StreamReader_t3574 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
 int32_t StreamReader_DoChecks_m10977 (StreamReader_t3574 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
 int32_t StreamReader_ReadBuffer_m10978 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
 int32_t StreamReader_Peek_m10979 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
 int32_t StreamReader_Read_m10980 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StreamReader_Read_m10981 (StreamReader_t3574 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
 int32_t StreamReader_FindNextEOL_m10982 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
 String_t* StreamReader_ReadLine_m10983 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
 String_t* StreamReader_ReadToEnd_m10984 (StreamReader_t3574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
