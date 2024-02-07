/*****************************************************************************

   Include file FFT4dSpace_1_dsrttf.c:

   Definition of task functions.

   Wed Feb  7 10:50:06 2024

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header files */
#include "FFT4dSpace_1_dsrttf.h"
#include "FFT4dSpace_1.h"
#include "FFT4dSpace_1_private.h"

/* Task function for TID0 */
void FFT4dSpace_1_DSRTMdlOutputs0()
{
  /* Call to Simulink model output function */
  FFT4dSpace_1_output();
}

void FFT4dSpace_1_DSRTMdlUpdate0()
{
  /* Call to Simulink model upadte function */
  FFT4dSpace_1_update();
}
