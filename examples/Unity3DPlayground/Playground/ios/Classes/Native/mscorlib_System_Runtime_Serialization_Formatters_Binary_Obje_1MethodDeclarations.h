#pragma once

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t2405;
// System.Object
struct Object_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2386;
// System.IO.BinaryReader
struct BinaryReader_t2209;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2356;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t2402;
// System.Reflection.MemberInfo
struct MemberInfo_t1357;
// System.Int32[]
struct Int32U5BU5D_t1424;
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
 void ObjectReader__ctor_m10359 (ObjectReader_t2405 * __this, BinaryFormatter_t2386 * ___formatter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m10360 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t2356** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
 void ObjectReader_ReadObjectGraph_m10361 (ObjectReader_t2405 * __this, uint8_t ___elem, BinaryReader_t2209 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t2356** ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m10362 (ObjectReader_t2405 * __this, uint8_t ___element, BinaryReader_t2209 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
 bool ObjectReader_ReadNextObject_m10363 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
 Object_t * ObjectReader_get_CurrentObject_m10364 (ObjectReader_t2405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObject_m10365 (ObjectReader_t2405 * __this, uint8_t ___element, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t1255 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
 void ObjectReader_ReadAssembly_m10366 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectInstance_m10367 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t1255 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadRefTypeObjectInstance_m10368 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t1255 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
 void ObjectReader_ReadObjectContent_m10369 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, TypeMetadata_t2402 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t1255 ** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RegisterObject_m10370 (ObjectReader_t2405 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t1255 * ___info, int64_t ___parentObjectId, MemberInfo_t1357 * ___parentObjectMemeber, Int32U5BU5D_t1424* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadStringIntance_m10371 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadGenericArray_m10372 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
 Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m10373 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfPrimitiveType_m10374 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
 void ObjectReader_BlockRead_m10375 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, Array_t * ___array, int32_t ___dataSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfObject_m10376 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
 void ObjectReader_ReadArrayOfString_m10377 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
 void ObjectReader_ReadSimpleArray_m10378 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
 TypeMetadata_t2402 * ObjectReader_ReadTypeMetadata_m10379 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_ReadValue_m10380 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t1255 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t1357 * ___memberInfo, Int32U5BU5D_t1424* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
 void ObjectReader_SetObjectValue_m10381 (ObjectReader_t2405 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t1357 * ___memberInfo, SerializationInfo_t1255 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t1424* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
 void ObjectReader_RecordFixup_m10382 (ObjectReader_t2405 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t1255 * ___info, String_t* ___fieldName, MemberInfo_t1357 * ___memberInfo, Int32U5BU5D_t1424* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
 Type_t * ObjectReader_GetDeserializationType_m10383 (ObjectReader_t2405 * __this, int64_t ___assemblyId, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
 Type_t * ObjectReader_ReadType_m10384 (ObjectReader_t2405 * __this, BinaryReader_t2209 * ___reader, uint8_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
 Object_t * ObjectReader_ReadPrimitiveTypeValue_m10385 (Object_t * __this/* static, unused */, BinaryReader_t2209 * ___reader, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
