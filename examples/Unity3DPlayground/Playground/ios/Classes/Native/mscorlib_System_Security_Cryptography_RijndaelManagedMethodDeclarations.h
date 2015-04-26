#pragma once

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2448;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m10661 (RijndaelManaged_t2448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m10662 (RijndaelManaged_t2448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m10663 (RijndaelManaged_t2448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m10664 (RijndaelManaged_t2448 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m10665 (RijndaelManaged_t2448 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
