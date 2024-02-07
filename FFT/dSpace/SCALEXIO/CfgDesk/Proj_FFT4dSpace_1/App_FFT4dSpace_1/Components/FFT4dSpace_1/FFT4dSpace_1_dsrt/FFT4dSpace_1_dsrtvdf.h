/*********************** dSPACE target specific file *************************

   Header file FFT4dSpace_1_dsrtvdf.h:

   Declaration of function that initializes the global TRC pointers

   4.5 (02-May-2021)
   Wed Feb  7 10:50:06 2024

   Copyright 2024, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef _DSRT_FFT4dSpace_1_DSRTVDF_HEADER_
#define _DSRT_FFT4dSpace_1_DSRTVDF_HEADER_

/* Include the model header file. */
#include "FFT4dSpace_1.h"
#include "FFT4dSpace_1_private.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/*
 *  Declare the global TRC pointers
 */
EXTERN_C volatile uint64_T *p_0_FFT4dSpace_1_uint64_T_0;
EXTERN_C volatile real_T *p_0_FFT4dSpace_1_real_T_1;
EXTERN_C volatile real_T *p_0_FFT4dSpace_1_real_T_2;
EXTERN_C volatile uint32_T *p_0_FFT4dSpace_1_uint32_T_3;
EXTERN_C volatile struct_HWeianez4jK7RhAtAn8PqF
  *p_1_FFT4dSpace_1_struct_HWeianez4jK7RhAtAn8PqF_0;
EXTERN_C volatile real_T *p_1_FFT4dSpace_1_real_T_1;
EXTERN_C volatile uint32_T *p_1_FFT4dSpace_1_uint32_T_2;
EXTERN_C volatile real_T *p_2_FFT4dSpace_1_real_T_0;
EXTERN_C volatile int32_T *p_2_FFT4dSpace_1_int32_T_2;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void FFT4dSpace_1_rti_init_trc_pointers(void);

#endif                                 /* _DSRT_FFT4dSpace_1_DSRTVDF_HEADER_ */
