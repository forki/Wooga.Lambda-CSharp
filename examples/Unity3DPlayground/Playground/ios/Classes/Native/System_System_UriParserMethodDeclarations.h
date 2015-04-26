#pragma once

// System.UriParser
struct UriParser_t1799;
// System.String
struct String_t;
// System.Uri
struct Uri_t1041;
// System.UriFormatException
struct UriFormatException_t1803;
// System.Collections.Hashtable
struct Hashtable_t1534;

// System.Void System.UriParser::.ctor()
 void UriParser__ctor_m6072 (UriParser_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
 void UriParser__cctor_m6073 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
 void UriParser_InitializeAndValidate_m6074 (UriParser_t1799 * __this, Uri_t1041 * ___uri, UriFormatException_t1803 ** ___parsingError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
 void UriParser_OnRegister_m6075 (UriParser_t1799 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
 void UriParser_set_SchemeName_m6076 (UriParser_t1799 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
 int32_t UriParser_get_DefaultPort_m6077 (UriParser_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
 void UriParser_set_DefaultPort_m6078 (UriParser_t1799 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
 void UriParser_CreateDefaults_m6079 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
 void UriParser_InternalRegister_m6080 (Object_t * __this/* static, unused */, Hashtable_t1534 * ___table, UriParser_t1799 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
 UriParser_t1799 * UriParser_GetParser_m6081 (Object_t * __this/* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
