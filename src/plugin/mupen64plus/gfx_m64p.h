#pragma once

#if M64P_STATIC_PLUGINS
#define M64P_CORE_PROTOTYPES 1
#endif

#include "../../core/n64video.h"
#include "api/m64p_plugin.h"
#include "api/m64p_common.h"

#if(!M64P_STATIC_PLUGINS)

#ifdef _WIN32
#define DLSYM(a, b) GetProcAddress(a, b)
#else
#include <dlfcn.h>
#define DLSYM(a, b) dlsym(a, b)
#endif

#endif // !M64P_STATIC_PLUGINS

extern GFX_INFO gfx;
extern m64p_dynlib_handle CoreLibHandle;
extern void(*render_callback)(int);
extern void (*debug_callback)(void *, int, const char *);
extern void *debug_call_context;
