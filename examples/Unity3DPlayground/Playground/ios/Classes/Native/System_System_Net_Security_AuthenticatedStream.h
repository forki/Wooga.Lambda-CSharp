#pragma once
// System.IO.Stream
struct Stream_t1049;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t1562  : public Stream_t1049
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t1049 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;
};
