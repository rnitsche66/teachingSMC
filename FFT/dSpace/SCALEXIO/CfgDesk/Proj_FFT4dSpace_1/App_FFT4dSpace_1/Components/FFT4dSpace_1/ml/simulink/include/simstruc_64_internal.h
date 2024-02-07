/* Copyright 2020 The MathWorks, Inc. */

#ifndef __SIMSTRUC_64_INTERNAL__
#define __SIMSTRUC_64_INTERNAL__

#include "sl_utility/simstruct_bridge_utils.hpp"

/* defined in simstruc.h */
#define ssGetInputPortWidth(S,port) (isSimStruct64FeatureOn ? ssGetInputPortWidthSLSize_fwd(S,port) : ssGetInputPortWidth_fwd(S,port))
#define ssSetInputPortWidth(S,port,val) (isSimStruct64FeatureOn ? ssSetInputPortWidthSLSize_fwd(S,port,val) : ssSetInputPortWidth_fwd(S,port,val))
#define ssGetOutputPortWidth(S,port) (isSimStruct64FeatureOn ? ssGetOutputPortWidthSLSize_fwd(S,port) : ssGetOutputPortWidth_fwd(S,port))
#define ssSetOutputPortWidth(S,port,val) (isSimStruct64FeatureOn ? ssSetOutputPortWidthSLSize_fwd(S,port,val) : ssSetOutputPortWidth_fwd(S,port,val))

//_ssSizes
#define ssGetNumContStates(S) (isSimStruct64FeatureOn ? ssGetNumContStatesSLSize_fwd(S) : ssGetNumContStates_fwd(S))
#define ssSetNumContStates(S, nContStates) (isSimStruct64FeatureOn ? ssSetNumContStatesSLSize_fwd(S, nContStates) : ssSetNumContStates_fwd(S, nContStates))
#define ssGetNumDiscStates(S) (isSimStruct64FeatureOn ? ssGetNumDiscStatesSLSize_fwd(S) : ssGetNumDiscStates_fwd(S))
#define ssSetNumDiscStates(S, nContStates) (isSimStruct64FeatureOn ? ssSetNumDiscStatesSLSize_fwd(S, nContStates) : ssSetNumDiscStates_fwd(S, nContStates))
#define ssGetNumNonsampledZCs(S) (isSimStruct64FeatureOn ? ssGetNumNonsampledZCsSLSize_fwd(S) : ssGetNumNonsampledZCs_fwd(S))
#define ssSetNumNonsampledZCs(S, nNonsampledZCs) (isSimStruct64FeatureOn ? ssSetNumNonsampledZCsSLSize_fwd(S, nNonsampledZCs) : ssSetNumNonsampledZCs_fwd(S, nNonsampledZCs))
#define ssGetNumModes(S) (isSimStruct64FeatureOn ? ssGetNumModesSLSize_fwd(S) : ssGetNumModes_fwd(S))
#define ssSetNumModes(S, n) (isSimStruct64FeatureOn ? ssSetNumModesSLSize_fwd(S, n) : ssSetNumModes_fwd(S, n))
#define ssGetNumRWork(S) (isSimStruct64FeatureOn ? ssGetNumRWorkSLSize_fwd(S) : ssGetNumRWork_fwd(S))
#define ssSetNumRWork(S, nRWork) (isSimStruct64FeatureOn ? ssSetNumRWorkSLSize_fwd(S, nRWork) : ssSetNumRWork_fwd(S, nRWork))
#define ssGetNumIWork(S) (isSimStruct64FeatureOn ? ssGetNumIWorkSLSize_fwd(S) : ssGetNumIWork_fwd(S))
#define ssSetNumIWork(S, nRWork) (isSimStruct64FeatureOn ? ssSetNumIWorkSLSize_fwd(S, nRWork) : ssSetNumIWork_fwd(S, nRWork))
#define ssGetNumPWork(S) (isSimStruct64FeatureOn ? ssGetNumPWorkSLSize_fwd(S) : ssGetNumPWork_fwd(S))
#define ssSetNumPWork(S, nRWork) (isSimStruct64FeatureOn ? ssSetNumPWorkSLSize_fwd(S, nRWork) : ssSetNumPWork_fwd(S, nRWork))
#define ssGetNumDWork(S) (isSimStruct64FeatureOn ? ssGetNumDWorkSLSize_fwd(S) : ssGetNumDWork_fwd(S))
#define ssSetNumDWork(S,nDWork) (isSimStruct64FeatureOn ? ssSetNumDWorkSLSize_fwd(S, nDWork) : ssSetNumDWork_fwd(S,nDWork))

#endif
