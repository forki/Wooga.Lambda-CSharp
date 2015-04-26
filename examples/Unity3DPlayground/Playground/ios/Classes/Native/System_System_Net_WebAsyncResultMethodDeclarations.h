#pragma once

// System.Net.WebAsyncResult
struct WebAsyncResult_t1652;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.Exception
struct Exception_t121;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.IO.Stream
struct Stream_t1049;
// System.Net.HttpWebResponse
struct HttpWebResponse_t1046;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void WebAsyncResult__ctor_m5200 (WebAsyncResult_t1652 * __this, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
 void WebAsyncResult__ctor_m5201 (WebAsyncResult_t1652 * __this, HttpWebRequest_t1056 * ___request, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
 void WebAsyncResult__ctor_m5202 (WebAsyncResult_t1652 * __this, AsyncCallback_t189 * ___cb, Object_t * ___state, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
 void WebAsyncResult_SetCompleted_m5203 (WebAsyncResult_t1652 * __this, bool ___synch, Exception_t121 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
 void WebAsyncResult_Reset_m5204 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
 void WebAsyncResult_SetCompleted_m5205 (WebAsyncResult_t1652 * __this, bool ___synch, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
 void WebAsyncResult_SetCompleted_m5206 (WebAsyncResult_t1652 * __this, bool ___synch, Stream_t1049 * ___writeStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
 void WebAsyncResult_SetCompleted_m5207 (WebAsyncResult_t1652 * __this, bool ___synch, HttpWebResponse_t1046 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
 void WebAsyncResult_DoCallback_m5208 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
 void WebAsyncResult_WaitUntilComplete_m5209 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
 bool WebAsyncResult_WaitUntilComplete_m5210 (WebAsyncResult_t1652 * __this, int32_t ___timeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
 Object_t * WebAsyncResult_get_AsyncState_m5211 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * WebAsyncResult_get_AsyncWaitHandle_m5212 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
 bool WebAsyncResult_get_IsCompleted_m5213 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
 bool WebAsyncResult_get_GotException_m5214 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
 Exception_t121 * WebAsyncResult_get_Exception_m5215 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
 int32_t WebAsyncResult_get_NBytes_m5216 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
 void WebAsyncResult_set_NBytes_m5217 (WebAsyncResult_t1652 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
 Object_t * WebAsyncResult_get_InnerAsyncResult_m5218 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
 void WebAsyncResult_set_InnerAsyncResult_m5219 (WebAsyncResult_t1652 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebAsyncResult::get_WriteStream()
 Stream_t1049 * WebAsyncResult_get_WriteStream_m5220 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
 HttpWebResponse_t1046 * WebAsyncResult_get_Response_m5221 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
 ByteU5BU5D_t1071* WebAsyncResult_get_Buffer_m5222 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
 int32_t WebAsyncResult_get_Offset_m5223 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
 int32_t WebAsyncResult_get_Size_m5224 (WebAsyncResult_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
