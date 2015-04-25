#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t3348_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t3309_il2cpp_TypeInfo;
extern TypeInfo Void_t100_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t3225_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t3017_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t3305_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t3287_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t3284_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t2972_il2cpp_TypeInfo;
extern TypeInfo Boolean_t109_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t3289_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t3304_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t3332_il2cpp_TypeInfo;
extern TypeInfo Int64_t2431_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t3339_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t961_il2cpp_TypeInfo;
extern TypeInfo Byte_t1087_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t2983_il2cpp_TypeInfo;
extern TypeInfo Int32_t104_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t3280_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t156_il2cpp_TypeInfo;
extern TypeInfo Exception_t115_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t3290_il2cpp_TypeInfo;
extern TypeInfo Regex_t3063_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t3071_il2cpp_TypeInfo;
extern TypeInfo Match_t3062_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t3069_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t921_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t104_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m8713_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m8718_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m8714_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m8416_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m8675_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m8684_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m8751_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m8210_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m8697_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m8698_MethodInfo;
extern MethodInfo X509Certificate__ctor_m7785_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m8213_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m8753_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m7770_MethodInfo;
extern MethodInfo Context_get_Negotiating_m8460_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m8530_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m8323_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m7844_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m7845_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m8278_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m8269_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m8281_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m8272_MethodInfo;
extern MethodInfo ArrayList_Contains_m8908_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m8283_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m8285_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m8376_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m8567_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m8571_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m8537_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m8538_MethodInfo;
extern MethodInfo String_Format_m474_MethodInfo;
extern MethodInfo String_Concat_m496_MethodInfo;
extern MethodInfo TlsException__ctor_m8669_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m7780_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m7874_MethodInfo;
extern MethodInfo X509Certificate__ctor_m8943_MethodInfo;
extern MethodInfo ArrayList__ctor_m7667_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m8752_MethodInfo;
extern MethodInfo ArrayList_Add_m7677_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m8754_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m8211_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m8218_MethodInfo;
extern MethodInfo X509Chain__ctor_m8221_MethodInfo;
extern MethodInfo X509Chain_Build_m8224_MethodInfo;
extern MethodInfo X509Chain_get_Status_m8222_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m280_MethodInfo;
extern MethodInfo ArrayList_ToArray_m7841_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m8570_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m8417_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m8657_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m8287_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m8289_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m8756_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m8290_MethodInfo;
extern MethodInfo String_op_Equality_m282_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m8197_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m8755_MethodInfo;
extern MethodInfo Regex__ctor_m7093_MethodInfo;
extern MethodInfo Regex_Matches_m7109_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m7084_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m7086_MethodInfo;
extern MethodInfo Group_get_Success_m7062_MethodInfo;
extern MethodInfo Match_get_Groups_m7076_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m7066_MethodInfo;
extern MethodInfo Capture_get_Value_m7047_MethodInfo;
extern MethodInfo String_ToString_m6247_MethodInfo;
extern MethodInfo String_IndexOf_m2217_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m7695_MethodInfo;
extern MethodInfo String_Compare_m7716_MethodInfo;
extern MethodInfo String_get_Length_m2126_MethodInfo;
extern MethodInfo String_get_Chars_m2152_MethodInfo;
extern MethodInfo String_IndexOf_m7964_MethodInfo;
extern MethodInfo String_Substring_m2180_MethodInfo;
extern MethodInfo String_Compare_m8977_MethodInfo;
extern MethodInfo String_Substring_m2153_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m8748_MethodInfo;
 void TlsServerCertificate__ctor_m8748 (TlsServerCertificate_t3348 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, ((int32_t)11), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m8749_MethodInfo;
 void TlsServerCertificate_Update_m8749 (TlsServerCertificate_t3348 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m8718(__this, /*hidden argument*/&HandshakeMessage_Update_m8718_MethodInfo);
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t3314 * L_1 = Context_get_ServerSettings_m8416(L_0, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		X509CertificateCollection_t3225 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m8675(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m8675_MethodInfo);
		Context_t3298 * L_3 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t3314 * L_4 = Context_get_ServerSettings_m8416(L_3, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m8684(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m8684_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m8750_MethodInfo;
 void TlsServerCertificate_ProcessAsSsl3_m8750 (TlsServerCertificate_t3348 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m8751_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
 void TlsServerCertificate_ProcessAsTls1_m8751 (TlsServerCertificate_t3348 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t961* V_3 = {0};
	X509Certificate_t3017 * V_4 = {0};
	{
		X509CertificateCollection_t3225 * L_0 = (X509CertificateCollection_t3225 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t3225_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m8210(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m8210_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m8697(__this, /*hidden argument*/&TlsStream_ReadInt24_m8697_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m8697(__this, /*hidden argument*/&TlsStream_ReadInt24_m8697_MethodInfo);
		V_2 = L_2;
		V_0 = ((int32_t)(V_0+3));
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_t961* L_3 = TlsStream_ReadBytes_m8698(__this, V_2, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t3017_il2cpp_TypeInfo));
		X509Certificate_t3017 * L_4 = (X509Certificate_t3017 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t3017_il2cpp_TypeInfo));
		X509Certificate__ctor_m7785(L_4, V_3, /*hidden argument*/&X509Certificate__ctor_m7785_MethodInfo);
		V_4 = L_4;
		X509CertificateCollection_t3225 * L_5 = (__this->___certificates_9);
		NullCheck(L_5);
		X509CertificateCollection_Add_m8213(L_5, V_4, /*hidden argument*/&X509CertificateCollection_Add_m8213_MethodInfo);
		V_0 = ((int32_t)(V_0+V_2));
	}

IL_004d:
	{
		if ((((int32_t)V_0) < ((int32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t3225 * L_6 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m8753(__this, L_6, /*hidden argument*/&TlsServerCertificate_validateCertificates_m8753_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkCertificateUsage_m8752 (TlsServerCertificate_t3348 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method){
	ClientContext_t3305 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t3287 * V_2 = {0};
	ExtendedKeyUsageExtension_t3284 * V_3 = {0};
	X509Extension_t3041 * V_4 = {0};
	NetscapeCertTypeExtension_t3289 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		V_0 = ((ClientContext_t3305 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t3305_il2cpp_TypeInfo)));
		NullCheck(___cert);
		int32_t L_1 = X509Certificate_get_Version_m7770(___cert, /*hidden argument*/&X509Certificate_get_Version_m7770_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		NullCheck(V_0);
		SecurityParameters_t3316 * L_2 = Context_get_Negotiating_m8460(V_0, /*hidden argument*/&Context_get_Negotiating_m8460_MethodInfo);
		NullCheck(L_2);
		CipherSuite_t3299 * L_3 = SecurityParameters_get_Cipher_m8530(L_2, /*hidden argument*/&SecurityParameters_get_Cipher_m8530_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = CipherSuite_get_ExchangeAlgorithmType_m8323(L_3, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m8323_MethodInfo);
		V_6 = L_4;
		if (V_6 == 0)
		{
			goto IL_0061;
		}
		if (V_6 == 1)
		{
			goto IL_0068;
		}
		if (V_6 == 2)
		{
			goto IL_006a;
		}
		if (V_6 == 3)
		{
			goto IL_0059;
		}
		if (V_6 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t3287 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t3284 *)NULL;
		NullCheck(___cert);
		X509ExtensionCollection_t3228 * L_5 = X509Certificate_get_Extensions_m7844(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m7844_MethodInfo);
		NullCheck(L_5);
		X509Extension_t3041 * L_6 = X509ExtensionCollection_get_Item_m7845(L_5, (String_t*) &_stringLiteral558, /*hidden argument*/&X509ExtensionCollection_get_Item_m7845_MethodInfo);
		V_4 = L_6;
		if (!V_4)
		{
			goto IL_008f;
		}
	}
	{
		KeyUsageExtension_t3287 * L_7 = (KeyUsageExtension_t3287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t3287_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m8278(L_7, V_4, /*hidden argument*/&KeyUsageExtension__ctor_m8278_MethodInfo);
		V_2 = L_7;
	}

IL_008f:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t3228 * L_8 = X509Certificate_get_Extensions_m7844(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m7844_MethodInfo);
		NullCheck(L_8);
		X509Extension_t3041 * L_9 = X509ExtensionCollection_get_Item_m7845(L_8, (String_t*) &_stringLiteral564, /*hidden argument*/&X509ExtensionCollection_get_Item_m7845_MethodInfo);
		V_4 = L_9;
		if (!V_4)
		{
			goto IL_00b0;
		}
	}
	{
		ExtendedKeyUsageExtension_t3284 * L_10 = (ExtendedKeyUsageExtension_t3284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t3284_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m8269(L_10, V_4, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m8269_MethodInfo);
		V_3 = L_10;
	}

IL_00b0:
	{
		if (!V_2)
		{
			goto IL_00f3;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00f3;
		}
	}
	{
		NullCheck(V_2);
		bool L_11 = KeyUsageExtension_Support_m8281(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m8281_MethodInfo);
		if (L_11)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		NullCheck(V_3);
		ArrayList_t2972 * L_12 = ExtendedKeyUsageExtension_get_KeyPurpose_m8272(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m8272_MethodInfo);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m8908_MethodInfo, L_12, (String_t*) &_stringLiteral568);
		if (L_13)
		{
			goto IL_00f1;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t2972 * L_14 = ExtendedKeyUsageExtension_get_KeyPurpose_m8272(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m8272_MethodInfo);
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m8908_MethodInfo, L_14, (String_t*) &_stringLiteral1008);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		if (!V_2)
		{
			goto IL_0101;
		}
	}
	{
		NullCheck(V_2);
		bool L_16 = KeyUsageExtension_Support_m8281(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m8281_MethodInfo);
		return L_16;
	}

IL_0101:
	{
		if (!V_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t2972 * L_17 = ExtendedKeyUsageExtension_get_KeyPurpose_m8272(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m8272_MethodInfo);
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m8908_MethodInfo, L_17, (String_t*) &_stringLiteral568);
		if (L_18)
		{
			goto IL_012e;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t2972 * L_19 = ExtendedKeyUsageExtension_get_KeyPurpose_m8272(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m8272_MethodInfo);
		NullCheck(L_19);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m8908_MethodInfo, L_19, (String_t*) &_stringLiteral1008);
		G_B26_0 = ((int32_t)(L_20));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t3228 * L_21 = X509Certificate_get_Extensions_m7844(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m7844_MethodInfo);
		NullCheck(L_21);
		X509Extension_t3041 * L_22 = X509ExtensionCollection_get_Item_m7845(L_21, (String_t*) &_stringLiteral595, /*hidden argument*/&X509ExtensionCollection_get_Item_m7845_MethodInfo);
		V_4 = L_22;
		if (!V_4)
		{
			goto IL_015c;
		}
	}
	{
		NetscapeCertTypeExtension_t3289 * L_23 = (NetscapeCertTypeExtension_t3289 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t3289_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m8283(L_23, V_4, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m8283_MethodInfo);
		V_5 = L_23;
		NullCheck(V_5);
		bool L_24 = NetscapeCertTypeExtension_Support_m8285(V_5, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m8285_MethodInfo);
		return L_24;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerCertificate_validateCertificates_m8753 (TlsServerCertificate_t3348 * __this, X509CertificateCollection_t3225 * ___certificates, MethodInfo* method){
	ClientContext_t3305 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t3332 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t3017 * V_5 = {0};
	X509Certificate_t2983 * V_6 = {0};
	ArrayList_t2972 * V_7 = {0};
	X509CertificateCollection_t3225 * V_8 = {0};
	X509Chain_t3280 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t156* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t115 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t115 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		V_0 = ((ClientContext_t3305 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t3305_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		NullCheck(V_0);
		SslClientStream_t3304 * L_1 = ClientContext_get_SslStream_m8376(V_0, /*hidden argument*/&ClientContext_get_SslStream_m8376_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m8567_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		NullCheck(V_0);
		SslClientStream_t3304 * L_3 = ClientContext_get_SslStream_m8376(V_0, /*hidden argument*/&ClientContext_get_SslStream_m8376_MethodInfo);
		NullCheck(L_3);
		ValidationResult_t3332 * L_4 = (ValidationResult_t3332 *)VirtFuncInvoker1< ValidationResult_t3332 *, X509CertificateCollection_t3225 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m8571_MethodInfo, L_3, ___certificates);
		V_2 = L_4;
		NullCheck(V_2);
		bool L_5 = ValidationResult_get_Trusted_m8537(V_2, /*hidden argument*/&ValidationResult_get_Trusted_m8537_MethodInfo);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		NullCheck(V_2);
		int32_t L_6 = ValidationResult_get_ErrorCode_m8538(V_2, /*hidden argument*/&ValidationResult_get_ErrorCode_m8538_MethodInfo);
		V_3 = (((int64_t)L_6));
		V_12 = V_3;
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_7 = V_3;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int64_t2431_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m474(NULL /*static, unused*/, (String_t*) &_stringLiteral1009, L_8, /*hidden argument*/&String_Format_m474_MethodInfo);
		V_4 = L_9;
		String_t* L_10 = String_Concat_m496(NULL /*static, unused*/, (String_t*) &_stringLiteral1010, V_4, /*hidden argument*/&String_Concat_m496_MethodInfo);
		TlsException_t3339 * L_11 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_11, V_1, L_10, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_00b4:
	{
		NullCheck(___certificates);
		X509Certificate_t3017 * L_12 = X509CertificateCollection_get_Item_m7780(___certificates, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m7780_MethodInfo);
		V_5 = L_12;
		NullCheck(V_5);
		ByteU5BU5D_t961* L_13 = (ByteU5BU5D_t961*)VirtFuncInvoker0< ByteU5BU5D_t961* >::Invoke(&X509Certificate_get_RawData_m7874_MethodInfo, V_5);
		X509Certificate_t2983 * L_14 = (X509Certificate_t2983 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t2983_il2cpp_TypeInfo));
		X509Certificate__ctor_m8943(L_14, L_13, /*hidden argument*/&X509Certificate__ctor_m8943_MethodInfo);
		V_6 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t2972_il2cpp_TypeInfo));
		ArrayList_t2972 * L_15 = (ArrayList_t2972 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t2972_il2cpp_TypeInfo));
		ArrayList__ctor_m7667(L_15, /*hidden argument*/&ArrayList__ctor_m7667_MethodInfo);
		V_7 = L_15;
		bool L_16 = TlsServerCertificate_checkCertificateUsage_m8752(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m8752_MethodInfo);
		if (L_16)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_17 = ((int32_t)-2146762490);
		Object_t * L_18 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_17);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_18);
	}

IL_00f1:
	{
		bool L_19 = TlsServerCertificate_checkServerIdentity_m8754(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m8754_MethodInfo);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_20 = ((int32_t)-2146762481);
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_20);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_21);
	}

IL_0110:
	{
		X509CertificateCollection_t3225 * L_22 = (X509CertificateCollection_t3225 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t3225_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m8211(L_22, ___certificates, /*hidden argument*/&X509CertificateCollection__ctor_m8211_MethodInfo);
		V_8 = L_22;
		NullCheck(V_8);
		X509CertificateCollection_Remove_m8218(V_8, V_5, /*hidden argument*/&X509CertificateCollection_Remove_m8218_MethodInfo);
		X509Chain_t3280 * L_23 = (X509Chain_t3280 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t3280_il2cpp_TypeInfo));
		X509Chain__ctor_m8221(L_23, V_8, /*hidden argument*/&X509Chain__ctor_m8221_MethodInfo);
		V_9 = L_23;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		NullCheck(V_9);
		bool L_24 = X509Chain_Build_m8224(V_9, V_5, /*hidden argument*/&X509Chain_Build_m8224_MethodInfo);
		V_10 = L_24;
		// IL_0138: leave IL_0146
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t115 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t115_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_013d;
		throw e;
	}

IL_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		// IL_0141: leave IL_0146
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		if (V_10)
		{
			goto IL_0243;
		}
	}
	{
		NullCheck(V_9);
		int32_t L_25 = X509Chain_get_Status_m8222(V_9, /*hidden argument*/&X509Chain_get_Status_m8222_MethodInfo);
		V_13 = L_25;
		if ((((int32_t)V_13) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		int32_t L_26 = ((int32_t)-2146869223);
		Object_t * L_27 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_26);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_27);
		goto IL_0243;
	}

IL_01ab:
	{
		int32_t L_28 = ((int32_t)-2146869232);
		Object_t * L_29 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_28);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_29);
		goto IL_0243;
	}

IL_01c2:
	{
		int32_t L_30 = ((int32_t)-2146762494);
		Object_t * L_31 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_30);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_31);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		int32_t L_32 = ((int32_t)-2146762495);
		Object_t * L_33 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_32);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_33);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		int32_t L_34 = ((int32_t)-2146762486);
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_34);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_35);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		int32_t L_36 = ((int32_t)-2146762487);
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_36);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_37);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		NullCheck(V_9);
		int32_t L_38 = X509Chain_get_Status_m8222(V_9, /*hidden argument*/&X509Chain_get_Status_m8222_MethodInfo);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Int32_t104_il2cpp_TypeInfo), &L_39);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m7677_MethodInfo, V_7, L_40);
		goto IL_0243;
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_41 = Type_GetTypeFromHandle_m280(NULL /*static, unused*/, LoadTypeToken(&Int32_t104_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m280_MethodInfo);
		NullCheck(V_7);
		Array_t * L_42 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m7841_MethodInfo, V_7, L_41);
		V_11 = ((Int32U5BU5D_t156*)Castclass(L_42, InitializedTypeInfo(&Int32U5BU5D_t156_il2cpp_TypeInfo)));
		NullCheck(V_0);
		SslClientStream_t3304 * L_43 = ClientContext_get_SslStream_m8376(V_0, /*hidden argument*/&ClientContext_get_SslStream_m8376_MethodInfo);
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker2< bool, X509Certificate_t2983 *, Int32U5BU5D_t156* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m8570_MethodInfo, L_43, V_6, V_11);
		if (L_44)
		{
			goto IL_027b;
		}
	}
	{
		TlsException_t3339 * L_45 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_45, V_1, (String_t*) &_stringLiteral1011, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkServerIdentity_m8754 (TlsServerCertificate_t3348 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method){
	ClientContext_t3305 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t3041 * V_2 = {0};
	SubjectAltNameExtension_t3290 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t127* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t127* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		V_0 = ((ClientContext_t3305 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t3305_il2cpp_TypeInfo)));
		NullCheck(V_0);
		TlsClientSettings_t3315 * L_1 = Context_get_ClientSettings_m8417(V_0, /*hidden argument*/&Context_get_ClientSettings_m8417_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = TlsClientSettings_get_TargetHost_m8657(L_1, /*hidden argument*/&TlsClientSettings_get_TargetHost_m8657_MethodInfo);
		V_1 = L_2;
		NullCheck(___cert);
		X509ExtensionCollection_t3228 * L_3 = X509Certificate_get_Extensions_m7844(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m7844_MethodInfo);
		NullCheck(L_3);
		X509Extension_t3041 * L_4 = X509ExtensionCollection_get_Item_m7845(L_3, (String_t*) &_stringLiteral594, /*hidden argument*/&X509ExtensionCollection_get_Item_m7845_MethodInfo);
		V_2 = L_4;
		if (!V_2)
		{
			goto IL_00a4;
		}
	}
	{
		SubjectAltNameExtension_t3290 * L_5 = (SubjectAltNameExtension_t3290 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t3290_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m8287(L_5, V_2, /*hidden argument*/&SubjectAltNameExtension__ctor_m8287_MethodInfo);
		V_3 = L_5;
		NullCheck(V_3);
		StringU5BU5D_t127* L_6 = SubjectAltNameExtension_get_DNSNames_m8289(V_3, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m8289_MethodInfo);
		V_5 = L_6;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_7 = V_6;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_5, L_7));
		bool L_8 = TlsServerCertificate_Match_m8756(NULL /*static, unused*/, V_1, V_4, /*hidden argument*/&TlsServerCertificate_Match_m8756_MethodInfo);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_0062:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_5)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_3);
		StringU5BU5D_t127* L_9 = SubjectAltNameExtension_get_IPAddresses_m8290(V_3, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m8290_MethodInfo);
		V_8 = L_9;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		NullCheck(V_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_8, V_9);
		int32_t L_10 = V_9;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(V_8, L_10));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m282(NULL /*static, unused*/, V_7, V_1, /*hidden argument*/&String_op_Equality_m282_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		V_9 = ((int32_t)(V_9+1));
	}

