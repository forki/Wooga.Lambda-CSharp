#pragma once

// System.Text.Latin1Encoding
struct Latin1Encoding_t2505;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2490;

// System.Void System.Text.Latin1Encoding::.ctor()
 void Latin1Encoding__ctor_m10985 (Latin1Encoding_t2505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetByteCount_m10986 (Latin1Encoding_t2505 * __this, CharU5BU5D_t316* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
 int32_t Latin1Encoding_GetByteCount_m10987 (Latin1Encoding_t2505 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m10988 (Latin1Encoding_t2505 * __this, CharU5BU5D_t316* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m10989 (Latin1Encoding_t2505 * __this, CharU5BU5D_t316* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2490 ** ___buffer, CharU5BU5D_t316** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m10990 (Latin1Encoding_t2505 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m10991 (Latin1Encoding_t2505 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2490 ** ___buffer, CharU5BU5D_t316** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetCharCount_m10992 (Latin1Encoding_t2505 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t Latin1Encoding_GetChars_m10993 (Latin1Encoding_t2505 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t316* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
 int32_t Latin1Encoding_GetMaxByteCount_m10994 (Latin1Encoding_t2505 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
 int32_t Latin1Encoding_GetMaxCharCount_m10995 (Latin1Encoding_t2505 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Latin1Encoding_GetString_m10996 (Latin1Encoding_t2505 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
 String_t* Latin1Encoding_GetString_m10997 (Latin1Encoding_t2505 * __this, ByteU5BU5D_t1071* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
