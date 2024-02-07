/*********************** dSPACE target specific file *************************

   Include file FFT4dSpace_1_dsrtmf.h:

   Definition of model functions.

   Wed Feb  7 10:50:06 2024

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_FFT4dSpace_1_DSRTMF_HEADER_
#define _DSRT_FFT4dSpace_1_DSRTMF_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* Model functions declarations */
#define FFT4dSpace_1_dsrt_mdl_ApSimEngineOnInitIoPreRtosInit()
#define dsrt_mdl_timesync_simstate()
#define FFT4dSpace_1_dsrt_mdl_ApSimEngineIdle()
#endif                                 /* _DSRT_FFT4dSpace_1_DSRTMF_HEADER_ */

/****** [EOF] ****************************************************************/