IL_0099:
	{
		NullCheck(V_8);
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((Array_t *)V_8)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		NullCheck(___cert);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m8197_MethodInfo, ___cert);
		bool L_13 = TlsServerCertificate_checkDomainName_m8755(__this, L_12, /*hidden argument*/&TlsServerCertificate_checkDomainName_m8755_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
 bool TlsServerCertificate_checkDomainName_m8755 (TlsServerCertificate_t3348 * __this, String_t* ___subjectName, MethodInfo* method){
	ClientContext_t3305 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t3063 * V_2 = {0};
	MatchCollection_t3071 * V_3 = {0};
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		V_0 = ((ClientContext_t3305 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t3305_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t3063_il2cpp_TypeInfo));
		Regex_t3063 * L_1 = (Regex_t3063 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t3063_il2cpp_TypeInfo));
		Regex__ctor_m7093(L_1, (String_t*) &_stringLiteral1012, /*hidden argument*/&Regex__ctor_m7093_MethodInfo);
		V_2 = L_1;
		NullCheck(V_2);
		MatchCollection_t3071 * L_2 = Regex_Matches_m7109(V_2, ___subjectName, /*hidden argument*/&Regex_Matches_m7109_MethodInfo);
		V_3 = L_2;
		NullCheck(V_3);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m7084_MethodInfo, V_3);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t3062 * L_4 = (Match_t3062 *)VirtFuncInvoker1< Match_t3062 *, int32_t >::Invoke(&MatchCollection_get_Item_m7086_MethodInfo, V_3, 0);
		NullCheck(L_4);
		bool L_5 = Group_get_Success_m7062(L_4, /*hidden argument*/&Group_get_Success_m7062_MethodInfo);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t3062 * L_6 = (Match_t3062 *)VirtFuncInvoker1< Match_t3062 *, int32_t >::Invoke(&MatchCollection_get_Item_m7086_MethodInfo, V_3, 0);
		NullCheck(L_6);
		GroupCollection_t3069 * L_7 = (GroupCollection_t3069 *)VirtFuncInvoker0< GroupCollection_t3069 * >::Invoke(&Match_get_Groups_m7076_MethodInfo, L_6);
		NullCheck(L_7);
		Group_t3067 * L_8 = GroupCollection_get_Item_m7066(L_7, 1, /*hidden argument*/&GroupCollection_get_Item_m7066_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = Capture_get_Value_m7047(L_8, /*hidden argument*/&Capture_get_Value_m7047_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m6247_MethodInfo, L_9);
		V_1 = L_10;
	}

