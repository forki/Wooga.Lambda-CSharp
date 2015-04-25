#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SecurityParser
struct SecurityParser_t3494;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t3493;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3495;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t3496;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m10244 (SecurityParser_t3494 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m10245 (SecurityParser_t3494 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t3493 * SecurityParser_ToXml_m10246 (SecurityParser_t3494 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m10247 (SecurityParser_t3494 * __this, SmallXmlParser_t3495 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m10248 (SecurityParser_t3494 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m10249 (SecurityParser_t3494 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m10250 (SecurityParser_t3494 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m10251 (SecurityParser_t3494 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m10252 (SecurityParser_t3494 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m10253 (SecurityParser_t3494 * __this, SmallXmlParser_t3495 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
