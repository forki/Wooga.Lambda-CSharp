#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Directory
struct Directory_t3568;
// System.IO.DirectoryInfo
struct DirectoryInfo_t3569;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t127;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
 DirectoryInfo_t3569 * Directory_CreateDirectory_m8884 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
 DirectoryInfo_t3569 * Directory_CreateDirectoriesInternal_m10799 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
 bool Directory_Exists_m8883 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
 String_t* Directory_GetCurrentDirectory_m10800 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
 StringU5BU5D_t127* Directory_GetFiles_m8886 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___searchPattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
 StringU5BU5D_t127* Directory_GetFileSystemEntries_m10801 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
