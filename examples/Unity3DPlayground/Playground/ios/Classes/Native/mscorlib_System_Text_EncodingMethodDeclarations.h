#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding
struct Encoding_t3222;
// System.Text.DecoderFallback
struct DecoderFallback_t3860;
// System.Text.EncoderFallback
struct EncoderFallback_t3867;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t311;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Text.Decoder
struct Decoder_t3566;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void System.Text.Encoding::.ctor()
 void Encoding__ctor_m12515 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
 void Encoding__ctor_m12516 (Encoding_t3222 * __this, int32_t ___codePage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
 void Encoding__cctor_m12517 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
 String_t* Encoding___m12518 (Object_t * __this/* static, unused */, String_t* ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
 bool Encoding_get_IsReadOnly_m12519 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
 DecoderFallback_t3860 * Encoding_get_DecoderFallback_m12520 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
 void Encoding_set_DecoderFallback_m12521 (Encoding_t3222 * __this, DecoderFallback_t3860 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
 EncoderFallback_t3867 * Encoding_get_EncoderFallback_m12522 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
 void Encoding_SetFallbackInternal_m12523 (Encoding_t3222 * __this, EncoderFallback_t3867 * ___e, DecoderFallback_t3860 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
 bool Encoding_Equals_m12524 (Encoding_t3222 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
 int32_t Encoding_GetByteCount_m12525 (Encoding_t3222 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
 int32_t Encoding_GetByteCount_m12526 (Encoding_t3222 * __this, CharU5BU5D_t311* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Encoding_GetBytes_m8856 (Encoding_t3222 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
 ByteU5BU5D_t961* Encoding_GetBytes_m8897 (Encoding_t3222 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
 ByteU5BU5D_t961* Encoding_GetBytes_m12527 (Encoding_t3222 * __this, CharU5BU5D_t311* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
 ByteU5BU5D_t961* Encoding_GetBytes_m7962 (Encoding_t3222 * __this, CharU5BU5D_t311* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
 CharU5BU5D_t311* Encoding_GetChars_m12528 (Encoding_t3222 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
 Decoder_t3566 * Encoding_GetDecoder_m12529 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
 Object_t * Encoding_InvokeI18N_m12530 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t126* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
 Encoding_t3222 * Encoding_GetEncoding_m12531 (Object_t * __this/* static, unused */, int32_t ___codepage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
 Object_t * Encoding_Clone_m12532 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
 Encoding_t3222 * Encoding_GetEncoding_m12533 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
 int32_t Encoding_GetHashCode_m12534 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32)
// System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32)
// System.Byte[] System.Text.Encoding::GetPreamble()
 ByteU5BU5D_t961* Encoding_GetPreamble_m12535 (Encoding_t3222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Encoding_GetString_m12536 (Encoding_t3222 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
 String_t* Encoding_GetString_m7775 (Encoding_t3222 * __this, ByteU5BU5D_t961* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
 Encoding_t3222 * Encoding_get_ASCII_m7879 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
 Encoding_t3222 * Encoding_get_BigEndianUnicode_m8855 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
 String_t* Encoding_InternalCodePage_m12537 (Object_t * __this/* static, unused */, int32_t* ___code_page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
 Encoding_t3222 * Encoding_get_Default_m12538 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
 Encoding_t3222 * Encoding_get_ISOLatin1_m12539 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
 Encoding_t3222 * Encoding_get_UTF7_m8864 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
 Encoding_t3222 * Encoding_get_UTF8_m7774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
 Encoding_t3222 * Encoding_get_UTF8Unmarked_m12540 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
 Encoding_t3222 * Encoding_get_UTF8UnmarkedUnsafe_m12541 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
 Encoding_t3222 * Encoding_get_Unicode_m12542 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
 Encoding_t3222 * Encoding_get_UTF32_m12543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
 Encoding_t3222 * Encoding_get_BigEndianUTF32_m12544 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t Encoding_GetByteCount_m12545 (Encoding_t3222 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t Encoding_GetBytes_m12546 (Encoding_t3222 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
