#pragma once
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1570;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1571;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1572;
// System.Net.Security.AuthenticatedStream
#include "System_System_Net_Security_AuthenticatedStream.h"
// System.Net.Security.SslStream
struct SslStream_t1566  : public AuthenticatedStream_t1562
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t1570 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t1571 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t1572 * ___selection_callback_5;
};
