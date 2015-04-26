#pragma once
// System.String
struct String_t;
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.IO.FileNotFoundException
struct FileNotFoundException_t2217  : public IOException_t1835
{
	// System.String System.IO.FileNotFoundException::fileName
	String_t* ___fileName_11;
	// System.String System.IO.FileNotFoundException::fusionLog
	String_t* ___fusionLog_12;
};
