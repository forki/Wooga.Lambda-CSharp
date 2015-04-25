#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t3598;
// System.IO.Stream
struct Stream_t3308;
// System.Text.Encoding
struct Encoding_t3222;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamReader__ctor_m11053 (UnexceptionalStreamReader_t3598 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
 void UnexceptionalStreamReader__cctor_m11054 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
 int32_t UnexceptionalStreamReader_Peek_m11055 (UnexceptionalStreamReader_t3598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
 int32_t UnexceptionalStreamReader_Read_m11056 (UnexceptionalStreamReader_t3598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t UnexceptionalStreamReader_Read_m11057 (UnexceptionalStreamReader_t3598 * __this, CharU5BU5D_t311* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
 bool UnexceptionalStreamReader_CheckEOL_m11058 (UnexceptionalStreamReader_t3598 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
 String_t* UnexceptionalStreamReader_ReadLine_m11059 (UnexceptionalStreamReader_t3598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
 String_t* UnexceptionalStreamReader_ReadToEnd_m11060 (UnexceptionalStreamReader_t3598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
