#pragma once
// System.Net.WebResponse
struct WebResponse_t1066;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Net.WebException
struct WebException_t1067  : public InvalidOperationException_t1661
{
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t1066 * ___response_12;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status_13;
};
