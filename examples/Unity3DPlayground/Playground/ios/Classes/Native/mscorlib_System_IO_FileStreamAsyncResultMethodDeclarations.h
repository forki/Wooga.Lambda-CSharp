#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t3582;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IAsyncResult
struct IAsyncResult_t183;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m10868 (FileStreamAsyncResult_t3582 * __this, AsyncCallback_t184 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m10869 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m10870 (FileStreamAsyncResult_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t527 * FileStreamAsyncResult_get_AsyncWaitHandle_m10871 (FileStreamAsyncResult_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m10872 (FileStreamAsyncResult_t3582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
