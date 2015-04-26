#pragma once

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t1562;
// System.IO.Stream
struct Stream_t1049;

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
 void AuthenticatedStream__ctor_m4531 (AuthenticatedStream_t1562 * __this, Stream_t1049 * ___innerStream, bool ___leaveInnerStreamOpen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
 Stream_t1049 * AuthenticatedStream_get_InnerStream_m4532 (AuthenticatedStream_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
 bool AuthenticatedStream_get_LeaveInnerStreamOpen_m4533 (AuthenticatedStream_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
 void AuthenticatedStream_Dispose_m4534 (AuthenticatedStream_t1562 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
