/*
 * FFT4dSpace_1.h
 *
 * Code generation for model "FFT4dSpace_1".
 *
 * Model version              : 4.687
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Feb  7 10:50:06 2024
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FFT4dSpace_1_h_
#define RTW_HEADER_FFT4dSpace_1_h_
#include <math.h>
#include <string.h>
#ifndef FFT4dSpace_1_COMMON_INCLUDES_
#define FFT4dSpace_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "FFT4dSpace_1_types.h"
#include "FFT4dSpace_1_dsmpbap.h"
#endif                                 /* FFT4dSpace_1_COMMON_INCLUDES_ */

#include "FFT4dSpace_1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  uint64_T Peak_Freq_FFT[3];           /* '<Root>/Gain3' */
  creal_T FFT[1024];                   /* '<Root>/FFT' */
  creal_T Gain1[1024];                 /* '<Root>/Gain1' */
  creal_T normalizeFFT[1024];          /* '<Root>/normalize FFT' */
  real_T mycurrentTime;                /* '<Root>/Clock' */
  real_T Cclock_gain;                  /* '<Root>/Cclock_gain' */
  real_T sin4FFT;                      /* '<Root>/Asin1' */
  real_T ZeroOrderHold;                /* '<Root>/Zero-Order Hold' */
  real_T Buffer[1024];                 /* '<Root>/Buffer' */
  real_T absFFTout[1024];              /* '<Root>/Complex to Magnitude-Angle' */
  real_T PeakFinder_o3[3];             /* '<Root>/Peak Finder' */
  real_T f_vec[1024];                  /* '<Root>/Gain2' */
  real_T MultiportSwitch6[2];          /* '<S1>/Multiport Switch6' */
  real_T MultiportSwitch2;             /* '<S1>/Multiport Switch2' */
  real_T MultiportSwitch1[2];          /* '<S1>/Multiport Switch1' */
  real_T Status2;                      /* '<S9>/Data Inport S-Fcn' */
  real_T RX_Bytes2[2];                 /* '<S9>/Data Inport S-Fcn' */
  real_T Status1;                      /* '<S7>/Data Inport S-Fcn' */
  real_T y_sin;                        /* '<Root>/MATLAB Function1' */
  uint32_T PeakFinder_o1;              /* '<Root>/Peak Finder' */
  uint32_T FFT_idx[3];                 /* '<Root>/Peak Finder' */
} B_FFT4dSpace_1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Buffer_CircBuf[2048];         /* '<Root>/Buffer' */
  void *DataInportSFcn_PWORK[2];       /* '<S9>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_g;        /* '<S7>/Data Inport S-Fcn' */
  int32_T Buffer_inBufPtrIdx;          /* '<Root>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<Root>/Buffer' */
  int32_T Buffer_bufferLength;         /* '<Root>/Buffer' */
} DW_FFT4dSpace_1_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: FFT_TwiddleTable
   * Referenced by: '<Root>/FFT'
   */
  real_T FFT_TwiddleTable[768];
} ConstP_FFT4dSpace_1_T;

