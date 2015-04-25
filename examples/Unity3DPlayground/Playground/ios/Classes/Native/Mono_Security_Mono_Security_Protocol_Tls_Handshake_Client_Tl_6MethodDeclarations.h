#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t3350;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerFinished__ctor_m8761 (TlsServerFinished_t3350 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
 void TlsServerFinished__cctor_m8762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
 void TlsServerFinished_Update_m8763 (TlsServerFinished_t3350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
 void TlsServerFinished_ProcessAsSsl3_m8764 (TlsServerFinished_t3350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
 void TlsServerFinished_ProcessAsTls1_m8765 (TlsServerFinished_t3350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
