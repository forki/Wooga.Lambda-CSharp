#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly/ResourceCloseHandler
struct ResourceCloseHandler_t3624;
// System.Reflection.Module
struct Module_t3405;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t3276;

// System.Void System.Reflection.Assembly/ResourceCloseHandler::.ctor(System.Reflection.Module)
 void ResourceCloseHandler__ctor_m11285 (ResourceCloseHandler_t3624 * __this, Module_t3405 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly/ResourceCloseHandler::OnClose(System.Object,System.EventArgs)
 void ResourceCloseHandler_OnClose_m11286 (ResourceCloseHandler_t3624 * __this, Object_t * ___sender, EventArgs_t3276 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
