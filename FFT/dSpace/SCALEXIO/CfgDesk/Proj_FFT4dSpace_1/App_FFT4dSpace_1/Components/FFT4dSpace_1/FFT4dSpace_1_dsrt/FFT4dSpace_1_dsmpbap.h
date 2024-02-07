/*********************** dSPACE target specific header file ********************
   Include file FFT4dSpace_1_dsmpbap.h:

   Definitions used for access points

   Wed Feb  7 10:50:06 2024

   (c) Copyright 2020, dSPACE GmbH. All rights reserved.

 *******************************************************************************/

#ifndef _DSMPB_FFT4dSpace_1_HEADER_
#define _DSMPB_FFT4dSpace_1_HEADER_
#include "rtwtypes.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* External declarations for access points prototypes */

/*                                                                            */
/* Declarations of read/write and trigger access points                       */
/*                                                                            */
/* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence1_Out [SER I2C Master (1)], non-bus port 1 */
EXTERN_C void ap_write_FFT4dSpace_1_DataOutport1_P1_S1(const real_T
  * InputPortSignalPtr);

/* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence1_Out [SER I2C Master (1)], non-bus port 2 */
EXTERN_C void ap_write_FFT4dSpace_1_DataOutport1_P2_S1(const real_T
  * InputPortSignalPtr);

/* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence2_Out [SER I2C Master (1)], non-bus port 1 */
EXTERN_C void ap_write_FFT4dSpace_1_DataOutport2_P1_S1(const real_T
  * InputPortSignalPtr);

/* Write access point of block FFT4dSpace_1/I2C_Communication/SER Setup (1), non-bus port 1 */
EXTERN_C void ap_write_FFT4dSpace_1_DataOutport3_P1_S1(const real_T
  * InputPortSignalPtr);

/* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence2_In [SER I2C Master (1)], non-bus port 1 */
EXTERN_C void ap_read_FFT4dSpace_1_DataInport1_P1_S1(real_T* OutputPortSignalPtr);

/* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence2_In [SER I2C Master (1)], non-bus port 2 */
EXTERN_C void ap_read_FFT4dSpace_1_DataInport1_P2_S1(real_T* OutputPortSignalPtr);

/* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence1_In [SER I2C Master (1)], non-bus port 1 */
EXTERN_C void ap_read_FFT4dSpace_1_DataInport2_P1_S1(real_T* OutputPortSignalPtr);

/*                                                                            */
/* Declarations of function module access points                              */
/*                                                                            */
/* Function module access point of system <Root>    */
EXTERN_C void ap_entry_FFT4dSpace_1_SIDRoot_TID1();
EXTERN_C void ap_exit_FFT4dSpace_1_SIDRoot_TID1();

#ifdef HAVE_FFT4dSpace_1_DSMPBAP_CUSTOM
#include "FFT4dSpace_1_dsmpbap_custom.h"
#endif
#endif
