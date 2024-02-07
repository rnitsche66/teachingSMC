/*********************** dSPACE target specific file *************************

   Include file FFT4dSpace_1_dsrtap.h:

   Definitions for access points to Simulink root ports.

   Wed Feb  7 10:50:06 2024

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_FFT4dSpace_1_DSRTAP_HEADER_
#define _DSRT_FFT4dSpace_1_DSRTAP_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

#ifndef DATA_PORT_ACCESS_POINT_API_VERSION
#error The data port access point API version is undefined.
#elif (DATA_PORT_ACCESS_POINT_API_VERSION > 2) || (DATA_PORT_ACCESS_POINT_API_VERSION < 1)
#error The defined data port access point API version is unsupported.
#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)
#include "FFT4dSpace_1_types.h"
#else
#include "rtwtypes.h"
#endif

/* Extern declarations for access points */
#ifdef HAVE_FFT4dSpace_1_DSRTAP_CUSTOM
#include "FFT4dSpace_1_dsrtap_custom.h"
#endif
#endif                                 /* _DSRT_FFT4dSpace_1_DSRTAP_HEADER_ */
