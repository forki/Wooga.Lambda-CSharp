#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriParser
struct UriParser_t3125;
// System.String
struct String_t;
// System.Uri
struct Uri_t2985;
// System.UriFormatException
struct UriFormatException_t3129;
// System.Collections.Hashtable
struct Hashtable_t2960;

// System.Void System.UriParser::.ctor()
 void UriParser__ctor_m7464 (UriParser_t3125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
 void UriParser__cctor_m7465 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
 void UriParser_InitializeAndValidate_m7466 (UriParser_t3125 * __this, Uri_t2985 * ___uri, UriFormatException_t3129 ** ___parsingError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
 void UriParser_OnRegister_m7467 (UriParser_t3125 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
 void UriParser_set_SchemeName_m7468 (UriParser_t3125 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
 int32_t UriParser_get_DefaultPort_m7469 (UriParser_t3125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
 void UriParser_set_DefaultPort_m7470 (UriParser_t3125 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
 void UriParser_CreateDefaults_m7471 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
 void UriParser_InternalRegister_m7472 (Object_t * __this/* static, unused */, Hashtable_t2960 * ___table, UriParser_t3125 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
 UriParser_t3125 * UriParser_GetParser_m7473 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
