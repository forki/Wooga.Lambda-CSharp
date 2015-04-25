#pragma once
#include <stdint.h>
// System.EventHandler
struct EventHandler_t3600;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3601  : public Stream_t3308
{
	// System.Int64 System.IO.UnmanagedMemoryStream::length
	int64_t ___length_1;
	// System.Boolean System.IO.UnmanagedMemoryStream::closed
	bool ___closed_2;
	// System.Int64 System.IO.UnmanagedMemoryStream::capacity
	int64_t ___capacity_3;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::fileaccess
	int32_t ___fileaccess_4;
	// System.IntPtr System.IO.UnmanagedMemoryStream::initial_pointer
	IntPtr_t31 ___initial_pointer_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::initial_position
	int64_t ___initial_position_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::current_position
	int64_t ___current_position_7;
	// System.EventHandler System.IO.UnmanagedMemoryStream::Closed
	EventHandler_t3600 * ___Closed_8;
};
