#pragma once
// System.Threading.ManualResetEvent
struct ManualResetEvent_t624;
// System.IO.Stream
struct Stream_t1049;
// Mono.Security.Protocol.Tls.Context
struct Context_t1954;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1962  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t1049 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t1954 * ___context_2;
};
struct RecordProtocol_t1962_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t624 * ___record_processing_0;
};
