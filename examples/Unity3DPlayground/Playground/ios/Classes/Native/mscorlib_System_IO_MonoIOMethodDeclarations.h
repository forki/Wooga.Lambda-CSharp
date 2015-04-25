#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIO
struct MonoIO_t3585;
// System.Exception
struct Exception_t115;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t127;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MonoIO::.cctor()
 void MonoIO__cctor_m10894 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
 Exception_t115 * MonoIO_GetException_m10895 (Object_t * __this/* static, unused */, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
 Exception_t115 * MonoIO_GetException_m10896 (Object_t * __this/* static, unused */, String_t* ___path, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
 bool MonoIO_CreateDirectory_m10897 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
 StringU5BU5D_t127* MonoIO_GetFileSystemEntries_m10898 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
 String_t* MonoIO_GetCurrentDirectory_m10899 (Object_t * __this/* static, unused */, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
 bool MonoIO_DeleteFile_m10900 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
 int32_t MonoIO_GetFileAttributes_m10901 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
 int32_t MonoIO_GetFileType_m10902 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
 bool MonoIO_ExistsFile_m10903 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
 bool MonoIO_ExistsDirectory_m10904 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
 bool MonoIO_GetFileStat_m10905 (Object_t * __this/* static, unused */, String_t* ___path, MonoIOStat_t3583 * ___stat, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
 IntPtr_t31 MonoIO_Open_m10906 (Object_t * __this/* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
 bool MonoIO_Close_m10907 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
 int32_t MonoIO_Read_m10908 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, ByteU5BU5D_t961* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
 int32_t MonoIO_Write_m10909 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, ByteU5BU5D_t961* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
 int64_t MonoIO_Seek_m10910 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
 int64_t MonoIO_GetLength_m10911 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
 bool MonoIO_SetLength_m10912 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int64_t ___length, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
 IntPtr_t31 MonoIO_get_ConsoleOutput_m10913 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
 IntPtr_t31 MonoIO_get_ConsoleInput_m10914 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
 IntPtr_t31 MonoIO_get_ConsoleError_m10915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
 uint16_t MonoIO_get_VolumeSeparatorChar_m10916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
 uint16_t MonoIO_get_DirectorySeparatorChar_m10917 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
 uint16_t MonoIO_get_AltDirectorySeparatorChar_m10918 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
 uint16_t MonoIO_get_PathSeparator_m10919 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
