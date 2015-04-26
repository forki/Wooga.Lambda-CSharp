#pragma once
// System.Security.SecurityElement
struct SecurityElement_t2133;
// System.Collections.Stack
struct Stack_t1288;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t2134  : public SmallXmlParser_t2135
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2133 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2133 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1288 * ___stack_15;
};
