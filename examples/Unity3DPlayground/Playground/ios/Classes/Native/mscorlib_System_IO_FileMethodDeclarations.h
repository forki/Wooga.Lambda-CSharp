#pragma once

// System.IO.File
struct File_t2215;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t1626;
// System.IO.StreamReader
struct StreamReader_t1069;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Delete(System.String)
 void File_Delete_m9341 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
 bool File_Exists_m6401 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
 FileStream_t1626 * File_Open_m9342 (Object_t * __this/* static, unused */, String_t* ___path, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
 FileStream_t1626 * File_OpenRead_m7538 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
 StreamReader_t1069 * File_OpenText_m9343 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
