/*
    version.h
    Copyright (C) 2007 Acekard, www.acekard.com
    Copyright (C) 2007-2009 somebody
    Copyright (C) 2009 yellow wood goblin
    SPDX-License-Identifier: GPL-3.0-or-later
*/
#define AKMENU_VERSION_MAIN "2"
#define AKMENU_VERSION_SUB "0.5-bl2ck"
#ifndef __KERNEL_LAUNCHER_SUPPORT__
#define AKMENU_LOADER_NAME "nds-bootstrap"
#define AKMENU_PICO_NAME "Pico-Loader"
#define AKMENU_LOADER_VERSION ""
#else  // __KERNEL_LAUNCHER_SUPPORT__
#if defined(__AKLOADER_AK2__)
#define AKMENU_LOADER_NAME "BL2CK OS Next"
#define AKMENU_LOADER_VERSION "1.31.0"
#else
#define AKMENU_LOADER_NAME "wood"
#define AKMENU_LOADER_VERSION "1.62"
#endif
#endif
