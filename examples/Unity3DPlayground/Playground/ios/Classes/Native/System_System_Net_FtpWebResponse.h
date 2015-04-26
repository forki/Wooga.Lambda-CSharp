#pragma once
// System.IO.Stream
struct Stream_t1049;
// System.Uri
struct Uri_t1041;
// System.String
struct String_t;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1637;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpWebResponse
struct FtpWebResponse_t1633  : public WebResponse_t1066
{
	// System.IO.Stream System.Net.FtpWebResponse::stream
	Stream_t1049 * ___stream_1;
	// System.Uri System.Net.FtpWebResponse::uri
	Uri_t1041 * ___uri_2;
	// System.Net.FtpStatusCode System.Net.FtpWebResponse::statusCode
	int32_t ___statusCode_3;
	// System.DateTime System.Net.FtpWebResponse::lastModified
	DateTime_t1141  ___lastModified_4;
	// System.String System.Net.FtpWebResponse::bannerMessage
	String_t* ___bannerMessage_5;
	// System.String System.Net.FtpWebResponse::welcomeMessage
	String_t* ___welcomeMessage_6;
	// System.String System.Net.FtpWebResponse::exitMessage
	String_t* ___exitMessage_7;
	// System.String System.Net.FtpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.String System.Net.FtpWebResponse::method
	String_t* ___method_9;
	// System.Boolean System.Net.FtpWebResponse::disposed
	bool ___disposed_10;
	// System.Net.FtpWebRequest System.Net.FtpWebResponse::request
	FtpWebRequest_t1637 * ___request_11;
	// System.Int64 System.Net.FtpWebResponse::contentLength
	int64_t ___contentLength_12;
};
