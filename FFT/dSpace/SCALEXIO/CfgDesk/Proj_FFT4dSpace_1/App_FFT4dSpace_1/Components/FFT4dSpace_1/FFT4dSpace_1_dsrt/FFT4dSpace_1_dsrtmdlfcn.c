/**************************************************************************** *
 * FILE :
 *  FFT4dSpace_1_dsrtmdlfcn.c
 *
 *
 *
 * Copyright 2017, dSPACE GmbH. All rights reserved
 *
   \****************************************************************************/

#ifndef TEMP_DSRT_RTI
#include <rtmodel.h>
#include "rtwtypes.h"
#include "FFT4dSpace_1_dsrtmdlfcn.h"
#include <stdio.h>

int32_T DSRTStopSimulation = 0;
EXTERN_C_DECL void FFT4dSpace_1_initialize();
EXTERN_C_DECL void FFT4dSpace_1_terminate();

/* Initialization of model */
void FFT4dSpace_1_DSRTInitMdl(void)
{
  /* Initialize model */
  FFT4dSpace_1_initialize();

  /* Check for initialization errors */
  FFT4dSpace_1_DSRTCheckForErrorStatus();

  /* Reinit Stop Simulation flag*/
  DSRTStopSimulation = 0;
}

/* Model start function */
void FFT4dSpace_1_DSRTStartMdl(void)
{
  uint8_T lastApplStateStopped;
  FFT4dSpace_1_APLastApplStateStopped(&lastApplStateStopped);
  if (lastApplStateStopped) {
    /* Reinit main simulation structure */
    FFT4dSpace_1_DSRTInitMdl();
  }
}

/* Model stop function */
void FFT4dSpace_1_DSRTStopMdl(void)
{
  /* Call terminate function */
  FFT4dSpace_1_terminate();

  /* Check for model error status */
  FFT4dSpace_1_DSRTCheckForErrorStatus();
}

/* Check for model error status */
void FFT4dSpace_1_DSRTCheckForErrorStatus()
{
  const char_T* errorStatus = rtmGetErrorStatus(FFT4dSpace_1_M);
  if (errorStatus != NULL && strcmp(errorStatus, "Simulation finished") == 0) {
    /* The RTM errorStatus field has been set */
    FFT4dSpace_1_APTerminateSimulation();
    FFT4dSpace_1_APPrintMessage("Model 'FFT4dSpace_1' error status:");
    FFT4dSpace_1_APPrintMessage(errorStatus);
  }
}

/* Check for simulation stop conditions */
void FFT4dSpace_1_DSRTCheckForSimulationStopCondition(void)
{
  const char_T* errorStatus = rtmGetErrorStatus(FFT4dSpace_1_M);
  if (errorStatus != NULL) {
    if (DSRTStopSimulation != 1) {
      /* The RTM errorStatus field was set */
      FFT4dSpace_1_APTerminateSimulation();
      FFT4dSpace_1_APPrintMessage("Model 'FFT4dSpace_1' error status:");
      FFT4dSpace_1_APPrintMessage(errorStatus);
      DSRTStopSimulation = 1;
    }
  } else if (rtmGetStopRequested(FFT4dSpace_1_M)) {
    if (DSRTStopSimulation != 1) {
      FFT4dSpace_1_APStopSimulation();
      FFT4dSpace_1_APPrintMessage(
        "Model 'FFT4dSpace_1': Executed a Simulink Stop Simulation block or request.");
      DSRTStopSimulation = 1;
    }
  }
}

#endif