IL_005f:
	{
		NullCheck(V_0);
		TlsClientSettings_t3315 * L_11 = Context_get_ClientSettings_m8417(V_0, /*hidden argument*/&Context_get_ClientSettings_m8417_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = TlsClientSettings_get_TargetHost_m8657(L_11, /*hidden argument*/&TlsClientSettings_get_TargetHost_m8657_MethodInfo);
		bool L_13 = TlsServerCertificate_Match_m8756(NULL /*static, unused*/, L_12, V_1, /*hidden argument*/&TlsServerCertificate_Match_m8756_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
 bool TlsServerCertificate_Match_m8756 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		NullCheck(___pattern);
		int32_t L_0 = String_IndexOf_m2217(___pattern, ((int32_t)42), /*hidden argument*/&String_IndexOf_m2217_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t921_il2cpp_TypeInfo));
		CultureInfo_t921 * L_1 = CultureInfo_get_InvariantCulture_m7695(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7695_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_2 = String_Compare_m7716(NULL /*static, unused*/, ___hostname, ___pattern, 1, L_1, /*hidden argument*/&String_Compare_m7716_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		NullCheck(___pattern);
		int32_t L_3 = String_get_Length_m2126(___pattern, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		if ((((int32_t)V_0) == ((int32_t)((int32_t)(L_3-1)))))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(___pattern);
		uint16_t L_4 = String_get_Chars_m2152(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_get_Chars_m2152_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		NullCheck(___pattern);
		int32_t L_5 = String_IndexOf_m7964(___pattern, ((int32_t)42), ((int32_t)(V_0+1)), /*hidden argument*/&String_IndexOf_m7964_MethodInfo);
		V_1 = L_5;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		NullCheck(___pattern);
		String_t* L_6 = String_Substring_m2180(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_Substring_m2180_MethodInfo);
		V_2 = L_6;
		NullCheck(___hostname);
		int32_t L_7 = String_get_Length_m2126(___hostname, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		NullCheck(V_2);
		int32_t L_8 = String_get_Length_m2126(V_2, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		V_3 = ((int32_t)(L_7-L_8));
		if ((((int32_t)V_3) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		NullCheck(V_2);
		int32_t L_9 = String_get_Length_m2126(V_2, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t921_il2cpp_TypeInfo));
		CultureInfo_t921 * L_10 = CultureInfo_get_InvariantCulture_m7695(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7695_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_11 = String_Compare_m8977(NULL /*static, unused*/, ___hostname, V_3, V_2, 0, L_9, 1, L_10, /*hidden argument*/&String_Compare_m8977_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		if (V_0)
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_12 = String_IndexOf_m2217(___hostname, ((int32_t)46), /*hidden argument*/&String_IndexOf_m2217_MethodInfo);
		V_4 = L_12;
		if ((((int32_t)V_4) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_13 = String_get_Length_m2126(___hostname, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		NullCheck(V_2);
		int32_t L_14 = String_get_Length_m2126(V_2, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)V_4) < ((int32_t)((int32_t)(L_13-L_14))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		NullCheck(___pattern);
		String_t* L_15 = String_Substring_m2153(___pattern, 0, V_0, /*hidden argument*/&String_Substring_m2153_MethodInfo);
		V_5 = L_15;
		NullCheck(V_5);
		int32_t L_16 = String_get_Length_m2126(V_5, /*hidden argument*/&String_get_Length_m2126_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t921_il2cpp_TypeInfo));
		CultureInfo_t921 * L_17 = CultureInfo_get_InvariantCulture_m7695(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7695_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_18 = String_Compare_m8977(NULL /*static, unused*/, ___hostname, 0, V_5, 0, L_16, 1, L_17, /*hidden argument*/&String_Compare_m8977_MethodInfo);
		return ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
extern Il2CppType X509CertificateCollection_t3225_0_0_1;
FieldInfo TlsServerCertificate_t3348____certificates_9_FieldInfo = 
{
	"certificates"/* name */
	, &X509CertificateCollection_t3225_0_0_1/* type */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificate_t3348, ___certificates_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificate_t3348_FieldInfos[] =
{
	&TlsServerCertificate_t3348____certificates_9_FieldInfo,
	NULL
};
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate__ctor_m8748_ParameterInfos[] = 
{
	{"context", 0, 134218547, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218548, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificate__ctor_m8748_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificate__ctor_m8748/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate__ctor_m8748_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
MethodInfo TlsServerCertificate_Update_m8749_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificate_Update_m8749/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
MethodInfo TlsServerCertificate_ProcessAsSsl3_m8750_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsSsl3_m8750/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
MethodInfo TlsServerCertificate_ProcessAsTls1_m8751_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsTls1_m8751/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t3017_0_0_0;
extern Il2CppType X509Certificate_t3017_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate_checkCertificateUsage_m8752_ParameterInfos[] = 
{
	{"cert", 0, 134218549, &EmptyCustomAttributesCache, &X509Certificate_t3017_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkCertificateUsage_m8752_MethodInfo = 
{
	"checkCertificateUsage"/* name */
	, (methodPointerType)&TlsServerCertificate_checkCertificateUsage_m8752/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate_checkCertificateUsage_m8752_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t3225_0_0_0;
extern Il2CppType X509CertificateCollection_t3225_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate_validateCertificates_m8753_ParameterInfos[] = 
{
	{"certificates", 0, 134218550, &EmptyCustomAttributesCache, &X509CertificateCollection_t3225_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
MethodInfo TlsServerCertificate_validateCertificates_m8753_MethodInfo = 
{
	"validateCertificates"/* name */
	, (methodPointerType)&TlsServerCertificate_validateCertificates_m8753/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate_validateCertificates_m8753_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t3017_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate_checkServerIdentity_m8754_ParameterInfos[] = 
{
	{"cert", 0, 134218551, &EmptyCustomAttributesCache, &X509Certificate_t3017_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkServerIdentity_m8754_MethodInfo = 
{
	"checkServerIdentity"/* name */
	, (methodPointerType)&TlsServerCertificate_checkServerIdentity_m8754/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate_checkServerIdentity_m8754_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate_checkDomainName_m8755_ParameterInfos[] = 
{
	{"subjectName", 0, 134218552, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
MethodInfo TlsServerCertificate_checkDomainName_m8755_MethodInfo = 
{
	"checkDomainName"/* name */
	, (methodPointerType)&TlsServerCertificate_checkDomainName_m8755/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate_checkDomainName_m8755_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t3348_TlsServerCertificate_Match_m8756_ParameterInfos[] = 
{
	{"hostname", 0, 134218553, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"pattern", 1, 134218554, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
MethodInfo TlsServerCertificate_Match_m8756_MethodInfo = 
{
	"Match"/* name */
	, (methodPointerType)&TlsServerCertificate_Match_m8756/* method */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t3348_TlsServerCertificate_Match_m8756_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerCertificate_t3348_MethodInfos[] =
{
	&TlsServerCertificate__ctor_m8748_MethodInfo,
	&TlsServerCertificate_Update_m8749_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m8750_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m8751_MethodInfo,
	&TlsServerCertificate_checkCertificateUsage_m8752_MethodInfo,
	&TlsServerCertificate_validateCertificates_m8753_MethodInfo,
	&TlsServerCertificate_checkServerIdentity_m8754_MethodInfo,
	&TlsServerCertificate_checkDomainName_m8755_MethodInfo,
	&TlsServerCertificate_Match_m8756_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m314_MethodInfo;
extern MethodInfo Object_Finalize_m288_MethodInfo;
extern MethodInfo Object_GetHashCode_m315_MethodInfo;
extern MethodInfo Object_ToString_m316_MethodInfo;
extern MethodInfo Stream_Dispose_m8922_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m8689_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m8690_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m8688_MethodInfo;
extern MethodInfo TlsStream_get_Length_m8693_MethodInfo;
extern MethodInfo TlsStream_get_Position_m8691_MethodInfo;
extern MethodInfo TlsStream_set_Position_m8692_MethodInfo;
extern MethodInfo Stream_Dispose_m8965_MethodInfo;
extern MethodInfo Stream_Close_m8882_MethodInfo;
extern MethodInfo TlsStream_Flush_m8706_MethodInfo;
extern MethodInfo TlsStream_Read_m8709_MethodInfo;
extern MethodInfo Stream_ReadByte_m8923_MethodInfo;
extern MethodInfo TlsStream_Seek_m8708_MethodInfo;
extern MethodInfo TlsStream_SetLength_m8707_MethodInfo;
extern MethodInfo TlsStream_Write_m8710_MethodInfo;
extern MethodInfo Stream_WriteByte_m8913_MethodInfo;
extern MethodInfo Stream_BeginRead_m8928_MethodInfo;
extern MethodInfo Stream_BeginWrite_m8938_MethodInfo;
extern MethodInfo Stream_EndRead_m8930_MethodInfo;
extern MethodInfo Stream_EndWrite_m8939_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m8719_MethodInfo;
static MethodInfo* TlsServerCertificate_t3348_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m8751_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m8750_MethodInfo,
	&TlsServerCertificate_Update_m8749_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
extern TypeInfo IDisposable_t114_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerCertificate_t3348_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificate_t3348_0_0_0;
extern Il2CppType TlsServerCertificate_t3348_1_0_0;
struct TlsServerCertificate_t3348;
TypeInfo TlsServerCertificate_t3348_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificate"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificate_t3348_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificate_t3348_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificate_t3348_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificate_t3348_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificate_t3348_0_0_0/* byval_arg */
	, &TlsServerCertificate_t3348_1_0_0/* this_arg */
	, TlsServerCertificate_t3348_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificate_t3348)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t3349_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t3340_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t3341_il2cpp_TypeInfo;
extern TypeInfo ASN1_t3028_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t127_il2cpp_TypeInfo;
extern TypeInfo Encoding_t3222_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern MethodInfo TlsServerSettings_set_CertificateTypes_m8682_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m8683_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m8681_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m8760_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m8695_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m8696_MethodInfo;
extern MethodInfo ASN1__ctor_m7739_MethodInfo;
extern MethodInfo ASN1_get_Count_m7743_MethodInfo;
extern MethodInfo ASN1_get_Item_m7744_MethodInfo;
extern MethodInfo ASN1_get_Value_m7742_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m7774_MethodInfo;
extern MethodInfo Encoding_GetString_m7775_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m8757_MethodInfo;
 void TlsServerCertificateRequest__ctor_m8757 (TlsServerCertificateRequest_t3349 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, ((int32_t)13), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m8758_MethodInfo;
 void TlsServerCertificateRequest_Update_m8758 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m8718(__this, /*hidden argument*/&HandshakeMessage_Update_m8718_MethodInfo);
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t3314 * L_1 = Context_get_ServerSettings_m8416(L_0, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		ClientCertificateTypeU5BU5D_t3340* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m8682(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m8682_MethodInfo);
		Context_t3298 * L_3 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t3314 * L_4 = Context_get_ServerSettings_m8416(L_3, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		StringU5BU5D_t127* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m8683(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m8683_MethodInfo);
		Context_t3298 * L_6 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t3314 * L_7 = Context_get_ServerSettings_m8416(L_6, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m8681(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m8681_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m8759_MethodInfo;
 void TlsServerCertificateRequest_ProcessAsSsl3_m8759 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m8760_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
 void TlsServerCertificateRequest_ProcessAsTls1_m8760 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t3028 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t3028 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m8695(__this, /*hidden argument*/&TlsStream_ReadByte_m8695_MethodInfo);
		V_0 = L_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t3340*)SZArrayNew(InitializedTypeInfo(&ClientCertificateTypeU5BU5D_t3340_il2cpp_TypeInfo), V_0));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t3340* L_1 = (__this->___certificateTypes_9);
		uint8_t L_2 = TlsStream_ReadByte_m8695(__this, /*hidden argument*/&TlsStream_ReadByte_m8695_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)) = (int32_t)L_2;
		V_1 = ((int32_t)(V_1+1));
	}

IL_002c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_3 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		if (!L_3)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_4 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		ByteU5BU5D_t961* L_5 = TlsStream_ReadBytes_m8698(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		ASN1_t3028 * L_6 = (ASN1_t3028 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t3028_il2cpp_TypeInfo));
		ASN1__ctor_m7739(L_6, L_5, /*hidden argument*/&ASN1__ctor_m7739_MethodInfo);
		V_2 = L_6;
		NullCheck(V_2);
		int32_t L_7 = ASN1_get_Count_m7743(V_2, /*hidden argument*/&ASN1_get_Count_m7743_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t127*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t127_il2cpp_TypeInfo), L_7));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		NullCheck(V_2);
		ASN1_t3028 * L_8 = ASN1_get_Item_m7744(V_2, V_3, /*hidden argument*/&ASN1_get_Item_m7744_MethodInfo);
		NullCheck(L_8);
		ByteU5BU5D_t961* L_9 = ASN1_get_Value_m7742(L_8, /*hidden argument*/&ASN1_get_Value_m7742_MethodInfo);
		ASN1_t3028 * L_10 = (ASN1_t3028 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t3028_il2cpp_TypeInfo));
		ASN1__ctor_m7739(L_10, L_9, /*hidden argument*/&ASN1__ctor_m7739_MethodInfo);
		V_4 = L_10;
		StringU5BU5D_t127* L_11 = (__this->___distinguisedNames_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t3222_il2cpp_TypeInfo));
		Encoding_t3222 * L_12 = Encoding_get_UTF8_m7774(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m7774_MethodInfo);
		NullCheck(V_4);
		ASN1_t3028 * L_13 = ASN1_get_Item_m7744(V_4, 1, /*hidden argument*/&ASN1_get_Item_m7744_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t961* L_14 = ASN1_get_Value_m7742(L_13, /*hidden argument*/&ASN1_get_Value_m7742_MethodInfo);
		NullCheck(L_12);
		String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t961* >::Invoke(&Encoding_GetString_m7775_MethodInfo, L_12, L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_3);
		ArrayElementTypeCheck (L_11, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, V_3)) = (String_t*)L_15;
		V_3 = ((int32_t)(V_3+1));
	}

IL_009e:
	{
		NullCheck(V_2);
		int32_t L_16 = ASN1_get_Count_m7743(V_2, /*hidden argument*/&ASN1_get_Count_m7743_MethodInfo);
		if ((((int32_t)V_3) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
extern Il2CppType ClientCertificateTypeU5BU5D_t3340_0_0_1;
FieldInfo TlsServerCertificateRequest_t3349____certificateTypes_9_FieldInfo = 
{
	"certificateTypes"/* name */
	, &ClientCertificateTypeU5BU5D_t3340_0_0_1/* type */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t3349, ___certificateTypes_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t127_0_0_1;
FieldInfo TlsServerCertificateRequest_t3349____distinguisedNames_10_FieldInfo = 
{
	"distinguisedNames"/* name */
	, &StringU5BU5D_t127_0_0_1/* type */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t3349, ___distinguisedNames_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificateRequest_t3349_FieldInfos[] =
{
	&TlsServerCertificateRequest_t3349____certificateTypes_9_FieldInfo,
	&TlsServerCertificateRequest_t3349____distinguisedNames_10_FieldInfo,
	NULL
};
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerCertificateRequest_t3349_TlsServerCertificateRequest__ctor_m8757_ParameterInfos[] = 
{
	{"context", 0, 134218555, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218556, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificateRequest__ctor_m8757_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificateRequest__ctor_m8757/* method */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerCertificateRequest_t3349_TlsServerCertificateRequest__ctor_m8757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
MethodInfo TlsServerCertificateRequest_Update_m8758_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_Update_m8758/* method */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m8759_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsSsl3_m8759/* method */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m8760_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsTls1_m8760/* method */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerCertificateRequest_t3349_MethodInfos[] =
{
	&TlsServerCertificateRequest__ctor_m8757_MethodInfo,
	&TlsServerCertificateRequest_Update_m8758_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m8759_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m8760_MethodInfo,
	NULL
};
static MethodInfo* TlsServerCertificateRequest_t3349_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m8760_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m8759_MethodInfo,
	&TlsServerCertificateRequest_Update_m8758_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerCertificateRequest_t3349_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificateRequest_t3349_0_0_0;
extern Il2CppType TlsServerCertificateRequest_t3349_1_0_0;
struct TlsServerCertificateRequest_t3349;
TypeInfo TlsServerCertificateRequest_t3349_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificateRequest"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificateRequest_t3349_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificateRequest_t3349_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificateRequest_t3349_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificateRequest_t3349_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificateRequest_t3349_0_0_0/* byval_arg */
	, &TlsServerCertificateRequest_t3349_1_0_0/* this_arg */
	, TlsServerCertificateRequest_t3349_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificateRequest_t3349)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t3350_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t3336_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t3268_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t3299_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t3310_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t3293_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern MethodInfo RuntimeHelpers_InitializeArray_m7709_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m8421_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m8441_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m8581_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m8428_MethodInfo;
extern MethodInfo TlsStream_ToArray_m8705_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m8830_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m8831_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m8832_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m8720_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m8299_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m8854_MethodInfo;
extern MethodInfo Context_get_Current_m8459_MethodInfo;
extern MethodInfo CipherSuite_PRF_m8341_MethodInfo;
extern MethodInfo TlsException__ctor_m8664_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m8761_MethodInfo;
 void TlsServerFinished__ctor_m8761 (TlsServerFinished_t3350 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, ((int32_t)20), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m8762_MethodInfo;
 void TlsServerFinished__cctor_m8762 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		ByteU5BU5D_t961* L_0 = ((ByteU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t961_il2cpp_TypeInfo), 4));
		RuntimeHelpers_InitializeArray_m7709(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m7709_MethodInfo);
		((TlsServerFinished_t3350_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m8763_MethodInfo;
 void TlsServerFinished_Update_m8763 (TlsServerFinished_t3350 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m8718(__this, /*hidden argument*/&HandshakeMessage_Update_m8718_MethodInfo);
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m8421(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m8421_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m8764_MethodInfo;
 void TlsServerFinished_ProcessAsSsl3_m8764 (TlsServerFinished_t3350 * __this, MethodInfo* method){
	HashAlgorithm_t3268 * V_0 = {0};
	ByteU5BU5D_t961* V_1 = {0};
	ByteU5BU5D_t961* V_2 = {0};
	ByteU5BU5D_t961* V_3 = {0};
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t961* L_1 = Context_get_MasterSecret_m8441(L_0, /*hidden argument*/&Context_get_MasterSecret_m8441_MethodInfo);
		SslHandshakeHash_t3336 * L_2 = (SslHandshakeHash_t3336 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t3336_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m8581(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m8581_MethodInfo);
		V_0 = L_2;
		Context_t3298 * L_3 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_3);
		TlsStream_t3310 * L_4 = Context_get_HandshakeMessages_m8428(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m8428_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t961* L_5 = TlsStream_ToArray_m8705(L_4, /*hidden argument*/&TlsStream_ToArray_m8705_MethodInfo);
		V_1 = L_5;
		NullCheck(V_1);
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t961*, int32_t, int32_t, ByteU5BU5D_t961*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m8830_MethodInfo, V_0, V_1, 0, (((int32_t)(((Array_t *)V_1)->max_length))), V_1, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo));
		NullCheck((((TlsServerFinished_t3350_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9));
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t961*, int32_t, int32_t, ByteU5BU5D_t961*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m8830_MethodInfo, V_0, (((TlsServerFinished_t3350_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0, (((int32_t)(((Array_t *)(((TlsServerFinished_t3350_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9))->max_length))), (((TlsServerFinished_t3350_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t3350_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t3299_il2cpp_TypeInfo));
		NullCheck(V_0);
		VirtFuncInvoker3< ByteU5BU5D_t961*, ByteU5BU5D_t961*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m8831_MethodInfo, V_0, (((CipherSuite_t3299_StaticFields*)InitializedTypeInfo(&CipherSuite_t3299_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0), 0, 0);
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m8693_MethodInfo, __this);
		ByteU5BU5D_t961* L_7 = TlsStream_ReadBytes_m8698(__this, (((int32_t)L_6)), /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		V_2 = L_7;
		NullCheck(V_0);
		ByteU5BU5D_t961* L_8 = (ByteU5BU5D_t961*)VirtFuncInvoker0< ByteU5BU5D_t961* >::Invoke(&HashAlgorithm_get_Hash_m8832_MethodInfo, V_0);
		V_3 = L_8;
		bool L_9 = HandshakeMessage_Compare_m8720(NULL /*static, unused*/, V_3, V_2, /*hidden argument*/&HandshakeMessage_Compare_m8720_MethodInfo);
		if (L_9)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t3339 * L_10 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_10, ((int32_t)71), (String_t*) &_stringLiteral1013, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m8765_MethodInfo;
 void TlsServerFinished_ProcessAsTls1_m8765 (TlsServerFinished_t3350 * __this, MethodInfo* method){
	ByteU5BU5D_t961* V_0 = {0};
	HashAlgorithm_t3268 * V_1 = {0};
	ByteU5BU5D_t961* V_2 = {0};
	ByteU5BU5D_t961* V_3 = {0};
	ByteU5BU5D_t961* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m8693_MethodInfo, __this);
		ByteU5BU5D_t961* L_1 = TlsStream_ReadBytes_m8698(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t3293 * L_2 = (MD5SHA1_t3293 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t3293_il2cpp_TypeInfo));
		MD5SHA1__ctor_m8299(L_2, /*hidden argument*/&MD5SHA1__ctor_m8299_MethodInfo);
		V_1 = L_2;
		Context_t3298 * L_3 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_3);
		TlsStream_t3310 * L_4 = Context_get_HandshakeMessages_m8428(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m8428_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t961* L_5 = TlsStream_ToArray_m8705(L_4, /*hidden argument*/&TlsStream_ToArray_m8705_MethodInfo);
		V_2 = L_5;
		NullCheck(V_2);
		NullCheck(V_1);
		ByteU5BU5D_t961* L_6 = HashAlgorithm_ComputeHash_m8854(V_1, V_2, 0, (((int32_t)(((Array_t *)V_2)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m8854_MethodInfo);
		V_3 = L_6;
		Context_t3298 * L_7 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_7);
		SecurityParameters_t3316 * L_8 = Context_get_Current_m8459(L_7, /*hidden argument*/&Context_get_Current_m8459_MethodInfo);
		NullCheck(L_8);
		CipherSuite_t3299 * L_9 = SecurityParameters_get_Cipher_m8530(L_8, /*hidden argument*/&SecurityParameters_get_Cipher_m8530_MethodInfo);
		Context_t3298 * L_10 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t961* L_11 = Context_get_MasterSecret_m8441(L_10, /*hidden argument*/&Context_get_MasterSecret_m8441_MethodInfo);
		NullCheck(L_9);
		ByteU5BU5D_t961* L_12 = CipherSuite_PRF_m8341(L_9, L_11, (String_t*) &_stringLiteral1014, V_3, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m8341_MethodInfo);
		V_4 = L_12;
		bool L_13 = HandshakeMessage_Compare_m8720(NULL /*static, unused*/, V_4, V_0, /*hidden argument*/&HandshakeMessage_Compare_m8720_MethodInfo);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t3339 * L_14 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8664(L_14, (String_t*) &_stringLiteral1013, /*hidden argument*/&TlsException__ctor_m8664_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0073:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
extern Il2CppType ByteU5BU5D_t961_0_0_17;
FieldInfo TlsServerFinished_t3350____Ssl3Marker_9_FieldInfo = 
{
	"Ssl3Marker"/* name */
	, &ByteU5BU5D_t961_0_0_17/* type */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerFinished_t3350_StaticFields, ___Ssl3Marker_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerFinished_t3350_FieldInfos[] =
{
	&TlsServerFinished_t3350____Ssl3Marker_9_FieldInfo,
	NULL
};
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerFinished_t3350_TlsServerFinished__ctor_m8761_ParameterInfos[] = 
{
	{"context", 0, 134218557, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218558, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerFinished__ctor_m8761_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerFinished__ctor_m8761/* method */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerFinished_t3350_TlsServerFinished__ctor_m8761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
MethodInfo TlsServerFinished__cctor_m8762_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TlsServerFinished__cctor_m8762/* method */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
MethodInfo TlsServerFinished_Update_m8763_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerFinished_Update_m8763/* method */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
MethodInfo TlsServerFinished_ProcessAsSsl3_m8764_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsSsl3_m8764/* method */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
MethodInfo TlsServerFinished_ProcessAsTls1_m8765_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsTls1_m8765/* method */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerFinished_t3350_MethodInfos[] =
{
	&TlsServerFinished__ctor_m8761_MethodInfo,
	&TlsServerFinished__cctor_m8762_MethodInfo,
	&TlsServerFinished_Update_m8763_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m8764_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m8765_MethodInfo,
	NULL
};
static MethodInfo* TlsServerFinished_t3350_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m8765_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m8764_MethodInfo,
	&TlsServerFinished_Update_m8763_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerFinished_t3350_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerFinished_t3350_0_0_0;
extern Il2CppType TlsServerFinished_t3350_1_0_0;
struct TlsServerFinished_t3350;
TypeInfo TlsServerFinished_t3350_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerFinished"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerFinished_t3350_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerFinished_t3350_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerFinished_t3350_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerFinished_t3350_il2cpp_TypeInfo/* cast_class */
	, &TlsServerFinished_t3350_0_0_0/* byval_arg */
	, &TlsServerFinished_t3350_1_0_0/* this_arg */
	, TlsServerFinished_t3350_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerFinished_t3350)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TlsServerFinished_t3350_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t3351_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t3312_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t3300_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m8413_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m8436_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m8531_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m8415_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m8407_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m8433_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m8435_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m7738_MethodInfo;
extern MethodInfo Context_set_RandomCS_m8438_MethodInfo;
extern MethodInfo Context_set_RandomSC_m8440_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m8769_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m8770_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m8398_MethodInfo;
extern MethodInfo Context_get_SessionId_m8412_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m8405_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m8426_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m8367_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m8360_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m8457_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m8410_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m8409_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m8365_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m8427_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m8372_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m8766_MethodInfo;
 void TlsServerHello__ctor_m8766 (TlsServerHello_t3351 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, 2, ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m8767_MethodInfo;
 void TlsServerHello_Update_m8767 (TlsServerHello_t3351 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t961* V_3 = {0};
	ByteU5BU5D_t961* V_4 = {0};
	{
		HandshakeMessage_Update_m8718(__this, /*hidden argument*/&HandshakeMessage_Update_m8718_MethodInfo);
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		ByteU5BU5D_t961* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m8413(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m8413_MethodInfo);
		Context_t3298 * L_2 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		ByteU5BU5D_t961* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m8436(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m8436_MethodInfo);
		Context_t3298 * L_4 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t3316 * L_5 = Context_get_Negotiating_m8460(L_4, /*hidden argument*/&Context_get_Negotiating_m8460_MethodInfo);
		CipherSuite_t3299 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m8531(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m8531_MethodInfo);
		Context_t3298 * L_7 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m8415(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m8415_MethodInfo);
		Context_t3298 * L_9 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m8407(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m8407_MethodInfo);
		Context_t3298 * L_10 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t961* L_11 = Context_get_ClientRandom_m8433(L_10, /*hidden argument*/&Context_get_ClientRandom_m8433_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t3298 * L_12 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t961* L_13 = Context_get_ServerRandom_m8435(L_12, /*hidden argument*/&Context_get_ServerRandom_m8435_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		V_2 = ((int32_t)(V_0+V_1));
		V_3 = ((ByteU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t961_il2cpp_TypeInfo), V_2));
		Context_t3298 * L_14 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_14);
		ByteU5BU5D_t961* L_15 = Context_get_ClientRandom_m8433(L_14, /*hidden argument*/&Context_get_ClientRandom_m8433_MethodInfo);
		Buffer_BlockCopy_m7738(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_3, 0, V_0, /*hidden argument*/&Buffer_BlockCopy_m7738_MethodInfo);
		Context_t3298 * L_16 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t961* L_17 = Context_get_ServerRandom_m8435(L_16, /*hidden argument*/&Context_get_ServerRandom_m8435_MethodInfo);
		Buffer_BlockCopy_m7738(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, 0, (Array_t *)(Array_t *)V_3, V_0, V_1, /*hidden argument*/&Buffer_BlockCopy_m7738_MethodInfo);
		Context_t3298 * L_18 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_18);
		Context_set_RandomCS_m8438(L_18, V_3, /*hidden argument*/&Context_set_RandomCS_m8438_MethodInfo);
		V_4 = ((ByteU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t961_il2cpp_TypeInfo), V_2));
		Context_t3298 * L_19 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_19);
		ByteU5BU5D_t961* L_20 = Context_get_ServerRandom_m8435(L_19, /*hidden argument*/&Context_get_ServerRandom_m8435_MethodInfo);
		Buffer_BlockCopy_m7738(NULL /*static, unused*/, (Array_t *)(Array_t *)L_20, 0, (Array_t *)(Array_t *)V_4, 0, V_1, /*hidden argument*/&Buffer_BlockCopy_m7738_MethodInfo);
		Context_t3298 * L_21 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t961* L_22 = Context_get_ClientRandom_m8433(L_21, /*hidden argument*/&Context_get_ClientRandom_m8433_MethodInfo);
		Buffer_BlockCopy_m7738(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)V_4, V_1, V_0, /*hidden argument*/&Buffer_BlockCopy_m7738_MethodInfo);
		Context_t3298 * L_23 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_23);
		Context_set_RandomSC_m8440(L_23, V_4, /*hidden argument*/&Context_set_RandomSC_m8440_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m8768_MethodInfo;
 void TlsServerHello_ProcessAsSsl3_m8768 (TlsServerHello_t3351 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m8769_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
 void TlsServerHello_ProcessAsTls1_m8769 (TlsServerHello_t3351 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		TlsServerHello_processProtocol_m8770(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m8770_MethodInfo);
		ByteU5BU5D_t961* L_1 = TlsStream_ReadBytes_m8698(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m8695(__this, /*hidden argument*/&TlsStream_ReadByte_m8695_MethodInfo);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_t961* L_3 = TlsStream_ReadBytes_m8698(__this, V_0, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		__this->___sessionId_11 = L_3;
		Context_t3298 * L_4 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_4);
		TlsClientSettings_t3315 * L_5 = Context_get_ClientSettings_m8417(L_4, /*hidden argument*/&Context_get_ClientSettings_m8417_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = TlsClientSettings_get_TargetHost_m8657(L_5, /*hidden argument*/&TlsClientSettings_get_TargetHost_m8657_MethodInfo);
		ByteU5BU5D_t961* L_7 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t3312_il2cpp_TypeInfo));
		ClientSessionCache_Add_m8398(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ClientSessionCache_Add_m8398_MethodInfo);
		Context_t3298 * L_8 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		ByteU5BU5D_t961* L_9 = (__this->___sessionId_11);
		Context_t3298 * L_10 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t961* L_11 = Context_get_SessionId_m8412(L_10, /*hidden argument*/&Context_get_SessionId_m8412_MethodInfo);
		bool L_12 = HandshakeMessage_Compare_m8720(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&HandshakeMessage_Compare_m8720_MethodInfo);
		NullCheck(L_8);
		Context_set_AbbreviatedHandshake_m8405(L_8, L_12, /*hidden argument*/&Context_set_AbbreviatedHandshake_m8405_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t3298 * L_13 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_13);
		Context_set_AbbreviatedHandshake_m8405(L_13, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m8405_MethodInfo);
	}

IL_0082:
	{
		int16_t L_14 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		V_1 = L_14;
		Context_t3298 * L_15 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_15);
		CipherSuiteCollection_t3300 * L_16 = Context_get_SupportedCiphers_m8426(L_15, /*hidden argument*/&Context_get_SupportedCiphers_m8426_MethodInfo);
		NullCheck(L_16);
		int32_t L_17 = CipherSuiteCollection_IndexOf_m8367(L_16, V_1, /*hidden argument*/&CipherSuiteCollection_IndexOf_m8367_MethodInfo);
		if ((((uint32_t)L_17) != ((uint32_t)(-1))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t3339 * L_18 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_18, ((int32_t)71), (String_t*) &_stringLiteral1015, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_00ad:
	{
		Context_t3298 * L_19 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_19);
		CipherSuiteCollection_t3300 * L_20 = Context_get_SupportedCiphers_m8426(L_19, /*hidden argument*/&Context_get_SupportedCiphers_m8426_MethodInfo);
		NullCheck(L_20);
		CipherSuite_t3299 * L_21 = CipherSuiteCollection_get_Item_m8360(L_20, V_1, /*hidden argument*/&CipherSuiteCollection_get_Item_m8360_MethodInfo);
		__this->___cipherSuite_12 = L_21;
		uint8_t L_22 = TlsStream_ReadByte_m8695(__this, /*hidden argument*/&TlsStream_ReadByte_m8695_MethodInfo);
		__this->___compressionMethod_9 = L_22;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
 void TlsServerHello_processProtocol_m8770 (TlsServerHello_t3351 * __this, int16_t ___protocol, MethodInfo* method){
	int32_t V_0 = {0};
	{
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Context_DecodeProtocolCode_m8457(L_0, ___protocol, /*hidden argument*/&Context_DecodeProtocolCode_m8457_MethodInfo);
		V_0 = L_1;
		Context_t3298 * L_2 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Context_get_SecurityProtocolFlags_m8410(L_2, /*hidden argument*/&Context_get_SecurityProtocolFlags_m8410_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)V_0&(int32_t)L_3))) == ((int32_t)V_0)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t3298 * L_4 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m8410(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m8410_MethodInfo);
		if ((((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)-1073741824)))) != ((uint32_t)((int32_t)-1073741824))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t3298 * L_6 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_6);
		Context_set_SecurityProtocol_m8409(L_6, V_0, /*hidden argument*/&Context_set_SecurityProtocol_m8409_MethodInfo);
		Context_t3298 * L_7 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_7);
		CipherSuiteCollection_t3300 * L_8 = Context_get_SupportedCiphers_m8426(L_7, /*hidden argument*/&Context_get_SupportedCiphers_m8426_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m8365_MethodInfo, L_8);
		Context_t3298 * L_9 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_9);
		Context_set_SupportedCiphers_m8427(L_9, (CipherSuiteCollection_t3300 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m8427_MethodInfo);
		Context_t3298 * L_10 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		CipherSuiteCollection_t3300 * L_11 = CipherSuiteFactory_GetSupportedCiphers_m8372(NULL /*static, unused*/, V_0, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m8372_MethodInfo);
		NullCheck(L_10);
		Context_set_SupportedCiphers_m8427(L_10, L_11, /*hidden argument*/&Context_set_SupportedCiphers_m8427_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t3339 * L_12 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_12, ((int32_t)70), (String_t*) &_stringLiteral960, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0086:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
extern Il2CppType SecurityCompressionType_t3329_0_0_1;
FieldInfo TlsServerHello_t3351____compressionMethod_9_FieldInfo = 
{
	"compressionMethod"/* name */
	, &SecurityCompressionType_t3329_0_0_1/* type */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t3351, ___compressionMethod_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t961_0_0_1;
FieldInfo TlsServerHello_t3351____random_10_FieldInfo = 
{
	"random"/* name */
	, &ByteU5BU5D_t961_0_0_1/* type */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t3351, ___random_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t961_0_0_1;
FieldInfo TlsServerHello_t3351____sessionId_11_FieldInfo = 
{
	"sessionId"/* name */
	, &ByteU5BU5D_t961_0_0_1/* type */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t3351, ___sessionId_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CipherSuite_t3299_0_0_1;
FieldInfo TlsServerHello_t3351____cipherSuite_12_FieldInfo = 
{
	"cipherSuite"/* name */
	, &CipherSuite_t3299_0_0_1/* type */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t3351, ___cipherSuite_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerHello_t3351_FieldInfos[] =
{
	&TlsServerHello_t3351____compressionMethod_9_FieldInfo,
	&TlsServerHello_t3351____random_10_FieldInfo,
	&TlsServerHello_t3351____sessionId_11_FieldInfo,
	&TlsServerHello_t3351____cipherSuite_12_FieldInfo,
	NULL
};
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerHello_t3351_TlsServerHello__ctor_m8766_ParameterInfos[] = 
{
	{"context", 0, 134218559, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218560, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHello__ctor_m8766_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHello__ctor_m8766/* method */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerHello_t3351_TlsServerHello__ctor_m8766_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
MethodInfo TlsServerHello_Update_m8767_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerHello_Update_m8767/* method */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
MethodInfo TlsServerHello_ProcessAsSsl3_m8768_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsSsl3_m8768/* method */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
MethodInfo TlsServerHello_ProcessAsTls1_m8769_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsTls1_m8769/* method */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int16_t457_0_0_0;
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo TlsServerHello_t3351_TlsServerHello_processProtocol_m8770_ParameterInfos[] = 
{
	{"protocol", 0, 134218561, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int16_t457 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
MethodInfo TlsServerHello_processProtocol_m8770_MethodInfo = 
{
	"processProtocol"/* name */
	, (methodPointerType)&TlsServerHello_processProtocol_m8770/* method */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int16_t457/* invoker_method */
	, TlsServerHello_t3351_TlsServerHello_processProtocol_m8770_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerHello_t3351_MethodInfos[] =
{
	&TlsServerHello__ctor_m8766_MethodInfo,
	&TlsServerHello_Update_m8767_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m8768_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m8769_MethodInfo,
	&TlsServerHello_processProtocol_m8770_MethodInfo,
	NULL
};
static MethodInfo* TlsServerHello_t3351_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m8769_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m8768_MethodInfo,
	&TlsServerHello_Update_m8767_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerHello_t3351_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHello_t3351_0_0_0;
extern Il2CppType TlsServerHello_t3351_1_0_0;
struct TlsServerHello_t3351;
TypeInfo TlsServerHello_t3351_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHello"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHello_t3351_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerHello_t3351_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHello_t3351_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHello_t3351_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHello_t3351_0_0_0/* byval_arg */
	, &TlsServerHello_t3351_1_0_0/* this_arg */
	, TlsServerHello_t3351_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHello_t3351)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t3352_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m8771_MethodInfo;
 void TlsServerHelloDone__ctor_m8771 (TlsServerHelloDone_t3352 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, ((int32_t)14), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m8772_MethodInfo;
 void TlsServerHelloDone_ProcessAsSsl3_m8772 (TlsServerHelloDone_t3352 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m8773_MethodInfo;
 void TlsServerHelloDone_ProcessAsTls1_m8773 (TlsServerHelloDone_t3352 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerHelloDone_t3352_TlsServerHelloDone__ctor_m8771_ParameterInfos[] = 
{
	{"context", 0, 134218562, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218563, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHelloDone__ctor_m8771_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHelloDone__ctor_m8771/* method */
	, &TlsServerHelloDone_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerHelloDone_t3352_TlsServerHelloDone__ctor_m8771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
MethodInfo TlsServerHelloDone_ProcessAsSsl3_m8772_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsSsl3_m8772/* method */
	, &TlsServerHelloDone_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
MethodInfo TlsServerHelloDone_ProcessAsTls1_m8773_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsTls1_m8773/* method */
	, &TlsServerHelloDone_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerHelloDone_t3352_MethodInfos[] =
{
	&TlsServerHelloDone__ctor_m8771_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m8772_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m8773_MethodInfo,
	NULL
};
static MethodInfo* TlsServerHelloDone_t3352_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m8773_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m8772_MethodInfo,
	&HandshakeMessage_Update_m8718_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerHelloDone_t3352_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHelloDone_t3352_0_0_0;
extern Il2CppType TlsServerHelloDone_t3352_1_0_0;
struct TlsServerHelloDone_t3352;
TypeInfo TlsServerHelloDone_t3352_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHelloDone"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHelloDone_t3352_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHelloDone_t3352_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHelloDone_t3352_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHelloDone_t3352_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHelloDone_t3352_0_0_0/* byval_arg */
	, &TlsServerHelloDone_t3352_1_0_0/* this_arg */
	, TlsServerHelloDone_t3352_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHelloDone_t3352)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t3353_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t3216_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m8778_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m8673_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m8678_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m8679_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m8777_MethodInfo;
extern MethodInfo TlsStream__ctor_m8685_MethodInfo;
extern MethodInfo Context_get_RandomCS_m8437_MethodInfo;
extern MethodInfo TlsStream_Write_m8703_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m7878_MethodInfo;
extern MethodInfo TlsStream_Reset_m8704_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m8676_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m8304_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m8774_MethodInfo;
 void TlsServerKeyExchange__ctor_m8774 (TlsServerKeyExchange_t3353 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m8713(__this, ___context, ((int32_t)12), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m8713_MethodInfo);
		TlsServerKeyExchange_verifySignature_m8778(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m8778_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m8775_MethodInfo;
 void TlsServerKeyExchange_Update_m8775 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m8718(__this, /*hidden argument*/&HandshakeMessage_Update_m8718_MethodInfo);
		Context_t3298 * L_0 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t3314 * L_1 = Context_get_ServerSettings_m8416(L_0, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m8673(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m8673_MethodInfo);
		Context_t3298 * L_2 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t3314 * L_3 = Context_get_ServerSettings_m8416(L_2, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		RSAParameters_t3216  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m8678(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m8678_MethodInfo);
		Context_t3298 * L_5 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t3314 * L_6 = Context_get_ServerSettings_m8416(L_5, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		ByteU5BU5D_t961* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m8679(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m8679_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m8776_MethodInfo;
 void TlsServerKeyExchange_ProcessAsSsl3_m8776 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m8777_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
 void TlsServerKeyExchange_ProcessAsTls1_m8777 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method){
	RSAParameters_t3216  V_0 = {0};
	{
		Initobj (&RSAParameters_t3216_il2cpp_TypeInfo, (&V_0));
		__this->___rsaParams_9 = V_0;
		RSAParameters_t3216 * L_0 = &(__this->___rsaParams_9);
		int16_t L_1 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		ByteU5BU5D_t961* L_2 = TlsStream_ReadBytes_m8698(__this, L_1, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		NullCheck(L_0);
		L_0->___Modulus_6 = L_2;
		RSAParameters_t3216 * L_3 = &(__this->___rsaParams_9);
		int16_t L_4 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		ByteU5BU5D_t961* L_5 = TlsStream_ReadBytes_m8698(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		NullCheck(L_3);
		L_3->___Exponent_7 = L_5;
		int16_t L_6 = TlsStream_ReadInt16_m8696(__this, /*hidden argument*/&TlsStream_ReadInt16_m8696_MethodInfo);
		ByteU5BU5D_t961* L_7 = TlsStream_ReadBytes_m8698(__this, L_6, /*hidden argument*/&TlsStream_ReadBytes_m8698_MethodInfo);
		__this->___signedParams_10 = L_7;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
 void TlsServerKeyExchange_verifySignature_m8778 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method){
	MD5SHA1_t3293 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t3310 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t3293 * L_0 = (MD5SHA1_t3293 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t3293_il2cpp_TypeInfo));
		MD5SHA1__ctor_m8299(L_0, /*hidden argument*/&MD5SHA1__ctor_m8299_MethodInfo);
		V_0 = L_0;
		RSAParameters_t3216 * L_1 = &(__this->___rsaParams_9);
		NullCheck(L_1);
		ByteU5BU5D_t961* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t3216 * L_3 = &(__this->___rsaParams_9);
		NullCheck(L_3);
		ByteU5BU5D_t961* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)((((int32_t)(((Array_t *)L_2)->max_length)))+(((int32_t)(((Array_t *)L_4)->max_length)))))+4));
		TlsStream_t3310 * L_5 = (TlsStream_t3310 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t3310_il2cpp_TypeInfo));
		TlsStream__ctor_m8685(L_5, /*hidden argument*/&TlsStream__ctor_m8685_MethodInfo);
		V_2 = L_5;
		Context_t3298 * L_6 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_6);
		ByteU5BU5D_t961* L_7 = Context_get_RandomCS_m8437(L_6, /*hidden argument*/&Context_get_RandomCS_m8437_MethodInfo);
		NullCheck(V_2);
		TlsStream_Write_m8703(V_2, L_7, /*hidden argument*/&TlsStream_Write_m8703_MethodInfo);
		ByteU5BU5D_t961* L_8 = TlsStream_ToArray_m8705(__this, /*hidden argument*/&TlsStream_ToArray_m8705_MethodInfo);
		NullCheck(V_2);
		VirtActionInvoker3< ByteU5BU5D_t961*, int32_t, int32_t >::Invoke(&TlsStream_Write_m8710_MethodInfo, V_2, L_8, 0, V_1);
		NullCheck(V_2);
		ByteU5BU5D_t961* L_9 = TlsStream_ToArray_m8705(V_2, /*hidden argument*/&TlsStream_ToArray_m8705_MethodInfo);
		NullCheck(V_0);
		HashAlgorithm_ComputeHash_m7878(V_0, L_9, /*hidden argument*/&HashAlgorithm_ComputeHash_m7878_MethodInfo);
		NullCheck(V_2);
		TlsStream_Reset_m8704(V_2, /*hidden argument*/&TlsStream_Reset_m8704_MethodInfo);
		Context_t3298 * L_10 = HandshakeMessage_get_Context_m8714(__this, /*hidden argument*/&HandshakeMessage_get_Context_m8714_MethodInfo);
		NullCheck(L_10);
		TlsServerSettings_t3314 * L_11 = Context_get_ServerSettings_m8416(L_10, /*hidden argument*/&Context_get_ServerSettings_m8416_MethodInfo);
		NullCheck(L_11);
		RSA_t3019 * L_12 = TlsServerSettings_get_CertificateRSA_m8676(L_11, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m8676_MethodInfo);
		ByteU5BU5D_t961* L_13 = (__this->___signedParams_10);
		NullCheck(V_0);
		bool L_14 = MD5SHA1_VerifySignature_m8304(V_0, L_12, L_13, /*hidden argument*/&MD5SHA1_VerifySignature_m8304_MethodInfo);
		V_3 = L_14;
		if (V_3)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t3339 * L_15 = (TlsException_t3339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t3339_il2cpp_TypeInfo));
		TlsException__ctor_m8669(L_15, ((int32_t)50), (String_t*) &_stringLiteral1016, /*hidden argument*/&TlsException__ctor_m8669_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_008c:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
extern Il2CppType RSAParameters_t3216_0_0_1;
FieldInfo TlsServerKeyExchange_t3353____rsaParams_9_FieldInfo = 
{
	"rsaParams"/* name */
	, &RSAParameters_t3216_0_0_1/* type */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t3353, ___rsaParams_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t961_0_0_1;
FieldInfo TlsServerKeyExchange_t3353____signedParams_10_FieldInfo = 
{
	"signedParams"/* name */
	, &ByteU5BU5D_t961_0_0_1/* type */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t3353, ___signedParams_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerKeyExchange_t3353_FieldInfos[] =
{
	&TlsServerKeyExchange_t3353____rsaParams_9_FieldInfo,
	&TlsServerKeyExchange_t3353____signedParams_10_FieldInfo,
	NULL
};
extern Il2CppType Context_t3298_0_0_0;
extern Il2CppType ByteU5BU5D_t961_0_0_0;
static ParameterInfo TlsServerKeyExchange_t3353_TlsServerKeyExchange__ctor_m8774_ParameterInfos[] = 
{
	{"context", 0, 134218564, &EmptyCustomAttributesCache, &Context_t3298_0_0_0},
	{"buffer", 1, 134218565, &EmptyCustomAttributesCache, &ByteU5BU5D_t961_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerKeyExchange__ctor_m8774_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerKeyExchange__ctor_m8774/* method */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, TlsServerKeyExchange_t3353_TlsServerKeyExchange__ctor_m8774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
MethodInfo TlsServerKeyExchange_Update_m8775_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerKeyExchange_Update_m8775/* method */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m8776_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsSsl3_m8776/* method */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
MethodInfo TlsServerKeyExchange_ProcessAsTls1_m8777_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsTls1_m8777/* method */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
MethodInfo TlsServerKeyExchange_verifySignature_m8778_MethodInfo = 
{
	"verifySignature"/* name */
	, (methodPointerType)&TlsServerKeyExchange_verifySignature_m8778/* method */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerKeyExchange_t3353_MethodInfos[] =
{
	&TlsServerKeyExchange__ctor_m8774_MethodInfo,
	&TlsServerKeyExchange_Update_m8775_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m8776_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m8777_MethodInfo,
	&TlsServerKeyExchange_verifySignature_m8778_MethodInfo,
	NULL
};
static MethodInfo* TlsServerKeyExchange_t3353_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Stream_Dispose_m8922_MethodInfo,
	&TlsStream_get_CanRead_m8689_MethodInfo,
	&TlsStream_get_CanSeek_m8690_MethodInfo,
	&TlsStream_get_CanWrite_m8688_MethodInfo,
	&TlsStream_get_Length_m8693_MethodInfo,
	&TlsStream_get_Position_m8691_MethodInfo,
	&TlsStream_set_Position_m8692_MethodInfo,
	&Stream_Dispose_m8965_MethodInfo,
	&Stream_Close_m8882_MethodInfo,
	&TlsStream_Flush_m8706_MethodInfo,
	&TlsStream_Read_m8709_MethodInfo,
	&Stream_ReadByte_m8923_MethodInfo,
	&TlsStream_Seek_m8708_MethodInfo,
	&TlsStream_SetLength_m8707_MethodInfo,
	&TlsStream_Write_m8710_MethodInfo,
	&Stream_WriteByte_m8913_MethodInfo,
	&Stream_BeginRead_m8928_MethodInfo,
	&Stream_BeginWrite_m8938_MethodInfo,
	&Stream_EndRead_m8930_MethodInfo,
	&Stream_EndWrite_m8939_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m8777_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m8776_MethodInfo,
	&TlsServerKeyExchange_Update_m8775_MethodInfo,
	&HandshakeMessage_EncodeMessage_m8719_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerKeyExchange_t3353_InterfacesOffsets[] = 
{
	{ &IDisposable_t114_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerKeyExchange_t3353_0_0_0;
extern Il2CppType TlsServerKeyExchange_t3353_1_0_0;
struct TlsServerKeyExchange_t3353;
TypeInfo TlsServerKeyExchange_t3353_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerKeyExchange"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerKeyExchange_t3353_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerKeyExchange_t3353_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t3309_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerKeyExchange_t3353_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerKeyExchange_t3353_il2cpp_TypeInfo/* cast_class */
	, &TlsServerKeyExchange_t3353_0_0_0/* byval_arg */
	, &TlsServerKeyExchange_t3353_1_0_0/* this_arg */
	, TlsServerKeyExchange_t3353_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerKeyExchange_t3353)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t3255_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m8779_MethodInfo;
 void PrimalityTest__ctor_m8779 (PrimalityTest_t3255 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m8780_MethodInfo;
 bool PrimalityTest_Invoke_m8780 (PrimalityTest_t3255 * __this, BigInteger_t3246 * ___bi, int32_t ___confidence, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m8780((PrimalityTest_t3255 *)__this->___prev_9,___bi, ___confidence, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t3246 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t3246 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
bool pinvoke_delegate_wrapper_PrimalityTest_t3255(Il2CppObject* delegate, BigInteger_t3246 * ___bi, int32_t ___confidence)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(BigInteger_t3246 *, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t3246 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));

	// Marshaling of parameter '___confidence' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____bi_marshaled, ___confidence);

	// Marshaling cleanup of parameter '___bi' native representation

	// Marshaling cleanup of parameter '___confidence' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m8781_MethodInfo;
 Object_t * PrimalityTest_BeginInvoke_m8781 (PrimalityTest_t3255 * __this, BigInteger_t3246 * ___bi, int32_t ___confidence, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t3252_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m8782_MethodInfo;
 bool PrimalityTest_EndInvoke_m8782 (PrimalityTest_t3255 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Math.Prime.PrimalityTest
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo PrimalityTest_t3255_PrimalityTest__ctor_m8779_ParameterInfos[] = 
{
	{"object", 0, 134218566, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218567, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
MethodInfo PrimalityTest__ctor_m8779_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrimalityTest__ctor_m8779/* method */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, PrimalityTest_t3255_PrimalityTest__ctor_m8779_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BigInteger_t3246_0_0_0;
extern Il2CppType BigInteger_t3246_0_0_0;
extern Il2CppType ConfidenceFactor_t3252_0_0_0;
extern Il2CppType ConfidenceFactor_t3252_0_0_0;
static ParameterInfo PrimalityTest_t3255_PrimalityTest_Invoke_m8780_ParameterInfos[] = 
{
	{"bi", 0, 134218568, &EmptyCustomAttributesCache, &BigInteger_t3246_0_0_0},
	{"confidence", 1, 134218569, &EmptyCustomAttributesCache, &ConfidenceFactor_t3252_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
MethodInfo PrimalityTest_Invoke_m8780_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrimalityTest_Invoke_m8780/* method */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t_Int32_t104/* invoker_method */
	, PrimalityTest_t3255_PrimalityTest_Invoke_m8780_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BigInteger_t3246_0_0_0;
extern Il2CppType ConfidenceFactor_t3252_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrimalityTest_t3255_PrimalityTest_BeginInvoke_m8781_ParameterInfos[] = 
{
	{"bi", 0, 134218570, &EmptyCustomAttributesCache, &BigInteger_t3246_0_0_0},
	{"confidence", 1, 134218571, &EmptyCustomAttributesCache, &ConfidenceFactor_t3252_0_0_0},
	{"callback", 2, 134218572, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 3, 134218573, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t104_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
MethodInfo PrimalityTest_BeginInvoke_m8781_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrimalityTest_BeginInvoke_m8781/* method */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t104_Object_t_Object_t/* invoker_method */
	, PrimalityTest_t3255_PrimalityTest_BeginInvoke_m8781_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo PrimalityTest_t3255_PrimalityTest_EndInvoke_m8782_ParameterInfos[] = 
{
	{"result", 0, 134218574, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
MethodInfo PrimalityTest_EndInvoke_m8782_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrimalityTest_EndInvoke_m8782/* method */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, PrimalityTest_t3255_PrimalityTest_EndInvoke_m8782_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PrimalityTest_t3255_MethodInfos[] =
{
	&PrimalityTest__ctor_m8779_MethodInfo,
	&PrimalityTest_Invoke_m8780_MethodInfo,
	&PrimalityTest_BeginInvoke_m8781_MethodInfo,
	&PrimalityTest_EndInvoke_m8782_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m2112_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m2113_MethodInfo;
extern MethodInfo Delegate_Clone_m2114_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m2115_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m2116_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m2117_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m2118_MethodInfo;
static MethodInfo* PrimalityTest_t3255_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&PrimalityTest_Invoke_m8780_MethodInfo,
	&PrimalityTest_BeginInvoke_m8781_MethodInfo,
	&PrimalityTest_EndInvoke_m8782_MethodInfo,
};
extern TypeInfo ICloneable_t458_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t459_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PrimalityTest_t3255_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrimalityTest_t3255_0_0_0;
extern Il2CppType PrimalityTest_t3255_1_0_0;
extern TypeInfo MulticastDelegate_t306_il2cpp_TypeInfo;
struct PrimalityTest_t3255;
TypeInfo PrimalityTest_t3255_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrimalityTest"/* name */
	, "Mono.Math.Prime"/* namespaze */
	, PrimalityTest_t3255_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrimalityTest_t3255_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrimalityTest_t3255_il2cpp_TypeInfo/* cast_class */
	, &PrimalityTest_t3255_0_0_0/* byval_arg */
	, &PrimalityTest_t3255_1_0_0/* this_arg */
	, PrimalityTest_t3255_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrimalityTest_t3255/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrimalityTest_t3255)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t3333_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m8783_MethodInfo;
 void CertificateValidationCallback__ctor_m8783 (CertificateValidationCallback_t3333 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m8784_MethodInfo;
 bool CertificateValidationCallback_Invoke_m8784 (CertificateValidationCallback_t3333 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m8784((CertificateValidationCallback_t3333 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
bool pinvoke_delegate_wrapper_CertificateValidationCallback_t3333(Il2CppObject* delegate, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(X509Certificate_t2983 *, int32_t*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t2983 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___certificateErrors' to native representation
	int32_t* ____certificateErrors_marshaled = { 0 };
	____certificateErrors_marshaled = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)___certificateErrors);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____certificateErrors_marshaled);

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___certificateErrors' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m8785_MethodInfo;
 Object_t * CertificateValidationCallback_BeginInvoke_m8785 (CertificateValidationCallback_t3333 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m8786_MethodInfo;
 bool CertificateValidationCallback_EndInvoke_m8786 (CertificateValidationCallback_t3333 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo CertificateValidationCallback_t3333_CertificateValidationCallback__ctor_m8783_ParameterInfos[] = 
{
	{"object", 0, 134218575, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218576, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback__ctor_m8783_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback__ctor_m8783/* method */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, CertificateValidationCallback_t3333_CertificateValidationCallback__ctor_m8783_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType Int32U5BU5D_t156_0_0_0;
extern Il2CppType Int32U5BU5D_t156_0_0_0;
static ParameterInfo CertificateValidationCallback_t3333_CertificateValidationCallback_Invoke_m8784_ParameterInfos[] = 
{
	{"certificate", 0, 134218577, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"certificateErrors", 1, 134218578, &EmptyCustomAttributesCache, &Int32U5BU5D_t156_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
MethodInfo CertificateValidationCallback_Invoke_m8784_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_Invoke_m8784/* method */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t3333_CertificateValidationCallback_Invoke_m8784_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType Int32U5BU5D_t156_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback_t3333_CertificateValidationCallback_BeginInvoke_m8785_ParameterInfos[] = 
{
	{"certificate", 0, 134218579, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"certificateErrors", 1, 134218580, &EmptyCustomAttributesCache, &Int32U5BU5D_t156_0_0_0},
	{"callback", 2, 134218581, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 3, 134218582, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback_BeginInvoke_m8785_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_BeginInvoke_m8785/* method */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t3333_CertificateValidationCallback_BeginInvoke_m8785_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo CertificateValidationCallback_t3333_CertificateValidationCallback_EndInvoke_m8786_ParameterInfos[] = 
{
	{"result", 0, 134218583, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback_EndInvoke_m8786_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_EndInvoke_m8786/* method */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, CertificateValidationCallback_t3333_CertificateValidationCallback_EndInvoke_m8786_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateValidationCallback_t3333_MethodInfos[] =
{
	&CertificateValidationCallback__ctor_m8783_MethodInfo,
	&CertificateValidationCallback_Invoke_m8784_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m8785_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m8786_MethodInfo,
	NULL
};
static MethodInfo* CertificateValidationCallback_t3333_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&CertificateValidationCallback_Invoke_m8784_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m8785_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m8786_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateValidationCallback_t3333_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback_t3333_0_0_0;
extern Il2CppType CertificateValidationCallback_t3333_1_0_0;
struct CertificateValidationCallback_t3333;
TypeInfo CertificateValidationCallback_t3333_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback_t3333_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback_t3333_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback_t3333_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback_t3333_0_0_0/* byval_arg */
	, &CertificateValidationCallback_t3333_1_0_0/* this_arg */
	, CertificateValidationCallback_t3333_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback_t3333/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback_t3333)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t3334_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m8787_MethodInfo;
 void CertificateValidationCallback2__ctor_m8787 (CertificateValidationCallback2_t3334 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m8788_MethodInfo;
 ValidationResult_t3332 * CertificateValidationCallback2_Invoke_m8788 (CertificateValidationCallback2_t3334 * __this, X509CertificateCollection_t3225 * ___collection, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m8788((CertificateValidationCallback2_t3334 *)__this->___prev_9,___collection, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t3332 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t3225 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t3332 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t3225 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t3332 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
ValidationResult_t3332 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t3334(Il2CppObject* delegate, X509CertificateCollection_t3225 * ___collection)
{
	typedef ValidationResult_t3332 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t3225 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t3225 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	ValidationResult_t3332 * _return_value = _il2cpp_pinvoke_func(____collection_marshaled);
	ValidationResult_t3332 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.Protocol.Tls.ValidationResult'."));

	// Marshaling cleanup of parameter '___collection' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m8789_MethodInfo;
 Object_t * CertificateValidationCallback2_BeginInvoke_m8789 (CertificateValidationCallback2_t3334 * __this, X509CertificateCollection_t3225 * ___collection, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m8790_MethodInfo;
 ValidationResult_t3332 * CertificateValidationCallback2_EndInvoke_m8790 (CertificateValidationCallback2_t3334 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t3332 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback2
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo CertificateValidationCallback2_t3334_CertificateValidationCallback2__ctor_m8787_ParameterInfos[] = 
{
	{"object", 0, 134218584, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218585, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback2__ctor_m8787_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback2__ctor_m8787/* method */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, CertificateValidationCallback2_t3334_CertificateValidationCallback2__ctor_m8787_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t3225_0_0_0;
static ParameterInfo CertificateValidationCallback2_t3334_CertificateValidationCallback2_Invoke_m8788_ParameterInfos[] = 
{
	{"collection", 0, 134218586, &EmptyCustomAttributesCache, &X509CertificateCollection_t3225_0_0_0},
};
extern Il2CppType ValidationResult_t3332_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
MethodInfo CertificateValidationCallback2_Invoke_m8788_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_Invoke_m8788/* method */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t3332_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t3334_CertificateValidationCallback2_Invoke_m8788_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t3225_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback2_t3334_CertificateValidationCallback2_BeginInvoke_m8789_ParameterInfos[] = 
{
	{"collection", 0, 134218587, &EmptyCustomAttributesCache, &X509CertificateCollection_t3225_0_0_0},
	{"callback", 1, 134218588, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 2, 134218589, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback2_BeginInvoke_m8789_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_BeginInvoke_m8789/* method */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t3334_CertificateValidationCallback2_BeginInvoke_m8789_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo CertificateValidationCallback2_t3334_CertificateValidationCallback2_EndInvoke_m8790_ParameterInfos[] = 
{
	{"result", 0, 134218590, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType ValidationResult_t3332_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback2_EndInvoke_m8790_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_EndInvoke_m8790/* method */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t3332_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t3334_CertificateValidationCallback2_EndInvoke_m8790_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateValidationCallback2_t3334_MethodInfos[] =
{
	&CertificateValidationCallback2__ctor_m8787_MethodInfo,
	&CertificateValidationCallback2_Invoke_m8788_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m8789_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m8790_MethodInfo,
	NULL
};
static MethodInfo* CertificateValidationCallback2_t3334_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&CertificateValidationCallback2_Invoke_m8788_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m8789_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m8790_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateValidationCallback2_t3334_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback2_t3334_0_0_0;
extern Il2CppType CertificateValidationCallback2_t3334_1_0_0;
struct CertificateValidationCallback2_t3334;
TypeInfo CertificateValidationCallback2_t3334_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback2"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback2_t3334_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback2_t3334_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback2_t3334_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback2_t3334_0_0_0/* byval_arg */
	, &CertificateValidationCallback2_t3334_1_0_0/* this_arg */
	, CertificateValidationCallback2_t3334_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback2_t3334/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback2_t3334)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t3320_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m8791_MethodInfo;
 void CertificateSelectionCallback__ctor_m8791 (CertificateSelectionCallback_t3320 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m8792_MethodInfo;
 X509Certificate_t2983 * CertificateSelectionCallback_Invoke_m8792 (CertificateSelectionCallback_t3320 * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m8792((CertificateSelectionCallback_t3320 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t2983 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t2983 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t2983 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
X509Certificate_t2983 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t3320(Il2CppObject* delegate, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates)
{
	typedef X509Certificate_t2983 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t2998 *, X509Certificate_t2983 *, char*, X509CertificateCollection_t2998 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t2998 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Marshaling of parameter '___serverCertificate' to native representation
	X509Certificate_t2983 * ____serverCertificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled = { 0 };
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Marshaling of parameter '___serverRequestedCertificates' to native representation
	X509CertificateCollection_t2998 * ____serverRequestedCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	X509Certificate_t2983 * _return_value = _il2cpp_pinvoke_func(____clientCertificates_marshaled, ____serverCertificate_marshaled, ____targetHost_marshaled, ____serverRequestedCertificates_marshaled);
	X509Certificate_t2983 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling cleanup of parameter '___clientCertificates' native representation

	// Marshaling cleanup of parameter '___serverCertificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	// Marshaling cleanup of parameter '___serverRequestedCertificates' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m8793_MethodInfo;
 Object_t * CertificateSelectionCallback_BeginInvoke_m8793 (CertificateSelectionCallback_t3320 * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m8794_MethodInfo;
 X509Certificate_t2983 * CertificateSelectionCallback_EndInvoke_m8794 (CertificateSelectionCallback_t3320 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t2983 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateSelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo CertificateSelectionCallback_t3320_CertificateSelectionCallback__ctor_m8791_ParameterInfos[] = 
{
	{"object", 0, 134218591, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218592, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateSelectionCallback__ctor_m8791_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateSelectionCallback__ctor_m8791/* method */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, CertificateSelectionCallback_t3320_CertificateSelectionCallback__ctor_m8791_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t2998_0_0_0;
extern Il2CppType X509CertificateCollection_t2998_0_0_0;
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t2998_0_0_0;
static ParameterInfo CertificateSelectionCallback_t3320_CertificateSelectionCallback_Invoke_m8792_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218593, &EmptyCustomAttributesCache, &X509CertificateCollection_t2998_0_0_0},
	{"serverCertificate", 1, 134218594, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"targetHost", 2, 134218595, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218596, &EmptyCustomAttributesCache, &X509CertificateCollection_t2998_0_0_0},
};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
MethodInfo CertificateSelectionCallback_Invoke_m8792_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_Invoke_m8792/* method */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t2983_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t3320_CertificateSelectionCallback_Invoke_m8792_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t2998_0_0_0;
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t2998_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateSelectionCallback_t3320_CertificateSelectionCallback_BeginInvoke_m8793_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218597, &EmptyCustomAttributesCache, &X509CertificateCollection_t2998_0_0_0},
	{"serverCertificate", 1, 134218598, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"targetHost", 2, 134218599, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218600, &EmptyCustomAttributesCache, &X509CertificateCollection_t2998_0_0_0},
	{"callback", 4, 134218601, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 5, 134218602, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateSelectionCallback_BeginInvoke_m8793_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_BeginInvoke_m8793/* method */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t3320_CertificateSelectionCallback_BeginInvoke_m8793_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo CertificateSelectionCallback_t3320_CertificateSelectionCallback_EndInvoke_m8794_ParameterInfos[] = 
{
	{"result", 0, 134218603, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateSelectionCallback_EndInvoke_m8794_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_EndInvoke_m8794/* method */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t2983_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t3320_CertificateSelectionCallback_EndInvoke_m8794_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateSelectionCallback_t3320_MethodInfos[] =
{
	&CertificateSelectionCallback__ctor_m8791_MethodInfo,
	&CertificateSelectionCallback_Invoke_m8792_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m8793_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m8794_MethodInfo,
	NULL
};
static MethodInfo* CertificateSelectionCallback_t3320_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&CertificateSelectionCallback_Invoke_m8792_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m8793_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m8794_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateSelectionCallback_t3320_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateSelectionCallback_t3320_0_0_0;
extern Il2CppType CertificateSelectionCallback_t3320_1_0_0;
struct CertificateSelectionCallback_t3320;
TypeInfo CertificateSelectionCallback_t3320_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateSelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateSelectionCallback_t3320_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateSelectionCallback_t3320_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateSelectionCallback_t3320_il2cpp_TypeInfo/* cast_class */
	, &CertificateSelectionCallback_t3320_0_0_0/* byval_arg */
	, &CertificateSelectionCallback_t3320_1_0_0/* this_arg */
	, CertificateSelectionCallback_t3320_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateSelectionCallback_t3320/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateSelectionCallback_t3320)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m8795_MethodInfo;
 void PrivateKeySelectionCallback__ctor_m8795 (PrivateKeySelectionCallback_t3321 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m8796_MethodInfo;
 AsymmetricAlgorithm_t3013 * PrivateKeySelectionCallback_Invoke_m8796 (PrivateKeySelectionCallback_t3321 * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m8796((PrivateKeySelectionCallback_t3321 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t3013 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t3013 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t3013 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
AsymmetricAlgorithm_t3013 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t3321(Il2CppObject* delegate, X509Certificate_t2983 * ___certificate, String_t* ___targetHost)
{
	typedef AsymmetricAlgorithm_t3013 * (STDCALL *native_function_ptr_type)(X509Certificate_t2983 *, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t2983 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled = { 0 };
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Native function invocation and marshaling of return value back from native representation
	AsymmetricAlgorithm_t3013 * _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____targetHost_marshaled);
	AsymmetricAlgorithm_t3013 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.AsymmetricAlgorithm'."));

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m8797_MethodInfo;
 Object_t * PrivateKeySelectionCallback_BeginInvoke_m8797 (PrivateKeySelectionCallback_t3321 * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m8798_MethodInfo;
 AsymmetricAlgorithm_t3013 * PrivateKeySelectionCallback_EndInvoke_m8798 (PrivateKeySelectionCallback_t3321 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t3013 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback__ctor_m8795_ParameterInfos[] = 
{
	{"object", 0, 134218604, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218605, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo PrivateKeySelectionCallback__ctor_m8795_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback__ctor_m8795/* method */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback__ctor_m8795_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_Invoke_m8796_ParameterInfos[] = 
{
	{"certificate", 0, 134218606, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"targetHost", 1, 134218607, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType AsymmetricAlgorithm_t3013_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
MethodInfo PrivateKeySelectionCallback_Invoke_m8796_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_Invoke_m8796/* method */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t3013_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_Invoke_m8796_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t2983_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_BeginInvoke_m8797_ParameterInfos[] = 
{
	{"certificate", 0, 134218608, &EmptyCustomAttributesCache, &X509Certificate_t2983_0_0_0},
	{"targetHost", 1, 134218609, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"callback", 2, 134218610, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 3, 134218611, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
MethodInfo PrivateKeySelectionCallback_BeginInvoke_m8797_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_BeginInvoke_m8797/* method */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_BeginInvoke_m8797_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_EndInvoke_m8798_ParameterInfos[] = 
{
	{"result", 0, 134218612, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType AsymmetricAlgorithm_t3013_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo PrivateKeySelectionCallback_EndInvoke_m8798_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_EndInvoke_m8798/* method */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t3013_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t3321_PrivateKeySelectionCallback_EndInvoke_m8798_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PrivateKeySelectionCallback_t3321_MethodInfos[] =
{
	&PrivateKeySelectionCallback__ctor_m8795_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m8796_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m8797_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m8798_MethodInfo,
	NULL
};
static MethodInfo* PrivateKeySelectionCallback_t3321_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m8796_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m8797_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m8798_MethodInfo,
};
static Il2CppInterfaceOffsetPair PrivateKeySelectionCallback_t3321_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrivateKeySelectionCallback_t3321_0_0_0;
extern Il2CppType PrivateKeySelectionCallback_t3321_1_0_0;
struct PrivateKeySelectionCallback_t3321;
TypeInfo PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrivateKeySelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, PrivateKeySelectionCallback_t3321_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrivateKeySelectionCallback_t3321_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrivateKeySelectionCallback_t3321_il2cpp_TypeInfo/* cast_class */
	, &PrivateKeySelectionCallback_t3321_0_0_0/* byval_arg */
	, &PrivateKeySelectionCallback_t3321_1_0_0/* this_arg */
	, PrivateKeySelectionCallback_t3321_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t3321/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrivateKeySelectionCallback_t3321)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t3354_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t3354_marshal(const $ArrayType$3132_t3354& unmarshaled, $ArrayType$3132_t3354_marshaled& marshaled)
{
}
void $ArrayType$3132_t3354_marshal_back(const $ArrayType$3132_t3354_marshaled& marshaled, $ArrayType$3132_t3354& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t3354_marshal_cleanup($ArrayType$3132_t3354_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
static MethodInfo* $ArrayType$3132_t3354_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m519_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m520_MethodInfo;
extern MethodInfo ValueType_ToString_m521_MethodInfo;
static MethodInfo* $ArrayType$3132_t3354_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$3132_t3354_0_0_0;
extern Il2CppType $ArrayType$3132_t3354_1_0_0;
extern TypeInfo ValueType_t144_il2cpp_TypeInfo;
TypeInfo $ArrayType$3132_t3354_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, $ArrayType$3132_t3354_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$3132_t3354_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$3132_t3354_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$3132_t3354_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$3132_t3354_0_0_0/* byval_arg */
	, &$ArrayType$3132_t3354_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$3132_t3354_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$3132_t3354_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$3132_t3354_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$3132_t3354)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$3132_t3354_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t3355_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t3355_marshal(const $ArrayType$256_t3355& unmarshaled, $ArrayType$256_t3355_marshaled& marshaled)
{
}
void $ArrayType$256_t3355_marshal_back(const $ArrayType$256_t3355_marshaled& marshaled, $ArrayType$256_t3355& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t3355_marshal_cleanup($ArrayType$256_t3355_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
static MethodInfo* $ArrayType$256_t3355_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$256_t3355_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$256_t3355_0_0_0;
extern Il2CppType $ArrayType$256_t3355_1_0_0;
TypeInfo $ArrayType$256_t3355_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, $ArrayType$256_t3355_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$256_t3355_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$256_t3355_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$256_t3355_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$256_t3355_0_0_0/* byval_arg */
	, &$ArrayType$256_t3355_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$256_t3355_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$256_t3355_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$256_t3355_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$256_t3355)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$256_t3355_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t3356_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t3356_marshal(const $ArrayType$20_t3356& unmarshaled, $ArrayType$20_t3356_marshaled& marshaled)
{
}
void $ArrayType$20_t3356_marshal_back(const $ArrayType$20_t3356_marshaled& marshaled, $ArrayType$20_t3356& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t3356_marshal_cleanup($ArrayType$20_t3356_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
static MethodInfo* $ArrayType$20_t3356_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$20_t3356_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$20_t3356_0_0_0;
extern Il2CppType $ArrayType$20_t3356_1_0_0;
TypeInfo $ArrayType$20_t3356_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, $ArrayType$20_t3356_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$20_t3356_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$20_t3356_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$20_t3356_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$20_t3356_0_0_0/* byval_arg */
	, &$ArrayType$20_t3356_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$20_t3356_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$20_t3356_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$20_t3356_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$20_t3356)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$20_t3356_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t3357_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t3357_marshal(const $ArrayType$32_t3357& unmarshaled, $ArrayType$32_t3357_marshaled& marshaled)
{
}
void $ArrayType$32_t3357_marshal_back(const $ArrayType$32_t3357_marshaled& marshaled, $ArrayType$32_t3357& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t3357_marshal_cleanup($ArrayType$32_t3357_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
static MethodInfo* $ArrayType$32_t3357_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$32_t3357_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$32_t3357_0_0_0;
extern Il2CppType $ArrayType$32_t3357_1_0_0;
TypeInfo $ArrayType$32_t3357_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, $ArrayType$32_t3357_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$32_t3357_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$32_t3357_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$32_t3357_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$32_t3357_0_0_0/* byval_arg */
	, &$ArrayType$32_t3357_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$32_t3357_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$32_t3357_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$32_t3357_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$32_t3357)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$32_t3357_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t3358_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t3358_marshal(const $ArrayType$48_t3358& unmarshaled, $ArrayType$48_t3358_marshaled& marshaled)
{
}
void $ArrayType$48_t3358_marshal_back(const $ArrayType$48_t3358_marshaled& marshaled, $ArrayType$48_t3358& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t3358_marshal_cleanup($ArrayType$48_t3358_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
static MethodInfo* $ArrayType$48_t3358_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$48_t3358_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$48_t3358_0_0_0;
extern Il2CppType $ArrayType$48_t3358_1_0_0;
TypeInfo $ArrayType$48_t3358_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, $ArrayType$48_t3358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$48_t3358_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$48_t3358_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$48_t3358_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$48_t3358_0_0_0/* byval_arg */
	, &$ArrayType$48_t3358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$48_t3358_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$48_t3358_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$48_t3358_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$48_t3358)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$48_t3358_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t3359_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t3359_marshal(const $ArrayType$64_t3359& unmarshaled, $ArrayType$64_t3359_marshaled& marshaled)
{
}
void $ArrayType$64_t3359_marshal_back(const $ArrayType$64_t3359_marshaled& marshaled, $ArrayType$64_t3359& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t3359_marshal_cleanup($ArrayType$64_t3359_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
static MethodInfo* $ArrayType$64_t3359_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$64_t3359_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$64_t3359_0_0_0;
extern Il2CppType $ArrayType$64_t3359_1_0_0;
TypeInfo $ArrayType$64_t3359_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, $ArrayType$64_t3359_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$64_t3359_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$64_t3359_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$64_t3359_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$64_t3359_0_0_0/* byval_arg */
	, &$ArrayType$64_t3359_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$64_t3359_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$64_t3359_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$64_t3359_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$64_t3359)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$64_t3359_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t3360_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t3360_marshal(const $ArrayType$12_t3360& unmarshaled, $ArrayType$12_t3360_marshaled& marshaled)
{
}
void $ArrayType$12_t3360_marshal_back(const $ArrayType$12_t3360_marshaled& marshaled, $ArrayType$12_t3360& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t3360_marshal_cleanup($ArrayType$12_t3360_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
static MethodInfo* $ArrayType$12_t3360_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$12_t3360_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$12_t3360_0_0_0;
extern Il2CppType $ArrayType$12_t3360_1_0_0;
TypeInfo $ArrayType$12_t3360_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t3360_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$12_t3360_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$12_t3360_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t3360_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$12_t3360_0_0_0/* byval_arg */
	, &$ArrayType$12_t3360_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$12_t3360_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$12_t3360_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$12_t3360_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t3360)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$12_t3360_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t3361_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t3361_marshal(const $ArrayType$16_t3361& unmarshaled, $ArrayType$16_t3361_marshaled& marshaled)
{
}
void $ArrayType$16_t3361_marshal_back(const $ArrayType$16_t3361_marshaled& marshaled, $ArrayType$16_t3361& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t3361_marshal_cleanup($ArrayType$16_t3361_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
static MethodInfo* $ArrayType$16_t3361_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$16_t3361_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$16_t3361_0_0_0;
extern Il2CppType $ArrayType$16_t3361_1_0_0;
TypeInfo $ArrayType$16_t3361_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, $ArrayType$16_t3361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$16_t3361_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$16_t3361_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$16_t3361_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$16_t3361_0_0_0/* byval_arg */
	, &$ArrayType$16_t3361_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$16_t3361_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$16_t3361_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$16_t3361_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$16_t3361)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$16_t3361_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t3362_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t3362_marshal(const $ArrayType$4_t3362& unmarshaled, $ArrayType$4_t3362_marshaled& marshaled)
{
}
void $ArrayType$4_t3362_marshal_back(const $ArrayType$4_t3362_marshaled& marshaled, $ArrayType$4_t3362& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t3362_marshal_cleanup($ArrayType$4_t3362_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$4
static MethodInfo* $ArrayType$4_t3362_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$4_t3362_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$4_t3362_0_0_0;
extern Il2CppType $ArrayType$4_t3362_1_0_0;
TypeInfo $ArrayType$4_t3362_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$4"/* name */
	, ""/* namespaze */
	, $ArrayType$4_t3362_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$4_t3362_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$4_t3362_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$4_t3362_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$4_t3362_0_0_0/* byval_arg */
	, &$ArrayType$4_t3362_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$4_t3362_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$4_t3362_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$4_t3362_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$4_t3362)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$4_t3362_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType $ArrayType$3132_t3354_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_FieldInfo = 
{
	"$$field-0"/* name */
	, &$ArrayType$3132_t3354_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$256_t3355_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_FieldInfo = 
{
	"$$field-5"/* name */
	, &$ArrayType$256_t3355_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D5_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$20_t3356_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_FieldInfo = 
{
	"$$field-6"/* name */
	, &$ArrayType$20_t3356_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D6_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$32_t3357_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_FieldInfo = 
{
	"$$field-7"/* name */
	, &$ArrayType$32_t3357_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D7_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$48_t3358_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_FieldInfo = 
{
	"$$field-8"/* name */
	, &$ArrayType$48_t3358_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D8_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t3359_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_FieldInfo = 
{
	"$$field-9"/* name */
	, &$ArrayType$64_t3359_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D9_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t3359_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_FieldInfo = 
{
	"$$field-11"/* name */
	, &$ArrayType$64_t3359_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D11_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t3359_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_FieldInfo = 
{
	"$$field-12"/* name */
	, &$ArrayType$64_t3359_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D12_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t3359_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_FieldInfo = 
{
	"$$field-13"/* name */
	, &$ArrayType$64_t3359_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D13_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t3360_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_FieldInfo = 
{
	"$$field-14"/* name */
	, &$ArrayType$12_t3360_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D14_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t3360_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_FieldInfo = 
{
	"$$field-15"/* name */
	, &$ArrayType$12_t3360_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D15_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t3360_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_FieldInfo = 
{
	"$$field-16"/* name */
	, &$ArrayType$12_t3360_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D16_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$16_t3361_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_FieldInfo = 
{
	"$$field-17"/* name */
	, &$ArrayType$16_t3361_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D17_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t3362_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_FieldInfo = 
{
	"$$field-21"/* name */
	, &$ArrayType$4_t3362_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D21_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t3362_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_FieldInfo = 
{
	"$$field-22"/* name */
	, &$ArrayType$4_t3362_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields, ___$$fieldU2D22_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t3363_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_DefaultValueData[] = { 0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x7, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0xD, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0, 0x13, 0x0, 0x0, 0x0, 0x17, 0x0, 0x0, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x1F, 0x0, 0x0, 0x0, 0x25, 0x0, 0x0, 0x0, 0x29, 0x0, 0x0, 0x0, 0x2B, 0x0, 0x0, 0x0, 0x2F, 0x0, 0x0, 0x0, 0x35, 0x0, 0x0, 0x0, 0x3B, 0x0, 0x0, 0x0, 0x3D, 0x0, 0x0, 0x0, 0x43, 0x0, 0x0, 0x0, 0x47, 0x0, 0x0, 0x0, 0x49, 0x0, 0x0, 0x0, 0x4F, 0x0, 0x0, 0x0, 0x53, 0x0, 0x0, 0x0, 0x59, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x67, 0x0, 0x0, 0x0, 0x6B, 0x0, 0x0, 0x0, 0x6D, 0x0, 0x0, 0x0, 0x71, 0x0, 0x0, 0x0, 0x7F, 0x0, 0x0, 0x0, 0x83, 0x0, 0x0, 0x0, 0x89, 0x0, 0x0, 0x0, 0x8B, 0x0, 0x0, 0x0, 0x95, 0x0, 0x0, 0x0, 0x97, 0x0, 0x0, 0x0, 0x9D, 0x0, 0x0, 0x0, 0xA3, 0x0, 0x0, 0x0, 0xA7, 0x0, 0x0, 0x0, 0xAD, 0x0, 0x0, 0x0, 0xB3, 0x0, 0x0, 0x0, 0xB5, 0x0, 0x0, 0x0, 0xBF, 0x0, 0x0, 0x0, 0xC1, 0x0, 0x0, 0x0, 0xC5, 0x0, 0x0, 0x0, 0xC7, 0x0, 0x0, 0x0, 0xD3, 0x0, 0x0, 0x0, 0xDF, 0x0, 0x0, 0x0, 0xE3, 0x0, 0x0, 0x0, 0xE5, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0xEF, 0x0, 0x0, 0x0, 0xF1, 0x0, 0x0, 0x0, 0xFB, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x7, 0x1, 0x0, 0x0, 0xD, 0x1, 0x0, 0x0, 0xF, 0x1, 0x0, 0x0, 0x15, 0x1, 0x0, 0x0, 0x19, 0x1, 0x0, 0x0, 0x1B, 0x1, 0x0, 0x0, 0x25, 0x1, 0x0, 0x0, 0x33, 0x1, 0x0, 0x0, 0x37, 0x1, 0x0, 0x0, 0x39, 0x1, 0x0, 0x0, 0x3D, 0x1, 0x0, 0x0, 0x4B, 0x1, 0x0, 0x0, 0x51, 0x1, 0x0, 0x0, 0x5B, 0x1, 0x0, 0x0, 0x5D, 0x1, 0x0, 0x0, 0x61, 0x1, 0x0, 0x0, 0x67, 0x1, 0x0, 0x0, 0x6F, 0x1, 0x0, 0x0, 0x75, 0x1, 0x0, 0x0, 0x7B, 0x1, 0x0, 0x0, 0x7F, 0x1, 0x0, 0x0, 0x85, 0x1, 0x0, 0x0, 0x8D, 0x1, 0x0, 0x0, 0x91, 0x1, 0x0, 0x0, 0x99, 0x1, 0x0, 0x0, 0xA3, 0x1, 0x0, 0x0, 0xA5, 0x1, 0x0, 0x0, 0xAF, 0x1, 0x0, 0x0, 0xB1, 0x1, 0x0, 0x0, 0xB7, 0x1, 0x0, 0x0, 0xBB, 0x1, 0x0, 0x0, 0xC1, 0x1, 0x0, 0x0, 0xC9, 0x1, 0x0, 0x0, 0xCD, 0x1, 0x0, 0x0, 0xCF, 0x1, 0x0, 0x0, 0xD3, 0x1, 0x0, 0x0, 0xDF, 0x1, 0x0, 0x0, 0xE7, 0x1, 0x0, 0x0, 0xEB, 0x1, 0x0, 0x0, 0xF3, 0x1, 0x0, 0x0, 0xF7, 0x1, 0x0, 0x0, 0xFD, 0x1, 0x0, 0x0, 0x9, 0x2, 0x0, 0x0, 0xB, 0x2, 0x0, 0x0, 0x1D, 0x2, 0x0, 0x0, 0x23, 0x2, 0x0, 0x0, 0x2D, 0x2, 0x0, 0x0, 0x33, 0x2, 0x0, 0x0, 0x39, 0x2, 0x0, 0x0, 0x3B, 0x2, 0x0, 0x0, 0x41, 0x2, 0x0, 0x0, 0x4B, 0x2, 0x0, 0x0, 0x51, 0x2, 0x0, 0x0, 0x57, 0x2, 0x0, 0x0, 0x59, 0x2, 0x0, 0x0, 0x5F, 0x2, 0x0, 0x0, 0x65, 0x2, 0x0, 0x0, 0x69, 0x2, 0x0, 0x0, 0x6B, 0x2, 0x0, 0x0, 0x77, 0x2, 0x0, 0x0, 0x81, 0x2, 0x0, 0x0, 0x83, 0x2, 0x0, 0x0, 0x87, 0x2, 0x0, 0x0, 0x8D, 0x2, 0x0, 0x0, 0x93, 0x2, 0x0, 0x0, 0x95, 0x2, 0x0, 0x0, 0xA1, 0x2, 0x0, 0x0, 0xA5, 0x2, 0x0, 0x0, 0xAB, 0x2, 0x0, 0x0, 0xB3, 0x2, 0x0, 0x0, 0xBD, 0x2, 0x0, 0x0, 0xC5, 0x2, 0x0, 0x0, 0xCF, 0x2, 0x0, 0x0, 0xD7, 0x2, 0x0, 0x0, 0xDD, 0x2, 0x0, 0x0, 0xE3, 0x2, 0x0, 0x0, 0xE7, 0x2, 0x0, 0x0, 0xEF, 0x2, 0x0, 0x0, 0xF5, 0x2, 0x0, 0x0, 0xF9, 0x2, 0x0, 0x0, 0x1, 0x3, 0x0, 0x0, 0x5, 0x3, 0x0, 0x0, 0x13, 0x3, 0x0, 0x0, 0x1D, 0x3, 0x0, 0x0, 0x29, 0x3, 0x0, 0x0, 0x2B, 0x3, 0x0, 0x0, 0x35, 0x3, 0x0, 0x0, 0x37, 0x3, 0x0, 0x0, 0x3B, 0x3, 0x0, 0x0, 0x3D, 0x3, 0x0, 0x0, 0x47, 0x3, 0x0, 0x0, 0x55, 0x3, 0x0, 0x0, 0x59, 0x3, 0x0, 0x0, 0x5B, 0x3, 0x0, 0x0, 0x5F, 0x3, 0x0, 0x0, 0x6D, 0x3, 0x0, 0x0, 0x71, 0x3, 0x0, 0x0, 0x73, 0x3, 0x0, 0x0, 0x77, 0x3, 0x0, 0x0, 0x8B, 0x3, 0x0, 0x0, 0x8F, 0x3, 0x0, 0x0, 0x97, 0x3, 0x0, 0x0, 0xA1, 0x3, 0x0, 0x0, 0xA9, 0x3, 0x0, 0x0, 0xAD, 0x3, 0x0, 0x0, 0xB3, 0x3, 0x0, 0x0, 0xB9, 0x3, 0x0, 0x0, 0xC7, 0x3, 0x0, 0x0, 0xCB, 0x3, 0x0, 0x0, 0xD1, 0x3, 0x0, 0x0, 0xD7, 0x3, 0x0, 0x0, 0xDF, 0x3, 0x0, 0x0, 0xE5, 0x3, 0x0, 0x0, 0xF1, 0x3, 0x0, 0x0, 0xF5, 0x3, 0x0, 0x0, 0xFB, 0x3, 0x0, 0x0, 0xFD, 0x3, 0x0, 0x0, 0x7, 0x4, 0x0, 0x0, 0x9, 0x4, 0x0, 0x0, 0xF, 0x4, 0x0, 0x0, 0x19, 0x4, 0x0, 0x0, 0x1B, 0x4, 0x0, 0x0, 0x25, 0x4, 0x0, 0x0, 0x27, 0x4, 0x0, 0x0, 0x2D, 0x4, 0x0, 0x0, 0x3F, 0x4, 0x0, 0x0, 0x43, 0x4, 0x0, 0x0, 0x45, 0x4, 0x0, 0x0, 0x49, 0x4, 0x0, 0x0, 0x4F, 0x4, 0x0, 0x0, 0x55, 0x4, 0x0, 0x0, 0x5D, 0x4, 0x0, 0x0, 0x63, 0x4, 0x0, 0x0, 0x69, 0x4, 0x0, 0x0, 0x7F, 0x4, 0x0, 0x0, 0x81, 0x4, 0x0, 0x0, 0x8B, 0x4, 0x0, 0x0, 0x93, 0x4, 0x0, 0x0, 0x9D, 0x4, 0x0, 0x0, 0xA3, 0x4, 0x0, 0x0, 0xA9, 0x4, 0x0, 0x0, 0xB1, 0x4, 0x0, 0x0, 0xBD, 0x4, 0x0, 0x0, 0xC1, 0x4, 0x0, 0x0, 0xC7, 0x4, 0x0, 0x0, 0xCD, 0x4, 0x0, 0x0, 0xCF, 0x4, 0x0, 0x0, 0xD5, 0x4, 0x0, 0x0, 0xE1, 0x4, 0x0, 0x0, 0xEB, 0x4, 0x0, 0x0, 0xFD, 0x4, 0x0, 0x0, 0xFF, 0x4, 0x0, 0x0, 0x3, 0x5, 0x0, 0x0, 0x9, 0x5, 0x0, 0x0, 0xB, 0x5, 0x0, 0x0, 0x11, 0x5, 0x0, 0x0, 0x15, 0x5, 0x0, 0x0, 0x17, 0x5, 0x0, 0x0, 0x1B, 0x5, 0x0, 0x0, 0x27, 0x5, 0x0, 0x0, 0x29, 0x5, 0x0, 0x0, 0x2F, 0x5, 0x0, 0x0, 0x51, 0x5, 0x0, 0x0, 0x57, 0x5, 0x0, 0x0, 0x5D, 0x5, 0x0, 0x0, 0x65, 0x5, 0x0, 0x0, 0x77, 0x5, 0x0, 0x0, 0x81, 0x5, 0x0, 0x0, 0x8F, 0x5, 0x0, 0x0, 0x93, 0x5, 0x0, 0x0, 0x95, 0x5, 0x0, 0x0, 0x99, 0x5, 0x0, 0x0, 0x9F, 0x5, 0x0, 0x0, 0xA7, 0x5, 0x0, 0x0, 0xAB, 0x5, 0x0, 0x0, 0xAD, 0x5, 0x0, 0x0, 0xB3, 0x5, 0x0, 0x0, 0xBF, 0x5, 0x0, 0x0, 0xC9, 0x5, 0x0, 0x0, 0xCB, 0x5, 0x0, 0x0, 0xCF, 0x5, 0x0, 0x0, 0xD1, 0x5, 0x0, 0x0, 0xD5, 0x5, 0x0, 0x0, 0xDB, 0x5, 0x0, 0x0, 0xE7, 0x5, 0x0, 0x0, 0xF3, 0x5, 0x0, 0x0, 0xFB, 0x5, 0x0, 0x0, 0x7, 0x6, 0x0, 0x0, 0xD, 0x6, 0x0, 0x0, 0x11, 0x6, 0x0, 0x0, 0x17, 0x6, 0x0, 0x0, 0x1F, 0x6, 0x0, 0x0, 0x23, 0x6, 0x0, 0x0, 0x2B, 0x6, 0x0, 0x0, 0x2F, 0x6, 0x0, 0x0, 0x3D, 0x6, 0x0, 0x0, 0x41, 0x6, 0x0, 0x0, 0x47, 0x6, 0x0, 0x0, 0x49, 0x6, 0x0, 0x0, 0x4D, 0x6, 0x0, 0x0, 0x53, 0x6, 0x0, 0x0, 0x55, 0x6, 0x0, 0x0, 0x5B, 0x6, 0x0, 0x0, 0x65, 0x6, 0x0, 0x0, 0x79, 0x6, 0x0, 0x0, 0x7F, 0x6, 0x0, 0x0, 0x83, 0x6, 0x0, 0x0, 0x85, 0x6, 0x0, 0x0, 0x9D, 0x6, 0x0, 0x0, 0xA1, 0x6, 0x0, 0x0, 0xA3, 0x6, 0x0, 0x0, 0xAD, 0x6, 0x0, 0x0, 0xB9, 0x6, 0x0, 0x0, 0xBB, 0x6, 0x0, 0x0, 0xC5, 0x6, 0x0, 0x0, 0xCD, 0x6, 0x0, 0x0, 0xD3, 0x6, 0x0, 0x0, 0xD9, 0x6, 0x0, 0x0, 0xDF, 0x6, 0x0, 0x0, 0xF1, 0x6, 0x0, 0x0, 0xF7, 0x6, 0x0, 0x0, 0xFB, 0x6, 0x0, 0x0, 0xFD, 0x6, 0x0, 0x0, 0x9, 0x7, 0x0, 0x0, 0x13, 0x7, 0x0, 0x0, 0x1F, 0x7, 0x0, 0x0, 0x27, 0x7, 0x0, 0x0, 0x37, 0x7, 0x0, 0x0, 0x45, 0x7, 0x0, 0x0, 0x4B, 0x7, 0x0, 0x0, 0x4F, 0x7, 0x0, 0x0, 0x51, 0x7, 0x0, 0x0, 0x55, 0x7, 0x0, 0x0, 0x57, 0x7, 0x0, 0x0, 0x61, 0x7, 0x0, 0x0, 0x6D, 0x7, 0x0, 0x0, 0x73, 0x7, 0x0, 0x0, 0x79, 0x7, 0x0, 0x0, 0x8B, 0x7, 0x0, 0x0, 0x8D, 0x7, 0x0, 0x0, 0x9D, 0x7, 0x0, 0x0, 0x9F, 0x7, 0x0, 0x0, 0xB5, 0x7, 0x0, 0x0, 0xBB, 0x7, 0x0, 0x0, 0xC3, 0x7, 0x0, 0x0, 0xC9, 0x7, 0x0, 0x0, 0xCD, 0x7, 0x0, 0x0, 0xCF, 0x7, 0x0, 0x0, 0xD3, 0x7, 0x0, 0x0, 0xDB, 0x7, 0x0, 0x0, 0xE1, 0x7, 0x0, 0x0, 0xEB, 0x7, 0x0, 0x0, 0xED, 0x7, 0x0, 0x0, 0xF7, 0x7, 0x0, 0x0, 0x5, 0x8, 0x0, 0x0, 0xF, 0x8, 0x0, 0x0, 0x15, 0x8, 0x0, 0x0, 0x21, 0x8, 0x0, 0x0, 0x23, 0x8, 0x0, 0x0, 0x27, 0x8, 0x0, 0x0, 0x29, 0x8, 0x0, 0x0, 0x33, 0x8, 0x0, 0x0, 0x3F, 0x8, 0x0, 0x0, 0x41, 0x8, 0x0, 0x0, 0x51, 0x8, 0x0, 0x0, 0x53, 0x8, 0x0, 0x0, 0x59, 0x8, 0x0, 0x0, 0x5D, 0x8, 0x0, 0x0, 0x5F, 0x8, 0x0, 0x0, 0x69, 0x8, 0x0, 0x0, 0x71, 0x8, 0x0, 0x0, 0x83, 0x8, 0x0, 0x0, 0x9B, 0x8, 0x0, 0x0, 0x9F, 0x8, 0x0, 0x0, 0xA5, 0x8, 0x0, 0x0, 0xAD, 0x8, 0x0, 0x0, 0xBD, 0x8, 0x0, 0x0, 0xBF, 0x8, 0x0, 0x0, 0xC3, 0x8, 0x0, 0x0, 0xCB, 0x8, 0x0, 0x0, 0xDB, 0x8, 0x0, 0x0, 0xDD, 0x8, 0x0, 0x0, 0xE1, 0x8, 0x0, 0x0, 0xE9, 0x8, 0x0, 0x0, 0xEF, 0x8, 0x0, 0x0, 0xF5, 0x8, 0x0, 0x0, 0xF9, 0x8, 0x0, 0x0, 0x5, 0x9, 0x0, 0x0, 0x7, 0x9, 0x0, 0x0, 0x1D, 0x9, 0x0, 0x0, 0x23, 0x9, 0x0, 0x0, 0x25, 0x9, 0x0, 0x0, 0x2B, 0x9, 0x0, 0x0, 0x2F, 0x9, 0x0, 0x0, 0x35, 0x9, 0x0, 0x0, 0x43, 0x9, 0x0, 0x0, 0x49, 0x9, 0x0, 0x0, 0x4D, 0x9, 0x0, 0x0, 0x4F, 0x9, 0x0, 0x0, 0x55, 0x9, 0x0, 0x0, 0x59, 0x9, 0x0, 0x0, 0x5F, 0x9, 0x0, 0x0, 0x6B, 0x9, 0x0, 0x0, 0x71, 0x9, 0x0, 0x0, 0x77, 0x9, 0x0, 0x0, 0x85, 0x9, 0x0, 0x0, 0x89, 0x9, 0x0, 0x0, 0x8F, 0x9, 0x0, 0x0, 0x9B, 0x9, 0x0, 0x0, 0xA3, 0x9, 0x0, 0x0, 0xA9, 0x9, 0x0, 0x0, 0xAD, 0x9, 0x0, 0x0, 0xC7, 0x9, 0x0, 0x0, 0xD9, 0x9, 0x0, 0x0, 0xE3, 0x9, 0x0, 0x0, 0xEB, 0x9, 0x0, 0x0, 0xEF, 0x9, 0x0, 0x0, 0xF5, 0x9, 0x0, 0x0, 0xF7, 0x9, 0x0, 0x0, 0xFD, 0x9, 0x0, 0x0, 0x13, 0xA, 0x0, 0x0, 0x1F, 0xA, 0x0, 0x0, 0x21, 0xA, 0x0, 0x0, 0x31, 0xA, 0x0, 0x0, 0x39, 0xA, 0x0, 0x0, 0x3D, 0xA, 0x0, 0x0, 0x49, 0xA, 0x0, 0x0, 0x57, 0xA, 0x0, 0x0, 0x61, 0xA, 0x0, 0x0, 0x63, 0xA, 0x0, 0x0, 0x67, 0xA, 0x0, 0x0, 0x6F, 0xA, 0x0, 0x0, 0x75, 0xA, 0x0, 0x0, 0x7B, 0xA, 0x0, 0x0, 0x7F, 0xA, 0x0, 0x0, 0x81, 0xA, 0x0, 0x0, 0x85, 0xA, 0x0, 0x0, 0x8B, 0xA, 0x0, 0x0, 0x93, 0xA, 0x0, 0x0, 0x97, 0xA, 0x0, 0x0, 0x99, 0xA, 0x0, 0x0, 0x9F, 0xA, 0x0, 0x0, 0xA9, 0xA, 0x0, 0x0, 0xAB, 0xA, 0x0, 0x0, 0xB5, 0xA, 0x0, 0x0, 0xBD, 0xA, 0x0, 0x0, 0xC1, 0xA, 0x0, 0x0, 0xCF, 0xA, 0x0, 0x0, 0xD9, 0xA, 0x0, 0x0, 0xE5, 0xA, 0x0, 0x0, 0xE7, 0xA, 0x0, 0x0, 0xED, 0xA, 0x0, 0x0, 0xF1, 0xA, 0x0, 0x0, 0xF3, 0xA, 0x0, 0x0, 0x3, 0xB, 0x0, 0x0, 0x11, 0xB, 0x0, 0x0, 0x15, 0xB, 0x0, 0x0, 0x1B, 0xB, 0x0, 0x0, 0x23, 0xB, 0x0, 0x0, 0x29, 0xB, 0x0, 0x0, 0x2D, 0xB, 0x0, 0x0, 0x3F, 0xB, 0x0, 0x0, 0x47, 0xB, 0x0, 0x0, 0x51, 0xB, 0x0, 0x0, 0x57, 0xB, 0x0, 0x0, 0x5D, 0xB, 0x0, 0x0, 0x65, 0xB, 0x0, 0x0, 0x6F, 0xB, 0x0, 0x0, 0x7B, 0xB, 0x0, 0x0, 0x89, 0xB, 0x0, 0x0, 0x8D, 0xB, 0x0, 0x0, 0x93, 0xB, 0x0, 0x0, 0x99, 0xB, 0x0, 0x0, 0x9B, 0xB, 0x0, 0x0, 0xB7, 0xB, 0x0, 0x0, 0xB9, 0xB, 0x0, 0x0, 0xC3, 0xB, 0x0, 0x0, 0xCB, 0xB, 0x0, 0x0, 0xCF, 0xB, 0x0, 0x0, 0xDD, 0xB, 0x0, 0x0, 0xE1, 0xB, 0x0, 0x0, 0xE9, 0xB, 0x0, 0x0, 0xF5, 0xB, 0x0, 0x0, 0xFB, 0xB, 0x0, 0x0, 0x7, 0xC, 0x0, 0x0, 0xB, 0xC, 0x0, 0x0, 0x11, 0xC, 0x0, 0x0, 0x25, 0xC, 0x0, 0x0, 0x2F, 0xC, 0x0, 0x0, 0x31, 0xC, 0x0, 0x0, 0x41, 0xC, 0x0, 0x0, 0x5B, 0xC, 0x0, 0x0, 0x5F, 0xC, 0x0, 0x0, 0x61, 0xC, 0x0, 0x0, 0x6D, 0xC, 0x0, 0x0, 0x73, 0xC, 0x0, 0x0, 0x77, 0xC, 0x0, 0x0, 0x83, 0xC, 0x0, 0x0, 0x89, 0xC, 0x0, 0x0, 0x91, 0xC, 0x0, 0x0, 0x95, 0xC, 0x0, 0x0, 0x9D, 0xC, 0x0, 0x0, 0xB3, 0xC, 0x0, 0x0, 0xB5, 0xC, 0x0, 0x0, 0xB9, 0xC, 0x0, 0x0, 0xBB, 0xC, 0x0, 0x0, 0xC7, 0xC, 0x0, 0x0, 0xE3, 0xC, 0x0, 0x0, 0xE5, 0xC, 0x0, 0x0, 0xEB, 0xC, 0x0, 0x0, 0xF1, 0xC, 0x0, 0x0, 0xF7, 0xC, 0x0, 0x0, 0xFB, 0xC, 0x0, 0x0, 0x1, 0xD, 0x0, 0x0, 0x3, 0xD, 0x0, 0x0, 0xF, 0xD, 0x0, 0x0, 0x13, 0xD, 0x0, 0x0, 0x1F, 0xD, 0x0, 0x0, 0x21, 0xD, 0x0, 0x0, 0x2B, 0xD, 0x0, 0x0, 0x2D, 0xD, 0x0, 0x0, 0x3D, 0xD, 0x0, 0x0, 0x3F, 0xD, 0x0, 0x0, 0x4F, 0xD, 0x0, 0x0, 0x55, 0xD, 0x0, 0x0, 0x69, 0xD, 0x0, 0x0, 0x79, 0xD, 0x0, 0x0, 0x81, 0xD, 0x0, 0x0, 0x85, 0xD, 0x0, 0x0, 0x87, 0xD, 0x0, 0x0, 0x8B, 0xD, 0x0, 0x0, 0x8D, 0xD, 0x0, 0x0, 0xA3, 0xD, 0x0, 0x0, 0xAB, 0xD, 0x0, 0x0, 0xB7, 0xD, 0x0, 0x0, 0xBD, 0xD, 0x0, 0x0, 0xC7, 0xD, 0x0, 0x0, 0xC9, 0xD, 0x0, 0x0, 0xCD, 0xD, 0x0, 0x0, 0xD3, 0xD, 0x0, 0x0, 0xD5, 0xD, 0x0, 0x0, 0xDB, 0xD, 0x0, 0x0, 0xE5, 0xD, 0x0, 0x0, 0xE7, 0xD, 0x0, 0x0, 0xF3, 0xD, 0x0, 0x0, 0xFD, 0xD, 0x0, 0x0, 0xFF, 0xD, 0x0, 0x0, 0x9, 0xE, 0x0, 0x0, 0x17, 0xE, 0x0, 0x0, 0x1D, 0xE, 0x0, 0x0, 0x21, 0xE, 0x0, 0x0, 0x27, 0xE, 0x0, 0x0, 0x2F, 0xE, 0x0, 0x0, 0x35, 0xE, 0x0, 0x0, 0x3B, 0xE, 0x0, 0x0, 0x4B, 0xE, 0x0, 0x0, 0x57, 0xE, 0x0, 0x0, 0x59, 0xE, 0x0, 0x0, 0x5D, 0xE, 0x0, 0x0, 0x6B, 0xE, 0x0, 0x0, 0x71, 0xE, 0x0, 0x0, 0x75, 0xE, 0x0, 0x0, 0x7D, 0xE, 0x0, 0x0, 0x87, 0xE, 0x0, 0x0, 0x8F, 0xE, 0x0, 0x0, 0x95, 0xE, 0x0, 0x0, 0x9B, 0xE, 0x0, 0x0, 0xB1, 0xE, 0x0, 0x0, 0xB7, 0xE, 0x0, 0x0, 0xB9, 0xE, 0x0, 0x0, 0xC3, 0xE, 0x0, 0x0, 0xD1, 0xE, 0x0, 0x0, 0xD5, 0xE, 0x0, 0x0, 0xDB, 0xE, 0x0, 0x0, 0xED, 0xE, 0x0, 0x0, 0xEF, 0xE, 0x0, 0x0, 0xF9, 0xE, 0x0, 0x0, 0x7, 0xF, 0x0, 0x0, 0xB, 0xF, 0x0, 0x0, 0xD, 0xF, 0x0, 0x0, 0x17, 0xF, 0x0, 0x0, 0x25, 0xF, 0x0, 0x0, 0x29, 0xF, 0x0, 0x0, 0x31, 0xF, 0x0, 0x0, 0x43, 0xF, 0x0, 0x0, 0x47, 0xF, 0x0, 0x0, 0x4D, 0xF, 0x0, 0x0, 0x4F, 0xF, 0x0, 0x0, 0x53, 0xF, 0x0, 0x0, 0x59, 0xF, 0x0, 0x0, 0x5B, 0xF, 0x0, 0x0, 0x67, 0xF, 0x0, 0x0, 0x6B, 0xF, 0x0, 0x0, 0x7F, 0xF, 0x0, 0x0, 0x95, 0xF, 0x0, 0x0, 0xA1, 0xF, 0x0, 0x0, 0xA3, 0xF, 0x0, 0x0, 0xA7, 0xF, 0x0, 0x0, 0xAD, 0xF, 0x0, 0x0, 0xB3, 0xF, 0x0, 0x0, 0xB5, 0xF, 0x0, 0x0, 0xBB, 0xF, 0x0, 0x0, 0xD1, 0xF, 0x0, 0x0, 0xD3, 0xF, 0x0, 0x0, 0xD9, 0xF, 0x0, 0x0, 0xE9, 0xF, 0x0, 0x0, 0xEF, 0xF, 0x0, 0x0, 0xFB, 0xF, 0x0, 0x0, 0xFD, 0xF, 0x0, 0x0, 0x3, 0x10, 0x0, 0x0, 0xF, 0x10, 0x0, 0x0, 0x1F, 0x10, 0x0, 0x0, 0x21, 0x10, 0x0, 0x0, 0x25, 0x10, 0x0, 0x0, 0x2B, 0x10, 0x0, 0x0, 0x39, 0x10, 0x0, 0x0, 0x3D, 0x10, 0x0, 0x0, 0x3F, 0x10, 0x0, 0x0, 0x51, 0x10, 0x0, 0x0, 0x69, 0x10, 0x0, 0x0, 0x73, 0x10, 0x0, 0x0, 0x79, 0x10, 0x0, 0x0, 0x7B, 0x10, 0x0, 0x0, 0x85, 0x10, 0x0, 0x0, 0x87, 0x10, 0x0, 0x0, 0x91, 0x10, 0x0, 0x0, 0x93, 0x10, 0x0, 0x0, 0x9D, 0x10, 0x0, 0x0, 0xA3, 0x10, 0x0, 0x0, 0xA5, 0x10, 0x0, 0x0, 0xAF, 0x10, 0x0, 0x0, 0xB1, 0x10, 0x0, 0x0, 0xBB, 0x10, 0x0, 0x0, 0xC1, 0x10, 0x0, 0x0, 0xC9, 0x10, 0x0, 0x0, 0xE7, 0x10, 0x0, 0x0, 0xF1, 0x10, 0x0, 0x0, 0xF3, 0x10, 0x0, 0x0, 0xFD, 0x10, 0x0, 0x0, 0x5, 0x11, 0x0, 0x0, 0xB, 0x11, 0x0, 0x0, 0x15, 0x11, 0x0, 0x0, 0x27, 0x11, 0x0, 0x0, 0x2D, 0x11, 0x0, 0x0, 0x39, 0x11, 0x0, 0x0, 0x45, 0x11, 0x0, 0x0, 0x47, 0x11, 0x0, 0x0, 0x59, 0x11, 0x0, 0x0, 0x5F, 0x11, 0x0, 0x0, 0x63, 0x11, 0x0, 0x0, 0x69, 0x11, 0x0, 0x0, 0x6F, 0x11, 0x0, 0x0, 0x81, 0x11, 0x0, 0x0, 0x83, 0x11, 0x0, 0x0, 0x8D, 0x11, 0x0, 0x0, 0x9B, 0x11, 0x0, 0x0, 0xA1, 0x11, 0x0, 0x0, 0xA5, 0x11, 0x0, 0x0, 0xA7, 0x11, 0x0, 0x0, 0xAB, 0x11, 0x0, 0x0, 0xC3, 0x11, 0x0, 0x0, 0xC5, 0x11, 0x0, 0x0, 0xD1, 0x11, 0x0, 0x0, 0xD7, 0x11, 0x0, 0x0, 0xE7, 0x11, 0x0, 0x0, 0xEF, 0x11, 0x0, 0x0, 0xF5, 0x11, 0x0, 0x0, 0xFB, 0x11, 0x0, 0x0, 0xD, 0x12, 0x0, 0x0, 0x1D, 0x12, 0x0, 0x0, 0x1F, 0x12, 0x0, 0x0, 0x23, 0x12, 0x0, 0x0, 0x29, 0x12, 0x0, 0x0, 0x2B, 0x12, 0x0, 0x0, 0x31, 0x12, 0x0, 0x0, 0x37, 0x12, 0x0, 0x0, 0x41, 0x12, 0x0, 0x0, 0x47, 0x12, 0x0, 0x0, 0x53, 0x12, 0x0, 0x0, 0x5F, 0x12, 0x0, 0x0, 0x71, 0x12, 0x0, 0x0, 0x73, 0x12, 0x0, 0x0, 0x79, 0x12, 0x0, 0x0, 0x7D, 0x12, 0x0, 0x0, 0x8F, 0x12, 0x0, 0x0, 0x97, 0x12, 0x0, 0x0, 0xAF, 0x12, 0x0, 0x0, 0xB3, 0x12, 0x0, 0x0, 0xB5, 0x12, 0x0, 0x0, 0xB9, 0x12, 0x0, 0x0, 0xBF, 0x12, 0x0, 0x0, 0xC1, 0x12, 0x0, 0x0, 0xCD, 0x12, 0x0, 0x0, 0xD1, 0x12, 0x0, 0x0, 0xDF, 0x12, 0x0, 0x0, 0xFD, 0x12, 0x0, 0x0, 0x7, 0x13, 0x0, 0x0, 0xD, 0x13, 0x0, 0x0, 0x19, 0x13, 0x0, 0x0, 0x27, 0x13, 0x0, 0x0, 0x2D, 0x13, 0x0, 0x0, 0x37, 0x13, 0x0, 0x0, 0x43, 0x13, 0x0, 0x0, 0x45, 0x13, 0x0, 0x0, 0x49, 0x13, 0x0, 0x0, 0x4F, 0x13, 0x0, 0x0, 0x57, 0x13, 0x0, 0x0, 0x5D, 0x13, 0x0, 0x0, 0x67, 0x13, 0x0, 0x0, 0x69, 0x13, 0x0, 0x0, 0x6D, 0x13, 0x0, 0x0, 0x7B, 0x13, 0x0, 0x0, 0x81, 0x13, 0x0, 0x0, 0x87, 0x13, 0x0, 0x0, 0x8B, 0x13, 0x0, 0x0, 0x91, 0x13, 0x0, 0x0, 0x93, 0x13, 0x0, 0x0, 0x9D, 0x13, 0x0, 0x0, 0x9F, 0x13, 0x0, 0x0, 0xAF, 0x13, 0x0, 0x0, 0xBB, 0x13, 0x0, 0x0, 0xC3, 0x13, 0x0, 0x0, 0xD5, 0x13, 0x0, 0x0, 0xD9, 0x13, 0x0, 0x0, 0xDF, 0x13, 0x0, 0x0, 0xEB, 0x13, 0x0, 0x0, 0xED, 0x13, 0x0, 0x0, 0xF3, 0x13, 0x0, 0x0, 0xF9, 0x13, 0x0, 0x0, 0xFF, 0x13, 0x0, 0x0, 0x1B, 0x14, 0x0, 0x0, 0x21, 0x14, 0x0, 0x0, 0x2F, 0x14, 0x0, 0x0, 0x33, 0x14, 0x0, 0x0, 0x3B, 0x14, 0x0, 0x0, 0x45, 0x14, 0x0, 0x0, 0x4D, 0x14, 0x0, 0x0, 0x59, 0x14, 0x0, 0x0, 0x6B, 0x14, 0x0, 0x0, 0x6F, 0x14, 0x0, 0x0, 0x71, 0x14, 0x0, 0x0, 0x75, 0x14, 0x0, 0x0, 0x8D, 0x14, 0x0, 0x0, 0x99, 0x14, 0x0, 0x0, 0x9F, 0x14, 0x0, 0x0, 0xA1, 0x14, 0x0, 0x0, 0xB1, 0x14, 0x0, 0x0, 0xB7, 0x14, 0x0, 0x0, 0xBD, 0x14, 0x0, 0x0, 0xCB, 0x14, 0x0, 0x0, 0xD5, 0x14, 0x0, 0x0, 0xE3, 0x14, 0x0, 0x0, 0xE7, 0x14, 0x0, 0x0, 0x5, 0x15, 0x0, 0x0, 0xB, 0x15, 0x0, 0x0, 0x11, 0x15, 0x0, 0x0, 0x17, 0x15, 0x0, 0x0, 0x1F, 0x15, 0x0, 0x0, 0x25, 0x15, 0x0, 0x0, 0x29, 0x15, 0x0, 0x0, 0x2B, 0x15, 0x0, 0x0, 0x37, 0x15, 0x0, 0x0, 0x3D, 0x15, 0x0, 0x0, 0x41, 0x15, 0x0, 0x0, 0x43, 0x15, 0x0, 0x0, 0x49, 0x15, 0x0, 0x0, 0x5F, 0x15, 0x0, 0x0, 0x65, 0x15, 0x0, 0x0, 0x67, 0x15, 0x0, 0x0, 0x6B, 0x15, 0x0, 0x0, 0x7D, 0x15, 0x0, 0x0, 0x7F, 0x15, 0x0, 0x0, 0x83, 0x15, 0x0, 0x0, 0x8F, 0x15, 0x0, 0x0, 0x91, 0x15, 0x0, 0x0, 0x97, 0x15, 0x0, 0x0, 0x9B, 0x15, 0x0, 0x0, 0xB5, 0x15, 0x0, 0x0, 0xBB, 0x15, 0x0, 0x0, 0xC1, 0x15, 0x0, 0x0, 0xC5, 0x15, 0x0, 0x0, 0xCD, 0x15, 0x0, 0x0, 0xD7, 0x15, 0x0, 0x0, 0xF7, 0x15, 0x0, 0x0, 0x7, 0x16, 0x0, 0x0, 0x9, 0x16, 0x0, 0x0, 0xF, 0x16, 0x0, 0x0, 0x13, 0x16, 0x0, 0x0, 0x15, 0x16, 0x0, 0x0, 0x19, 0x16, 0x0, 0x0, 0x1B, 0x16, 0x0, 0x0, 0x25, 0x16, 0x0, 0x0, 0x33, 0x16, 0x0, 0x0, 0x39, 0x16, 0x0, 0x0, 0x3D, 0x16, 0x0, 0x0, 0x45, 0x16, 0x0, 0x0, 0x4F, 0x16, 0x0, 0x0, 0x55, 0x16, 0x0, 0x0, 0x69, 0x16, 0x0, 0x0, 0x6D, 0x16, 0x0, 0x0, 0x6F, 0x16, 0x0, 0x0, 0x75, 0x16, 0x0, 0x0, 0x93, 0x16, 0x0, 0x0, 0x97, 0x16, 0x0, 0x0, 0x9F, 0x16, 0x0, 0x0, 0xA9, 0x16, 0x0, 0x0, 0xAF, 0x16, 0x0, 0x0, 0xB5, 0x16, 0x0, 0x0, 0xBD, 0x16, 0x0, 0x0, 0xC3, 0x16, 0x0, 0x0, 0xCF, 0x16, 0x0, 0x0, 0xD3, 0x16, 0x0, 0x0, 0xD9, 0x16, 0x0, 0x0, 0xDB, 0x16, 0x0, 0x0, 0xE1, 0x16, 0x0, 0x0, 0xE5, 0x16, 0x0, 0x0, 0xEB, 0x16, 0x0, 0x0, 0xED, 0x16, 0x0, 0x0, 0xF7, 0x16, 0x0, 0x0, 0xF9, 0x16, 0x0, 0x0, 0x9, 0x17, 0x0, 0x0, 0xF, 0x17, 0x0, 0x0, 0x23, 0x17, 0x0, 0x0, 0x27, 0x17, 0x0, 0x0, 0x33, 0x17, 0x0, 0x0, 0x41, 0x17, 0x0, 0x0, 0x5D, 0x17, 0x0, 0x0, 0x63, 0x17, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_DefaultValueData, &$ArrayType$3132_t3354_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_DefaultValueData[] = { 0x29, 0x2E, 0x43, 0xC9, 0xA2, 0xD8, 0x7C, 0x1, 0x3D, 0x36, 0x54, 0xA1, 0xEC, 0xF0, 0x6, 0x13, 0x62, 0xA7, 0x5, 0xF3, 0xC0, 0xC7, 0x73, 0x8C, 0x98, 0x93, 0x2B, 0xD9, 0xBC, 0x4C, 0x82, 0xCA, 0x1E, 0x9B, 0x57, 0x3C, 0xFD, 0xD4, 0xE0, 0x16, 0x67, 0x42, 0x6F, 0x18, 0x8A, 0x17, 0xE5, 0x12, 0xBE, 0x4E, 0xC4, 0xD6, 0xDA, 0x9E, 0xDE, 0x49, 0xA0, 0xFB, 0xF5, 0x8E, 0xBB, 0x2F, 0xEE, 0x7A, 0xA9, 0x68, 0x79, 0x91, 0x15, 0xB2, 0x7, 0x3F, 0x94, 0xC2, 0x10, 0x89, 0xB, 0x22, 0x5F, 0x21, 0x80, 0x7F, 0x5D, 0x9A, 0x5A, 0x90, 0x32, 0x27, 0x35, 0x3E, 0xCC, 0xE7, 0xBF, 0xF7, 0x97, 0x3, 0xFF, 0x19, 0x30, 0xB3, 0x48, 0xA5, 0xB5, 0xD1, 0xD7, 0x5E, 0x92, 0x2A, 0xAC, 0x56, 0xAA, 0xC6, 0x4F, 0xB8, 0x38, 0xD2, 0x96, 0xA4, 0x7D, 0xB6, 0x76, 0xFC, 0x6B, 0xE2, 0x9C, 0x74, 0x4, 0xF1, 0x45, 0x9D, 0x70, 0x59, 0x64, 0x71, 0x87, 0x20, 0x86, 0x5B, 0xCF, 0x65, 0xE6, 0x2D, 0xA8, 0x2, 0x1B, 0x60, 0x25, 0xAD, 0xAE, 0xB0, 0xB9, 0xF6, 0x1C, 0x46, 0x61, 0x69, 0x34, 0x40, 0x7E, 0xF, 0x55, 0x47, 0xA3, 0x23, 0xDD, 0x51, 0xAF, 0x3A, 0xC3, 0x5C, 0xF9, 0xCE, 0xBA, 0xC5, 0xEA, 0x26, 0x2C, 0x53, 0xD, 0x6E, 0x85, 0x28, 0x84, 0x9, 0xD3, 0xDF, 0xCD, 0xF4, 0x41, 0x81, 0x4D, 0x52, 0x6A, 0xDC, 0x37, 0xC8, 0x6C, 0xC1, 0xAB, 0xFA, 0x24, 0xE1, 0x7B, 0x8, 0xC, 0xBD, 0xB1, 0x4A, 0x78, 0x88, 0x95, 0x8B, 0xE3, 0x63, 0xE8, 0x6D, 0xE9, 0xCB, 0xD5, 0xFE, 0x3B, 0x0, 0x1D, 0x39, 0xF2, 0xEF, 0xB7, 0xE, 0x66, 0x58, 0xD0, 0xE4, 0xA6, 0x77, 0x72, 0xF8, 0xEB, 0x75, 0x4B, 0xA, 0x31, 0x44, 0x50, 0xB4, 0x8F, 0xED, 0x1F, 0x1A, 0xDB, 0x99, 0x8D, 0x33, 0x9F, 0x11, 0x83, 0x14 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_DefaultValueData, &$ArrayType$256_t3355_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_DefaultValueData[] = { 0xDA, 0x39, 0xA3, 0xEE, 0x5E, 0x6B, 0x4B, 0xD, 0x32, 0x55, 0xBF, 0xEF, 0x95, 0x60, 0x18, 0x90, 0xAF, 0xD8, 0x7, 0x9 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_DefaultValueData, &$ArrayType$20_t3356_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_DefaultValueData[] = { 0xE3, 0xB0, 0xC4, 0x42, 0x98, 0xFC, 0x1C, 0x14, 0x9A, 0xFB, 0xF4, 0xC8, 0x99, 0x6F, 0xB9, 0x24, 0x27, 0xAE, 0x41, 0xE4, 0x64, 0x9B, 0x93, 0x4C, 0xA4, 0x95, 0x99, 0x1B, 0x78, 0x52, 0xB8, 0x55 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_DefaultValueData, &$ArrayType$32_t3357_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_DefaultValueData[] = { 0x38, 0xB0, 0x60, 0xA7, 0x51, 0xAC, 0x96, 0x38, 0x4C, 0xD9, 0x32, 0x7E, 0xB1, 0xB1, 0xE3, 0x6A, 0x21, 0xFD, 0xB7, 0x11, 0x14, 0xBE, 0x7, 0x43, 0x4C, 0xC, 0xC7, 0xBF, 0x63, 0xF6, 0xE1, 0xDA, 0x27, 0x4E, 0xDE, 0xBF, 0xE7, 0x6F, 0x65, 0xFB, 0xD5, 0x1A, 0xD2, 0xF1, 0x48, 0x98, 0xB9, 0x5B };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_DefaultValueData, &$ArrayType$48_t3358_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_DefaultValueData[] = { 0xCF, 0x83, 0xE1, 0x35, 0x7E, 0xEF, 0xB8, 0xBD, 0xF1, 0x54, 0x28, 0x50, 0xD6, 0x6D, 0x80, 0x7, 0xD6, 0x20, 0xE4, 0x5, 0xB, 0x57, 0x15, 0xDC, 0x83, 0xF4, 0xA9, 0x21, 0xD3, 0x6C, 0xE9, 0xCE, 0x47, 0xD0, 0xD1, 0x3C, 0x5D, 0x85, 0xF2, 0xB0, 0xFF, 0x83, 0x18, 0xD2, 0x87, 0x7E, 0xEC, 0x2F, 0x63, 0xB9, 0x31, 0xBD, 0x47, 0x41, 0x7A, 0x81, 0xA5, 0x38, 0x32, 0x7A, 0xF9, 0x27, 0xDA, 0x3E };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_DefaultValueData, &$ArrayType$64_t3359_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_DefaultValueData[] = { 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_DefaultValueData, &$ArrayType$64_t3359_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_DefaultValueData[] = { 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_DefaultValueData, &$ArrayType$64_t3359_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_DefaultValueData[] = { 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_DefaultValueData, &$ArrayType$64_t3359_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x19, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_DefaultValueData, &$ArrayType$12_t3360_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x1, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_DefaultValueData, &$ArrayType$12_t3360_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_DefaultValueData, &$ArrayType$12_t3360_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_DefaultValueData[] = { 0x2C, 0x0, 0x2B, 0x0, 0x22, 0x0, 0x5C, 0x0, 0x3C, 0x0, 0x3E, 0x0, 0x3B, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_DefaultValueData, &$ArrayType$16_t3361_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_DefaultValueData[] = { 0x43, 0x4C, 0x4E, 0x54 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_DefaultValueData, &$ArrayType$4_t3362_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_DefaultValueData[] = { 0x53, 0x52, 0x56, 0x52 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_DefaultValueData, &$ArrayType$4_t3362_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t3363_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D0_0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D5_1_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D6_2_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D7_3_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D8_4_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D9_5_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D11_6_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D12_7_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D13_8_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D14_9_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D15_10_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D16_11_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D17_12_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D21_13_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t3363____$$fieldU2D22_14_DefaultValue,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t3363_MethodInfos[] =
{
	NULL
};
extern TypeInfo $ArrayType$3132_t3354_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t3355_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t3356_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t3357_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t3358_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t3359_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t3360_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t3361_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t3362_il2cpp_TypeInfo;
static TypeInfo* U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo__nestedTypes[10] =
{
	&$ArrayType$3132_t3354_il2cpp_TypeInfo,
	&$ArrayType$256_t3355_il2cpp_TypeInfo,
	&$ArrayType$20_t3356_il2cpp_TypeInfo,
	&$ArrayType$32_t3357_il2cpp_TypeInfo,
	&$ArrayType$48_t3358_il2cpp_TypeInfo,
	&$ArrayType$64_t3359_il2cpp_TypeInfo,
	&$ArrayType$12_t3360_il2cpp_TypeInfo,
	&$ArrayType$16_t3361_il2cpp_TypeInfo,
	&$ArrayType$4_t3362_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t3363_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t111_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m317_MethodInfo;
void U3CPrivateImplementationDetailsU3E_t3363_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t111 * tmp;
		tmp = (CompilerGeneratedAttribute_t111 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t111_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m317(tmp, &CompilerGeneratedAttribute__ctor_m317_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t3363__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t3363_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t3363_0_0_0;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t3363_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t3363;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t3363__CustomAttributeCache;
TypeInfo U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t3363_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t3363_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CPrivateImplementationDetailsU3E_t3363_VTable/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t3363__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t3363_il2cpp_TypeInfo/* cast_class */
	, &U3CPrivateImplementationDetailsU3E_t3363_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t3363_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t3363_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t3363)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t3363_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 15/* field_count */
	, 0/* event_count */
	, 9/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
