#pragma once
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.Version
struct Version_t1648;
// System.IO.Stream
struct Stream_t1049;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionData
struct WebConnectionData_t1655  : public Object_t
{
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t1056 * ___request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t1051 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t1648 * ___Version_4;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t1049 * ___stream_5;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge_6;
};
