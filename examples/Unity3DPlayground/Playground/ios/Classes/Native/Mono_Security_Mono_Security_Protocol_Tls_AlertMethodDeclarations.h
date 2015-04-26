#pragma once

// Mono.Security.Protocol.Tls.Alert
struct Alert_t1952;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
 void Alert__ctor_m6986 (Alert_t1952 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void Alert__ctor_m6987 (Alert_t1952 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::get_Level()
 uint8_t Alert_get_Level_m6988 (Alert_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::get_Description()
 uint8_t Alert_get_Description_m6989 (Alert_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsWarning()
 bool Alert_get_IsWarning_m6990 (Alert_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsCloseNotify()
 bool Alert_get_IsCloseNotify_m6991 (Alert_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::inferAlertLevel()
 void Alert_inferAlertLevel_m6992 (Alert_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.Alert::GetAlertMessage(Mono.Security.Protocol.Tls.AlertDescription)
 String_t* Alert_GetAlertMessage_m6993 (Object_t * __this/* static, unused */, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
