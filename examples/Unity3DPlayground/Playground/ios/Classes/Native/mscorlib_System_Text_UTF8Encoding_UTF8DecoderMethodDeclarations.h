#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t3879;
// System.Text.DecoderFallback
struct DecoderFallback_t3860;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
 void UTF8Decoder__ctor_m12623 (UTF8Decoder_t3879 * __this, DecoderFallback_t3860 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF8Decoder_GetChars_m12624 (UTF8Decoder_t3879 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
