#pragma once

// System.Text.Encoding
struct Encoding_t1068;
// System.Text.DecoderFallback
struct DecoderFallback_t2492;
// System.Text.EncoderFallback
struct EncoderFallback_t2499;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t316;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Text.Decoder
struct Decoder_t2208;
// System.Object[]
struct ObjectU5BU5D_t149;

// System.Void System.Text.Encoding::.ctor()
 void Encoding__ctor_m10956 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
 void Encoding__ctor_m10957 (Encoding_t1068 * __this, int32_t ___codePage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
 void Encoding__cctor_m10958 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
 String_t* Encoding___m10959 (Object_t * __this/* static, unused */, String_t* ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
 bool Encoding_get_IsReadOnly_m10960 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
 DecoderFallback_t2492 * Encoding_get_DecoderFallback_m10961 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
 void Encoding_set_DecoderFallback_m10962 (Encoding_t1068 * __this, DecoderFallback_t2492 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
 EncoderFallback_t2499 * Encoding_get_EncoderFallback_m10963 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
 void Encoding_SetFallbackInternal_m10964 (Encoding_t1068 * __this, EncoderFallback_t2499 * ___e, DecoderFallback_t2492 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
 bool Encoding_Equals_m10965 (Encoding_t1068 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
 int32_t Encoding_GetByteCount_m10966 (Encoding_t1068 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
 int32_t Encoding_GetByteCount_m10967 (Encoding_t1068 * __this, CharU5BU5D_t316* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Encoding_GetBytes_m7515 (Encoding_t1068 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1071* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
 ByteU5BU5D_t1071* Encoding_GetBytes_m3005 (Encoding_t1068 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
 ByteU5BU5D_t1071* Encoding_GetBytes_m10968 (Encoding_t1068 * __this, CharU5BU5D_t316* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
 ByteU5BU5D_t1071* Encoding_GetBytes_m6663 (Encoding_t1068 * __this, CharU5BU5D_t316* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
 CharU5BU5D_t316* Encoding_GetChars_m6670 (Encoding_t1068 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
 Decoder_t2208 * Encoding_GetDecoder_m10969 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
 Object_t * Encoding_InvokeI18N_m10970 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t149* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
 Encoding_t1068 * Encoding_GetEncoding_m10971 (Object_t * __this/* static, unused */, int32_t ___codepage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
 Encoding_t1068 * Encoding_GetEncoding_m10972 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
 int32_t Encoding_GetHashCode_m10973 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32)
// System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32)
// System.Byte[] System.Text.Encoding::GetPreamble()
 ByteU5BU5D_t1071* Encoding_GetPreamble_m10974 (Encoding_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Encoding_GetString_m10975 (Encoding_t1068 * __this, ByteU5BU5D_t1071* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
 String_t* Encoding_GetString_m6507 (Encoding_t1068 * __this, ByteU5BU5D_t1071* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
 Encoding_t1068 * Encoding_get_ASCII_m6307 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
 Encoding_t1068 * Encoding_get_BigEndianUnicode_m7514 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
 String_t* Encoding_InternalCodePage_m10976 (Object_t * __this/* static, unused */, int32_t* ___code_page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
 Encoding_t1068 * Encoding_get_Default_m6427 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
 Encoding_t1068 * Encoding_get_ISOLatin1_m10977 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
 Encoding_t1068 * Encoding_get_UTF7_m7523 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
 Encoding_t1068 * Encoding_get_UTF8_m3002 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
 Encoding_t1068 * Encoding_get_UTF8Unmarked_m10978 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
 Encoding_t1068 * Encoding_get_UTF8UnmarkedUnsafe_m10979 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
 Encoding_t1068 * Encoding_get_Unicode_m10980 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
 Encoding_t1068 * Encoding_get_UTF32_m10981 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
 Encoding_t1068 * Encoding_get_BigEndianUTF32_m10982 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t Encoding_GetByteCount_m10983 (Encoding_t1068 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t Encoding_GetBytes_m10984 (Encoding_t1068 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
