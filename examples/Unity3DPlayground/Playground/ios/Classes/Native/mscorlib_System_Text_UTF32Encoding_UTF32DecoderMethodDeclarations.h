#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t3874;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
 void UTF32Decoder__ctor_m12580 (UTF32Decoder_t3874 * __this, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF32Decoder_GetChars_m12581 (UTF32Decoder_t3874 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
