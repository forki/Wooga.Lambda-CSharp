#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t3566;
// System.Text.DecoderFallback
struct DecoderFallback_t3860;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3859;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.Text.Decoder::.ctor()
 void Decoder__ctor_m12450 (Decoder_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
 void Decoder_set_Fallback_m12451 (Decoder_t3566 * __this, DecoderFallback_t3860 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
 DecoderFallbackBuffer_t3859 * Decoder_get_FallbackBuffer_m12452 (Decoder_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
