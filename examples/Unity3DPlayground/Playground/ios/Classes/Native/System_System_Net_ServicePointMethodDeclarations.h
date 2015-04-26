#pragma once

// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Uri
struct Uri_t1041;
// System.Version
struct Version_t1648;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.Net.IPHostEntry
struct IPHostEntry_t1623;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1664;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1653;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Net.Sockets.Socket
struct Socket_t1576;
// System.Net.IPEndPoint
struct IPEndPoint_t1644;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
 void ServicePoint__ctor_m5148 (ServicePoint_t1616 * __this, Uri_t1041 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
 Uri_t1041 * ServicePoint_get_Address_m5149 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
 int32_t ServicePoint_get_ConnectionLimit_m5150 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
 int32_t ServicePoint_get_CurrentConnections_m5151 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
 DateTime_t1141  ServicePoint_get_IdleSince_m5152 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
 void ServicePoint_set_IdleSince_m5153 (ServicePoint_t1616 * __this, DateTime_t1141  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
 Version_t1648 * ServicePoint_get_ProtocolVersion_m5154 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
 void ServicePoint_set_Expect100Continue_m5155 (ServicePoint_t1616 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
 bool ServicePoint_get_UseNagleAlgorithm_m5156 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
 void ServicePoint_set_UseNagleAlgorithm_m5157 (ServicePoint_t1616 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
 bool ServicePoint_get_SendContinue_m5158 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
 void ServicePoint_set_SendContinue_m5159 (ServicePoint_t1616 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
 bool ServicePoint_get_UsesProxy_m5160 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
 void ServicePoint_set_UsesProxy_m5161 (ServicePoint_t1616 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
 bool ServicePoint_get_UseConnect_m5162 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
 void ServicePoint_set_UseConnect_m5163 (ServicePoint_t1616 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
 bool ServicePoint_get_AvailableForRecycling_m5164 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
 Hashtable_t1534 * ServicePoint_get_Groups_m5165 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
 IPHostEntry_t1623 * ServicePoint_get_HostEntry_m5166 (ServicePoint_t1616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
 void ServicePoint_SetVersion_m5167 (ServicePoint_t1616 * __this, Version_t1648 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
 WebConnectionGroup_t1664 * ServicePoint_GetConnectionGroup_m5168 (ServicePoint_t1616 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
 EventHandler_t1653 * ServicePoint_SendRequest_m5169 (ServicePoint_t1616 * __this, HttpWebRequest_t1056 * ___request, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
 void ServicePoint_SetCertificates_m5170 (ServicePoint_t1616 * __this, X509Certificate_t1569 * ___client, X509Certificate_t1569 * ___server, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
 bool ServicePoint_CallEndPointDelegate_m5171 (ServicePoint_t1616 * __this, Socket_t1576 * ___sock, IPEndPoint_t1644 * ___remote, MethodInfo* method) IL2CPP_METHOD_ATTR;
