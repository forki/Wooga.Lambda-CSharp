#pragma once

// System.Net.ServicePointManager
struct ServicePointManager_t1672;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1671;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1571;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Uri
struct Uri_t1041;
// System.Net.IWebProxy
struct IWebProxy_t1629;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
 void ServicePointManager__cctor_m5185 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
 Object_t * ServicePointManager_get_CertificatePolicy_m5186 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
 bool ServicePointManager_get_CheckCertificateRevocationList_m5187 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
 int32_t ServicePointManager_get_SecurityProtocol_m5188 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
 RemoteCertificateValidationCallback_t1571 * ServicePointManager_get_ServerCertificateValidationCallback_m5189 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
 ServicePoint_t1616 * ServicePointManager_FindServicePoint_m5190 (Object_t * __this/* static, unused */, Uri_t1041 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
 void ServicePointManager_RecycleServicePoints_m5191 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
