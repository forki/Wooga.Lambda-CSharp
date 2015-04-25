#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t3590;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.Exception
struct Exception_t115;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
 void StreamAsyncResult__ctor_m10953 (StreamAsyncResult_t3590 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
 void StreamAsyncResult_SetComplete_m10954 (StreamAsyncResult_t3590 * __this, Exception_t115 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
 void StreamAsyncResult_SetComplete_m10955 (StreamAsyncResult_t3590 * __this, Exception_t115 * ___e, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
 Object_t * StreamAsyncResult_get_AsyncState_m10956 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t527 * StreamAsyncResult_get_AsyncWaitHandle_m10957 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
 bool StreamAsyncResult_get_IsCompleted_m10958 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
 Exception_t115 * StreamAsyncResult_get_Exception_m10959 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
 int32_t StreamAsyncResult_get_NBytes_m10960 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
 bool StreamAsyncResult_get_Done_m10961 (StreamAsyncResult_t3590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
 void StreamAsyncResult_set_Done_m10962 (StreamAsyncResult_t3590 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
