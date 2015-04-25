#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.EventWaitHandle
struct EventWaitHandle_t3884;
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
 void EventWaitHandle__ctor_m12676 (EventWaitHandle_t3884 * __this, bool ___initialState, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
 bool EventWaitHandle_IsManualReset_m12677 (EventWaitHandle_t3884 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
 bool EventWaitHandle_Reset_m8926 (EventWaitHandle_t3884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
 bool EventWaitHandle_Set_m8924 (EventWaitHandle_t3884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
