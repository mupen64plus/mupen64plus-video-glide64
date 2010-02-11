#ifndef M64P_H
#define M64P_H

#include "m64p_types.h"
#include "m64p_plugin.h"
#include "m64p_config.h"
#include "m64p_vidext.h"
#include <stdio.h>

#define LOG(...)

/* definitions of pointers to Core config functions */
extern ptr_ConfigOpenSection      ConfigOpenSection;
extern ptr_ConfigSetParameter     ConfigSetParameter;
extern ptr_ConfigGetParameter     ConfigGetParameter;
extern ptr_ConfigGetParameterHelp ConfigGetParameterHelp;
extern ptr_ConfigSetDefaultInt    ConfigSetDefaultInt;
extern ptr_ConfigSetDefaultFloat  ConfigSetDefaultFloat;
extern ptr_ConfigSetDefaultBool   ConfigSetDefaultBool;
extern ptr_ConfigSetDefaultString ConfigSetDefaultString;
extern ptr_ConfigGetParamInt      ConfigGetParamInt;
extern ptr_ConfigGetParamFloat    ConfigGetParamFloat;
extern ptr_ConfigGetParamBool     ConfigGetParamBool;
extern ptr_ConfigGetParamString   ConfigGetParamString;

extern ptr_ConfigGetSharedDataFilepath ConfigGetSharedDataFilepath;
extern ptr_ConfigGetUserConfigPath     ConfigGetUserConfigPath;
extern ptr_ConfigGetUserDataPath       ConfigGetUserDataPath;
extern ptr_ConfigGetUserCachePath      ConfigGetUserCachePath;


extern ptr_VidExt_Init                  CoreVideo_Init;
extern ptr_VidExt_Quit                  CoreVideo_Quit;
extern ptr_VidExt_ListFullscreenModes   CoreVideo_ListFullscreenModes;
extern ptr_VidExt_SetVideoMode          CoreVideo_SetVideoMode;
extern ptr_VidExt_SetCaption            CoreVideo_SetCaption;
extern ptr_VidExt_ToggleFullScreen      CoreVideo_ToggleFullScreen;
extern ptr_VidExt_GL_GetProcAddress     CoreVideo_GL_GetProcAddress;
extern ptr_VidExt_GL_SetAttribute       CoreVideo_GL_SetAttribute;
extern ptr_VidExt_GL_SwapBuffers        CoreVideo_GL_SwapBuffers;

#endif