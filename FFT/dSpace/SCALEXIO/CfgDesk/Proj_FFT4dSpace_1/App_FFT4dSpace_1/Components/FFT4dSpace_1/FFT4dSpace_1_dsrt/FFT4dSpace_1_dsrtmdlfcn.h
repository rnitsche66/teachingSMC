/*****************************************************************************

   Include file FFT4dSpace_1_dsrtmdlfcn.h:

   Definition of model functions.

   Wed Feb  7 10:50:06 2024

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_FFT4dSpace_1_DSRTMDLFCN_HEADER_
#define _DSRT_FFT4dSpace_1_DSRTMDLFCN_HEADER_
#if defined(EXTERN_C_DECL)
#undef EXTERN_C_DECL
#endif

#if defined(__cplusplus)
#define EXTERN_C_DECL                  extern "C"
#else
#define EXTERN_C_DECL                  extern
#endif

#include "rtwtypes.h"
#include <string.h>

/* Model functions declarations */
EXTERN_C_DECL void FFT4dSpace_1_DSRTInitMdl(void);
EXTERN_C_DECL void FFT4dSpace_1_DSRTStartMdl(void);
EXTERN_C_DECL void FFT4dSpace_1_DSRTStopMdl(void);
EXTERN_C_DECL void FFT4dSpace_1_DSRTCheckForSimulationStopCondition(void);
EXTERN_C_DECL void FFT4dSpace_1_DSRTCheckForErrorStatus(void);
EXTERN_C_DECL void FFT4dSpace_1_APTerminateSimulation(void);
EXTERN_C_DECL void FFT4dSpace_1_APStopSimulation(void);
EXTERN_C_DECL void FFT4dSpace_1_APLastApplStateStopped(uint8_T*);
EXTERN_C_DECL void FFT4dSpace_1_APPrintMessage(const char_T*);

#endif                               /* _DSRT_FFT4dSpace_1_DSRTMDLFCN_HEADER_ */
