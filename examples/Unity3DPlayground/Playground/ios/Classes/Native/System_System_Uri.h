#pragma once
// System.String
struct String_t;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t1802;
// System.UriParser
struct UriParser_t1799;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1162;
// System.Object
#include "mscorlib_System_Object.h"
// System.Uri
struct Uri_t1041  : public Object_t
{
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t1799 * ___parser_30;
};
struct Uri_t1041_StaticFields{
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t1802* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map16_35;
};
