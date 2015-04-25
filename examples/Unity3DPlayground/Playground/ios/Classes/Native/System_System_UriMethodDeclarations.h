#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri
struct Uri_t2985;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t3125;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.UriKind
#include "System_System_UriKind.h"

// System.Void System.Uri::.ctor(System.String)
 void Uri__ctor_m7412 (Uri_t2985 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri__ctor_m7413 (Uri_t2985 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
 void Uri__ctor_m7414 (Uri_t2985 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
 void Uri__cctor_m7415 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7416 (Uri_t2985 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
 String_t* Uri_get_AbsoluteUri_m7417 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
 String_t* Uri_get_Authority_m7418 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
 String_t* Uri_get_Host_m7419 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
 bool Uri_get_IsFile_m7420 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
 bool Uri_get_IsLoopback_m7421 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
 bool Uri_get_IsUnc_m7422 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
 String_t* Uri_get_Scheme_m7423 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
 bool Uri_get_IsAbsoluteUri_m7424 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
 int32_t Uri_CheckHostName_m7425 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
 bool Uri_IsIPv4Address_m7426 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
 bool Uri_IsDomainAddress_m7427 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
 bool Uri_CheckSchemeName_m7428 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
 bool Uri_IsAlpha_m7429 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
 bool Uri_Equals_m7430 (Uri_t2985 * __this, Object_t * ___comparant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
 bool Uri_InternalEquals_m7431 (Uri_t2985 * __this, Uri_t2985 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
 int32_t Uri_GetHashCode_m7432 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
 String_t* Uri_GetLeftPart_m7433 (Uri_t2985 * __this, int32_t ___part, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
 int32_t Uri_FromHex_m7434 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
 String_t* Uri_HexEscape_m7435 (Object_t * __this/* static, unused */, uint16_t ___character, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
 bool Uri_IsHexDigit_m7436 (Object_t * __this/* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
 bool Uri_IsHexEncoding_m7437 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
 void Uri_AppendQueryAndFragment_m7438 (Uri_t2985 * __this, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
 String_t* Uri_ToString_m7439 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
 String_t* Uri_EscapeString_m7440 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
 String_t* Uri_EscapeString_m7441 (Object_t * __this/* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
 void Uri_ParseUri_m7442 (Uri_t2985 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
 String_t* Uri_Unescape_m7443 (Uri_t2985 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
 String_t* Uri_Unescape_m7444 (Object_t * __this/* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
 void Uri_ParseAsWindowsUNC_m7445 (Uri_t2985 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
 String_t* Uri_ParseAsWindowsAbsoluteFilePath_m7446 (Uri_t2985 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
 void Uri_ParseAsUnixAbsoluteFilePath_m7447 (Uri_t2985 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
 void Uri_Parse_m7448 (Uri_t2985 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
 String_t* Uri_ParseNoExceptions_m7449 (Uri_t2985 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
 bool Uri_CompactEscaped_m7450 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
 String_t* Uri_Reduce_m7451 (Object_t * __this/* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
 uint16_t Uri_HexUnescapeMultiByte_m7452 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
 String_t* Uri_GetSchemeDelimiter_m7453 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
 int32_t Uri_GetDefaultPort_m7454 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
 String_t* Uri_GetOpaqueWiseSchemeDelimiter_m7455 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
 bool Uri_IsPredefinedScheme_m7456 (Object_t * __this/* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
 UriParser_t3125 * Uri_get_Parser_m7457 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
 void Uri_EnsureAbsoluteUri_m7458 (Uri_t2985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
 bool Uri_op_Equality_m7459 (Object_t * __this/* static, unused */, Uri_t2985 * ___u1, Uri_t2985 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
