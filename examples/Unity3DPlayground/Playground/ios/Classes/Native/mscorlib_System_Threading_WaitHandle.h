#pragma once
#include <stdint.h>
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3431;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
struct WaitHandle_t527  : public MarshalByRefObject_t3011
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3431 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;
};
struct WaitHandle_t527_StaticFields{
	// System.Int32 System.Threading.WaitHandle::WaitTimeout
	int32_t ___WaitTimeout_1;
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t31 ___InvalidHandle_3;
};
