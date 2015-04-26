#pragma once

// System.Net.FtpWebResponse
struct FtpWebResponse_t1633;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1049;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1637;
// System.Uri
struct Uri_t1041;
// System.Net.FtpStatus
struct FtpStatus_t1640;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
 void FtpWebResponse__ctor_m4989 (FtpWebResponse_t1633 * __this, FtpWebRequest_t1637 * ___request, Uri_t1041 * ___uri, String_t* ___method, bool ___keepAlive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
 void FtpWebResponse__ctor_m4990 (FtpWebResponse_t1633 * __this, FtpWebRequest_t1637 * ___request, Uri_t1041 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
 void FtpWebResponse__ctor_m4991 (FtpWebResponse_t1633 * __this, FtpWebRequest_t1637 * ___request, Uri_t1041 * ___uri, String_t* ___method, FtpStatus_t1640 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
 WebHeaderCollection_t1051 * FtpWebResponse_get_Headers_m4992 (FtpWebResponse_t1633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
 void FtpWebResponse_set_LastModified_m4993 (FtpWebResponse_t1633 * __this, DateTime_t1141  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
 void FtpWebResponse_set_BannerMessage_m4994 (FtpWebResponse_t1633 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
 void FtpWebResponse_set_WelcomeMessage_m4995 (FtpWebResponse_t1633 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
 void FtpWebResponse_Close_m4996 (FtpWebResponse_t1633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
 Stream_t1049 * FtpWebResponse_GetResponseStream_m4997 (FtpWebResponse_t1633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
 void FtpWebResponse_set_Stream_m4998 (FtpWebResponse_t1633 * __this, Stream_t1049 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
 void FtpWebResponse_UpdateStatus_m4999 (FtpWebResponse_t1633 * __this, FtpStatus_t1640 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
 void FtpWebResponse_CheckDisposed_m5000 (FtpWebResponse_t1633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
 bool FtpWebResponse_IsFinal_m5001 (FtpWebResponse_t1633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
