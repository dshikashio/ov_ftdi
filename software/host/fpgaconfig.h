/*
 * fpgaconfig.c - FPGA configuration for a Spartan 3E in Slave Parallel mode
 *                over an FT232H interface.
 *
 * Copyright (C) 2009 Micah Elizabeth Scott
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __FPGACONFIG_H
#define __FPGACONFIG_H

#include "fastftdi.h"

#ifdef _WIN32
  #ifdef OV_API_EXPORT
    #define OV_API __declspec(dllexport)
  #else
    #define OV_API __declspec(dllimport)
  #endif
#else
  #define OV_API
#endif

int FPGAConfig_LoadFile(FTDIDevice *dev, const char *filename);

/*
 * Public
 */

OV_API int FPGA_GetConfigStatus(FTDIDevice * dev);

#endif /* __FPGACONFIG_H */
