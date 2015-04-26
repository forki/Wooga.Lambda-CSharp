#pragma once

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t2514;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Text.Decoder
struct Decoder_t2208;
// System.Object
struct Object_t;

// System.Void System.Text.UnicodeEncoding::.ctor()
 void UnicodeEncoding__ctor_m11092 (UnicodeEncoding_t2514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m11093 (UnicodeEncoding_t2514 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m11094 (UnicodeEncoding_t2514 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m11095 (UnicodeEncoding_t2514 * __this, CharU5BU5D_t316* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
 int32_t UnicodeEncoding_GetByteCount_m11096 (UnicodeEncoding_t2514 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m11097 (UnicodeEncoding_t2514 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UnicodeEncoding_GetBytes_m11098 (UnicodeEncoding_t2514 * __this, CharU5BU5D_t316* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UnicodeEncoding_GetBytes_m11099 (UnicodeEncoding_t2514 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytes_m11100 (UnicodeEncoding_t2514 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytesInternal_m11101 (UnicodeEncoding_t2514 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetCharCount_m11102 (UnicodeEncoding_t2514 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UnicodeEncoding_GetChars_m11103 (UnicodeEncoding_t2514 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t316* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UnicodeEncoding_GetString_m11104 (UnicodeEncoding_t2514 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetCharsInternal_m11105 (UnicodeEncoding_t2514 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxByteCount_m11106 (UnicodeEncoding_t2514 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxCharCount_m11107 (UnicodeEncoding_t2514 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
 Decoder_t2208 * UnicodeEncoding_GetDecoder_m11108 (UnicodeEncoding_t2514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
 ByteU5BU5D_t1071* UnicodeEncoding_GetPreamble_m11109 (UnicodeEncoding_t2514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
 bool UnicodeEncoding_Equals_m11110 (UnicodeEncoding_t2514 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
 int32_t UnicodeEncoding_GetHashCode_m11111 (UnicodeEncoding_t2514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
 void UnicodeEncoding_CopyChars_m11112 (Object_t * __this/* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
