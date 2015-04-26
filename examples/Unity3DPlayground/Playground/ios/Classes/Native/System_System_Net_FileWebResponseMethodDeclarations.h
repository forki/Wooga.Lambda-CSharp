#pragma once

// System.Net.FileWebResponse
struct FileWebResponse_t1630;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.Uri
struct Uri_t1041;
// System.IO.FileStream
struct FileStream_t1626;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.IO.Stream
struct Stream_t1049;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
 void FileWebResponse__ctor_m4869 (FileWebResponse_t1630 * __this, Uri_t1041 * ___responseUri, FileStream_t1626 * ___fileStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse__ctor_m4870 (FileWebResponse_t1630 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m4871 (FileWebResponse_t1630 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
 void FileWebResponse_System_IDisposable_Dispose_m4872 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
 WebHeaderCollection_t1051 * FileWebResponse_get_Headers_m4873 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse_GetObjectData_m4874 (FileWebResponse_t1630 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
 Stream_t1049 * FileWebResponse_GetResponseStream_m4875 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
 void FileWebResponse_Finalize_m4876 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
 void FileWebResponse_Close_m4877 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
 void FileWebResponse_Dispose_m4878 (FileWebResponse_t1630 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
 void FileWebResponse_CheckDisposed_m4879 (FileWebResponse_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
