#pragma once

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t2229;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.Exception
struct Exception_t121;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
 void StreamAsyncResult__ctor_m9457 (StreamAsyncResult_t2229 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
 void StreamAsyncResult_SetComplete_m9458 (StreamAsyncResult_t2229 * __this, Exception_t121 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
 void StreamAsyncResult_SetComplete_m9459 (StreamAsyncResult_t2229 * __this, Exception_t121 * ___e, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
 Object_t * StreamAsyncResult_get_AsyncState_m9460 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * StreamAsyncResult_get_AsyncWaitHandle_m9461 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
 bool StreamAsyncResult_get_IsCompleted_m9462 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
 Exception_t121 * StreamAsyncResult_get_Exception_m9463 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
 int32_t StreamAsyncResult_get_NBytes_m9464 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
 bool StreamAsyncResult_get_Done_m9465 (StreamAsyncResult_t2229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
 void StreamAsyncResult_set_Done_m9466 (StreamAsyncResult_t2229 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
