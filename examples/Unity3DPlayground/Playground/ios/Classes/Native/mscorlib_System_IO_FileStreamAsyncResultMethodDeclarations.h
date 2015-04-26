#pragma once

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t2221;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IAsyncResult
struct IAsyncResult_t188;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m9374 (FileStreamAsyncResult_t2221 * __this, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m9375 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m9376 (FileStreamAsyncResult_t2221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * FileStreamAsyncResult_get_AsyncWaitHandle_m9377 (FileStreamAsyncResult_t2221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m9378 (FileStreamAsyncResult_t2221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
