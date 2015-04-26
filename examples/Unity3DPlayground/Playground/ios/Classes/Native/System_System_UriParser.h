#pragma once
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1737;
// System.Object
#include "mscorlib_System_Object.h"
// System.UriParser
struct UriParser_t1799  : public Object_t
{
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;
};
struct UriParser_t1799_StaticFields{
	// System.Object System.UriParser::lock_object
	Object_t * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t1534 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1737 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1737 * ___auth_regex_5;
};
