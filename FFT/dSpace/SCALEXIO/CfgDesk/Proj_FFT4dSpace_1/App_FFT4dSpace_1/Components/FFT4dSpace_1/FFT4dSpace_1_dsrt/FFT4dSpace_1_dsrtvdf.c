/***************************************************************************

   Source file FFT4dSpace_1_dsrtvdf.c:

   Definition of function that initializes the global TRC pointers

   4.5 (02-May-2021)
   Wed Feb  7 10:50:06 2024

   Copyright 2024, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "FFT4dSpace_1_dsrtvdf.h"
#include "FFT4dSpace_1.h"
#include "FFT4dSpace_1_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile uint64_T *p_0_FFT4dSpace_1_uint64_T_0 = NULL;
volatile real_T *p_0_FFT4dSpace_1_real_T_1 = NULL;
volatile real_T *p_0_FFT4dSpace_1_real_T_2 = NULL;
volatile uint32_T *p_0_FFT4dSpace_1_uint32_T_3 = NULL;
volatile struct_HWeianez4jK7RhAtAn8PqF
  *p_1_FFT4dSpace_1_struct_HWeianez4jK7RhAtAn8PqF_0 = NULL;
volatile real_T *p_1_FFT4dSpace_1_real_T_1 = NULL;
volatile uint32_T *p_1_FFT4dSpace_1_uint32_T_2 = NULL;
volatile real_T *p_2_FFT4dSpace_1_real_T_0 = NULL;
volatile int32_T *p_2_FFT4dSpace_1_int32_T_2 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_FFT4dSpace_1_uint64_T_0 = &FFT4dSpace_1_B.Peak_Freq_FFT[0];
  p_0_FFT4dSpace_1_real_T_1 = &FFT4dSpace_1_B.FFT[0].re;
  p_0_FFT4dSpace_1_real_T_2 = &FFT4dSpace_1_B.mycurrentTime;
  p_0_FFT4dSpace_1_uint32_T_3 = &FFT4dSpace_1_B.PeakFinder_o1;
  p_1_FFT4dSpace_1_struct_HWeianez4jK7RhAtAn8PqF_0 = &FFT4dSpace_1_P.mdlPara;
  p_1_FFT4dSpace_1_real_T_1 = &FFT4dSpace_1_P.Ts_1kHz;
  p_1_FFT4dSpace_1_uint32_T_2 = &FFT4dSpace_1_P.Gain3_Gain;
  p_2_FFT4dSpace_1_real_T_0 = &FFT4dSpace_1_DW.Buffer_CircBuf[0];
  p_2_FFT4dSpace_1_int32_T_2 = &FFT4dSpace_1_DW.Buffer_inBufPtrIdx;
}

void FFT4dSpace_1_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
