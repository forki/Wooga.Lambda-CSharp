#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t3857;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3858;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3859;
// System.Text.Decoder
struct Decoder_t3566;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m12434 (ASCIIEncoding_t3857 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m12435 (ASCIIEncoding_t3857 * __this, CharU5BU5D_t311* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m12436 (ASCIIEncoding_t3857 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m12437 (ASCIIEncoding_t3857 * __this, CharU5BU5D_t311* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m12438 (ASCIIEncoding_t3857 * __this, CharU5BU5D_t311* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3858 ** ___buffer, CharU5BU5D_t311** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m12439 (ASCIIEncoding_t3857 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m12440 (ASCIIEncoding_t3857 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t3858 ** ___buffer, CharU5BU5D_t311** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m12441 (ASCIIEncoding_t3857 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m12442 (ASCIIEncoding_t3857 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m12443 (ASCIIEncoding_t3857 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t3859 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m12444 (ASCIIEncoding_t3857 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m12445 (ASCIIEncoding_t3857 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m12446 (ASCIIEncoding_t3857 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m12447 (ASCIIEncoding_t3857 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m12448 (ASCIIEncoding_t3857 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t3566 * ASCIIEncoding_GetDecoder_m12449 (ASCIIEncoding_t3857 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
