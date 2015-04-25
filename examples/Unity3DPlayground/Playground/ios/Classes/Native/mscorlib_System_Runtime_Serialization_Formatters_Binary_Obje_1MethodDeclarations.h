#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t3779;
// System.Object
struct Object_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3760;
// System.IO.BinaryReader
struct BinaryReader_t3567;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3729;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t3776;
// System.Reflection.MemberInfo
struct MemberInfo_t2709;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Array
struct Array_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
 void ObjectReader__ctor_m11938 (ObjectReader_t3779 * __this, BinaryFormatter_t3760 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m11939 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t3729** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m11940 (ObjectReader_t3779 * __this, uint8_t ___elem, BinaryReader_t3567 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t3729** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m11941 (ObjectReader_t3779 * __this, uint8_t ___element, BinaryReader_t3567 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m11942 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
 Object_t * ObjectReader_get_CurrentObject_m11943 (ObjectReader_t3779 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObject_m11944 (ObjectReader_t3779 * __this, uint8_t ___element, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2614 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
 void ObjectReader_ReadAssembly_m11945 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectInstance_m11946 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2614 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadRefTypeObjectInstance_m11947 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2614 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectContent_m11948 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, TypeMetadata_t3776 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t2614 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RegisterObject_m11949 (ObjectReader_t3779 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t2614 * ___info, int64_t ___parentObjectId, MemberInfo_t2709 * ___parentObjectMemeber, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadStringIntance_m11950 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadGenericArray_m11951 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
 Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m11952 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfPrimitiveType_m11953 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
 void ObjectReader_BlockRead_m11954 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, Array_t * ___array, int32_t ___dataSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfObject_m11955 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfString_m11956 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
 void ObjectReader_ReadSimpleArray_m11957 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
 TypeMetadata_t3776 * ObjectReader_ReadTypeMetadata_m11958 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_ReadValue_m11959 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t2614 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t2709 * ___memberInfo, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
 void ObjectReader_SetObjectValue_m11960 (ObjectReader_t3779 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t2709 * ___memberInfo, SerializationInfo_t2614 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RecordFixup_m11961 (ObjectReader_t3779 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t2614 * ___info, String_t* ___fieldName, MemberInfo_t2709 * ___memberInfo, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
 Type_t * ObjectReader_GetDeserializationType_m11962 (ObjectReader_t3779 * __this, int64_t ___assemblyId, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
 Type_t * ObjectReader_ReadType_m11963 (ObjectReader_t3779 * __this, BinaryReader_t3567 * ___reader, uint8_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
 Object_t * ObjectReader_ReadPrimitiveTypeValue_m11964 (Object_t * __this/* static, unused */, BinaryReader_t3567 * ___reader, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
