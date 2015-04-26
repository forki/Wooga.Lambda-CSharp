#pragma once

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1984;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1952;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
 void TlsException__ctor_m7335 (TlsException_t1984 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TlsException__ctor_m7336 (TlsException_t1984 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void TlsException__ctor_m7337 (TlsException_t1984 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
 void TlsException__ctor_m7338 (TlsException_t1984 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
 void TlsException__ctor_m7339 (TlsException_t1984 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
 void TlsException__ctor_m7340 (TlsException_t1984 * __this, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
 Alert_t1952 * TlsException_get_Alert_m7341 (TlsException_t1984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
