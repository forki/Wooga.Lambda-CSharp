#pragma once

// System.Threading.Mutex
struct Mutex_t2341;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
 void Mutex__ctor_m11136 (Mutex_t2341 * __this, bool ___initiallyOwned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
 IntPtr_t37 Mutex_CreateMutex_internal_m11137 (Object_t * __this/* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
 bool Mutex_ReleaseMutex_internal_m11138 (Object_t * __this/* static, unused */, IntPtr_t37 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
 void Mutex_ReleaseMutex_m11139 (Mutex_t2341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