/* Parameters (default storage) */
struct P_FFT4dSpace_1_T_ {
  struct_HWeianez4jK7RhAtAn8PqF mdlPara;/* Variable: mdlPara
                                         * Referenced by:
                                         *   '<Root>/Constant'
                                         *   '<Root>/Asin1'
                                         */
  real_T Ts_1kHz;                      /* Variable: Ts_1kHz
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Cclock_gain_Gain;             /* Expression: 1
                                        * Referenced by: '<Root>/Cclock_gain'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Buffer_ic;                    /* Expression: 0
                                        * Referenced by: '<Root>/Buffer'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T normalizeFFT_Gain;            /* Expression: 1/10124
                                        * Referenced by: '<Root>/normalize FFT'
                                        */
  real_T Constant1_Value[1024];        /* Expression: [0:1:1023]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T DeviceADDR_Value;             /* Expression: 45
                                        * Referenced by: '<S1>/DeviceADDR'
                                        */
  real_T Write1Read2_Value;            /* Expression: 1
                                        * Referenced by: '<S1>/Write1Read2'
                                        */
  real_T WIPER_Nr1_4_Value;            /* Expression: 1
                                        * Referenced by: '<S1>/WIPER_Nr1_4'
                                        */
  real_T WIPER0ADDR_WRITE_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/WIPER0ADDR_WRITE'
                                        */
  real_T Data2Write_W1_Value;          /* Expression: 15
                                        * Referenced by: '<S1>/Data2Write_W1'
                                        */
  real_T WIPER1ADDR_WRITE_Value;       /* Expression: 16
                                        * Referenced by: '<S1>/WIPER1ADDR_WRITE'
                                        */
  real_T Data2Write_W2_Value;          /* Expression: 15
                                        * Referenced by: '<S1>/Data2Write_W2'
                                        */
  real_T WIPER2ADDR_WRITE_Value;       /* Expression: 96
                                        * Referenced by: '<S1>/WIPER2ADDR_WRITE'
                                        */
  real_T Data2Write_W3_Value;          /* Expression: 15
                                        * Referenced by: '<S1>/Data2Write_W3'
                                        */
  real_T WIPER3ADDR_WRITE_Value;       /* Expression: 112
                                        * Referenced by: '<S1>/WIPER3ADDR_WRITE'
                                        */
  real_T Data2Write_W4_Value;          /* Expression: 15
                                        * Referenced by: '<S1>/Data2Write_W4'
                                        */
  real_T WIPER0ADDR_READ_Value;        /* Expression: 12
                                        * Referenced by: '<S1>/WIPER0ADDR_READ'
                                        */
  real_T WIPER1ADDR_READ_Value;        /* Expression: 28
                                        * Referenced by: '<S1>/WIPER1ADDR_READ'
                                        */
  real_T WIPER2ADDR_READ_Value;        /* Expression: 108
                                        * Referenced by: '<S1>/WIPER2ADDR_READ'
                                        */
  real_T WIPER3ADDR_READ_Value;        /* Expression: 124
                                        * Referenced by: '<S1>/WIPER3ADDR_READ'
                                        */
  real_T Global_Enable_Value;          /* Expression: 1
                                        * Referenced by: '<S1>/Global_Enable'
                                        */
  uint32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FFT4dSpace_1_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
extern P_FFT4dSpace_1_T FFT4dSpace_1_P;

/* Block signals (default storage) */
extern B_FFT4dSpace_1_T FFT4dSpace_1_B;

/* Block states (default storage) */
extern DW_FFT4dSpace_1_T FFT4dSpace_1_DW;

/* Constant parameters (default storage) */
extern const ConstP_FFT4dSpace_1_T FFT4dSpace_1_ConstP;

/* Model entry point functions */
extern void FFT4dSpace_1_initialize(void);
extern void FFT4dSpace_1_output(void);
extern void FFT4dSpace_1_update(void);
extern void FFT4dSpace_1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FFT4dSpace_1_T *const FFT4dSpace_1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FFT4dSpace_1'
 * '<S1>'   : 'FFT4dSpace_1/I2C_Communication'
 * '<S2>'   : 'FFT4dSpace_1/MATLAB Function1'
 * '<S3>'   : 'FFT4dSpace_1/PA_tools_RepoInfo1'
 * '<S4>'   : 'FFT4dSpace_1/RML_tools_RepoInfo'
 * '<S5>'   : 'FFT4dSpace_1/RTI Data'
 * '<S6>'   : 'FFT4dSpace_1/I2C_Communication/SER Setup (1)'
 * '<S7>'   : 'FFT4dSpace_1/I2C_Communication/Sequence1_In [SER I2C Master (1)]'
 * '<S8>'   : 'FFT4dSpace_1/I2C_Communication/Sequence1_Out [SER I2C Master (1)]'
 * '<S9>'   : 'FFT4dSpace_1/I2C_Communication/Sequence2_In [SER I2C Master (1)]'
 * '<S10>'  : 'FFT4dSpace_1/I2C_Communication/Sequence2_Out [SER I2C Master (1)]'
 * '<S11>'  : 'FFT4dSpace_1/RTI Data/RTI Data Store'
 * '<S12>'  : 'FFT4dSpace_1/RTI Data/RTI Data Store/RTI Data Store'
 * '<S13>'  : 'FFT4dSpace_1/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_FFT4dSpace_1_h_ */
