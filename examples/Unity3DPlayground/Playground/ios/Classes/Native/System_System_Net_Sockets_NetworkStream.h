#pragma once
// System.Net.Sockets.Socket
struct Socket_t1576;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.Sockets.NetworkStream
struct NetworkStream_t1577  : public Stream_t1049
{
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t1576 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;
};
