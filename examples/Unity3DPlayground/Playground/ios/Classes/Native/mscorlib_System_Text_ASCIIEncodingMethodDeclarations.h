#pragma once

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t2489;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2490;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2491;
// System.Text.Decoder
struct Decoder_t2208;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m10875 (ASCIIEncoding_t2489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m10876 (ASCIIEncoding_t2489 * __this, CharU5BU5D_t316* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m10877 (ASCIIEncoding_t2489 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10878 (ASCIIEncoding_t2489 * __this, CharU5BU5D_t316* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m10879 (ASCIIEncoding_t2489 * __this, CharU5BU5D_t316* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2490 ** ___buffer, CharU5BU5D_t316** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10880 (ASCIIEncoding_t2489 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m10881 (ASCIIEncoding_t2489 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2490 ** ___buffer, CharU5BU5D_t316** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m10882 (ASCIIEncoding_t2489 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m10883 (ASCIIEncoding_t2489 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t316* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m10884 (ASCIIEncoding_t2489 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t316* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t2491 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m10885 (ASCIIEncoding_t2489 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m10886 (ASCIIEncoding_t2489 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m10887 (ASCIIEncoding_t2489 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10888 (ASCIIEncoding_t2489 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m10889 (ASCIIEncoding_t2489 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t2208 * ASCIIEncoding_GetDecoder_m10890 (ASCIIEncoding_t2489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
