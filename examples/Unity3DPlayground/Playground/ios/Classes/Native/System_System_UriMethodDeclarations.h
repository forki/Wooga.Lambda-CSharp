#pragma once

// System.Uri
struct Uri_t1041;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t1799;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t316;
// System.IO.MemoryStream
struct MemoryStream_t1679;
// System.Text.Encoding
struct Encoding_t1068;
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.UriKind
#include "System_System_UriKind.h"

// System.Void System.Uri::.ctor(System.String)
 void Uri__ctor_m2984 (Uri_t1041 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri__ctor_m6007 (Uri_t1041 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
 void Uri__ctor_m6008 (Uri_t1041 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
 void Uri__ctor_m6009 (Uri_t1041 * __this, Uri_t1041 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
 void Uri__cctor_m6010 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m6011 (Uri_t1041 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
 void Uri_Merge_m6012 (Uri_t1041 * __this, Uri_t1041 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
 String_t* Uri_get_AbsolutePath_m6013 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
 String_t* Uri_get_AbsoluteUri_m6014 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
 String_t* Uri_get_Authority_m6015 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
 String_t* Uri_get_Host_m6016 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
 int32_t Uri_get_HostNameType_m6017 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsDefaultPort()
 bool Uri_get_IsDefaultPort_m6018 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
 bool Uri_get_IsFile_m6019 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
 bool Uri_get_IsLoopback_m6020 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
 bool Uri_get_IsUnc_m6021 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
 String_t* Uri_get_LocalPath_m6022 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
 String_t* Uri_get_PathAndQuery_m6023 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
 int32_t Uri_get_Port_m6024 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
 String_t* Uri_get_Query_m6025 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
 String_t* Uri_get_Scheme_m6026 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
 bool Uri_get_IsAbsoluteUri_m6027 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
 int32_t Uri_CheckHostName_m6028 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
 bool Uri_IsIPv4Address_m6029 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
 bool Uri_IsDomainAddress_m6030 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
 bool Uri_CheckSchemeName_m6031 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
 bool Uri_IsAlpha_m6032 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
 bool Uri_Equals_m6033 (Uri_t1041 * __this, Object_t * ___comparant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
 bool Uri_InternalEquals_m6034 (Uri_t1041 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
 int32_t Uri_GetHashCode_m6035 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
 String_t* Uri_GetLeftPart_m6036 (Uri_t1041 * __this, int32_t ___part, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
 int32_t Uri_FromHex_m6037 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
 String_t* Uri_HexEscape_m6038 (Object_t * __this/* static, unused */, uint16_t ___character, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
 bool Uri_IsHexDigit_m6039 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
 bool Uri_IsHexEncoding_m6040 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
 void Uri_AppendQueryAndFragment_m6041 (Uri_t1041 * __this, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
 String_t* Uri_ToString_m6042 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
 String_t* Uri_EscapeString_m6043 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
 String_t* Uri_EscapeString_m6044 (Object_t * __this/* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
 void Uri_ParseUri_m6045 (Uri_t1041 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
 String_t* Uri_Unescape_m6046 (Uri_t1041 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
 String_t* Uri_Unescape_m6047 (Object_t * __this/* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
 void Uri_ParseAsWindowsUNC_m6048 (Uri_t1041 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
 String_t* Uri_ParseAsWindowsAbsoluteFilePath_m6049 (Uri_t1041 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
 void Uri_ParseAsUnixAbsoluteFilePath_m6050 (Uri_t1041 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
 void Uri_Parse_m6051 (Uri_t1041 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
 String_t* Uri_ParseNoExceptions_m6052 (Uri_t1041 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
 bool Uri_CompactEscaped_m6053 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
 String_t* Uri_Reduce_m6054 (Object_t * __this/* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
 uint16_t Uri_HexUnescapeMultiByte_m6055 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
 String_t* Uri_GetSchemeDelimiter_m6056 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
 int32_t Uri_GetDefaultPort_m6057 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
 String_t* Uri_GetOpaqueWiseSchemeDelimiter_m6058 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
 bool Uri_IsPredefinedScheme_m6059 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
 UriParser_t1799 * Uri_get_Parser_m6060 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
 String_t* Uri_UnescapeDataString_m6061 (Object_t * __this/* static, unused */, String_t* ___stringToUnescape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
 int32_t Uri_GetInt_m6062 (Object_t * __this/* static, unused */, uint8_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
 int32_t Uri_GetChar_m6063 (Object_t * __this/* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
 CharU5BU5D_t316* Uri_GetChars_m6064 (Object_t * __this/* static, unused */, MemoryStream_t1679 * ___b, Encoding_t1068 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
 void Uri_EnsureAbsoluteUri_m6065 (Uri_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
 bool Uri_op_Equality_m6066 (Object_t * __this/* static, unused */, Uri_t1041 * ___u1, Uri_t1041 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
 bool Uri_op_Inequality_m6067 (Object_t * __this/* static, unused */, Uri_t1041 * ___u1, Uri_t1041 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
