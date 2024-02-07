/**
 * @file dsp_cgsim_FIRInterpolator.h
 * @brief 
 * Copyright 2020 The MathWorks, Inc.
 */
#ifndef __FIRInterpolator_H__
#define __FIRInterpolator_H__

/* Wrap everything in extern C */
#ifdef __cplusplus
extern "C" { /* sbcheck:ok:extern_c */
#endif

#ifdef BUILDING_DSPCGSIM
#include "version.h"
#define CGSIMLIB_API DLL_EXPORT_SYM
#else
#define CGSIMLIB_API
#endif /*BUILDING_CGSIM*/


/*******************************
 * Routines which we define to call the functions in the library
 *******************************/
CGSIMLIB_API void LibCreate_FIRInterp(void *handle,
    int frameSize, int numChans, int iFactor, int polyphaseFiltLen,
    bool isInputSingle, bool isInputCmplx, bool isFilterCmplx);
CGSIMLIB_API void LibOutputs_FIRInterp(void *handle,
    int frameSize, int nChans, int iFactor, int filtLen,
    int polyphaseFiltLen, const void* inArray, void* memArray,
    const void* coefArray, void* outArray, int outIdx);
CGSIMLIB_API void LibDestroy_FIRInterp(void *handle);


#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* FIRInterpolatorBlock_HPP_ */
