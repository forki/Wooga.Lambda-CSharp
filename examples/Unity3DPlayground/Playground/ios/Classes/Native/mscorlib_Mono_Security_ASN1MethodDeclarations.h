#pragma once

// Mono.Security.ASN1
struct ASN1_t2117;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
 void ASN1__ctor_m8785 (ASN1_t2117 * __this, uint8_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
 void ASN1__ctor_m8786 (ASN1_t2117 * __this, uint8_t ___tag, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
 void ASN1__ctor_m8787 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
 int32_t ASN1_get_Count_m8788 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
 uint8_t ASN1_get_Tag_m8789 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
 int32_t ASN1_get_Length_m8790 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
 ByteU5BU5D_t1071* ASN1_get_Value_m8791 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
 void ASN1_set_Value_m8792 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
 bool ASN1_CompareArray_m8793 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___array1, ByteU5BU5D_t1071* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
 bool ASN1_CompareValue_m8794 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
 ASN1_t2117 * ASN1_Add_m8795 (ASN1_t2117 * __this, ASN1_t2117 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
 ByteU5BU5D_t1071* ASN1_GetBytes_m8796 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
 void ASN1_Decode_m8797 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___asn1, int32_t* ___anPos, int32_t ___anLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
 void ASN1_DecodeTLV_m8798 (ASN1_t2117 * __this, ByteU5BU5D_t1071* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t1071** ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
 ASN1_t2117 * ASN1_get_Item_m8799 (ASN1_t2117 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
 ASN1_t2117 * ASN1_Element_m8800 (ASN1_t2117 * __this, int32_t ___index, uint8_t ___anTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
 String_t* ASN1_ToString_m8801 (ASN1_t2117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
