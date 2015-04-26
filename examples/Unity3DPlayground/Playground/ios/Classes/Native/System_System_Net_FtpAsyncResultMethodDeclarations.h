#pragma once

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t1634;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.Exception
struct Exception_t121;
// System.Net.FtpWebResponse
struct FtpWebResponse_t1633;
// System.IO.Stream
struct Stream_t1049;
// System.AsyncCallback
struct AsyncCallback_t189;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FtpAsyncResult__ctor_m4880 (FtpAsyncResult_t1634 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
 Object_t * FtpAsyncResult_get_AsyncState_m4881 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * FtpAsyncResult_get_AsyncWaitHandle_m4882 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
 bool FtpAsyncResult_get_IsCompleted_m4883 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
 bool FtpAsyncResult_get_GotException_m4884 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
 Exception_t121 * FtpAsyncResult_get_Exception_m4885 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
 FtpWebResponse_t1633 * FtpAsyncResult_get_Response_m4886 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpAsyncResult::get_Stream()
 Stream_t1049 * FtpAsyncResult_get_Stream_m4887 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
 void FtpAsyncResult_set_Stream_m4888 (FtpAsyncResult_t1634 * __this, Stream_t1049 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
 bool FtpAsyncResult_WaitUntilComplete_m4889 (FtpAsyncResult_t1634 * __this, int32_t ___timeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
 void FtpAsyncResult_SetCompleted_m4890 (FtpAsyncResult_t1634 * __this, bool ___synch, Exception_t121 * ___exc, FtpWebResponse_t1633 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
 void FtpAsyncResult_SetCompleted_m4891 (FtpAsyncResult_t1634 * __this, bool ___synch, FtpWebResponse_t1633 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
 void FtpAsyncResult_SetCompleted_m4892 (FtpAsyncResult_t1634 * __this, bool ___synch, Exception_t121 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
 void FtpAsyncResult_DoCallback_m4893 (FtpAsyncResult_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
