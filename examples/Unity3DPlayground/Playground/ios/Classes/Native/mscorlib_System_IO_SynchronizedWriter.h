#pragma once
// System.IO.TextWriter
struct TextWriter_t1866;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.SynchronizedWriter
struct SynchronizedWriter_t2235  : public TextWriter_t1866
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t1866 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;
};
