#pragma once

// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t2457;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.SHA384Managed::.ctor()
 void SHA384Managed__ctor_m10713 (SHA384Managed_t2457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize(System.Boolean)
 void SHA384Managed_Initialize_m10714 (SHA384Managed_t2457 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize()
 void SHA384Managed_Initialize_m10715 (SHA384Managed_t2457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA384Managed_HashCore_m10716 (SHA384Managed_t2457 * __this, ByteU5BU5D_t1071* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA384Managed::HashFinal()
 ByteU5BU5D_t1071* SHA384Managed_HashFinal_m10717 (SHA384Managed_t2457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::update(System.Byte)
 void SHA384Managed_update_m10718 (SHA384Managed_t2457 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processWord(System.Byte[],System.Int32)
 void SHA384Managed_processWord_m10719 (SHA384Managed_t2457 * __this, ByteU5BU5D_t1071* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
 void SHA384Managed_unpackWord_m10720 (SHA384Managed_t2457 * __this, uint64_t ___word, ByteU5BU5D_t1071* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::adjustByteCounts()
 void SHA384Managed_adjustByteCounts_m10721 (SHA384Managed_t2457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processLength(System.UInt64,System.UInt64)
 void SHA384Managed_processLength_m10722 (SHA384Managed_t2457 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processBlock()
 void SHA384Managed_processBlock_m10723 (SHA384Managed_t2457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
