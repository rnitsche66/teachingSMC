/****************************************************************************\ 
 *** 
 *** File                  : data_in_ap.cpp
 *** 
 *** Generated by dSPACE Tools.
 *** (c) Copyright 2013, dSPACE GmbH. All rights reserved.
\****************************************************************************/

#if !defined(DATA_IN_AP_CPP_)
#  define    DATA_IN_AP_CPP_


/* -- Include directives. -- */
#  include "IOCode_Data.h"
#  include <DsApplicationInterface.h>
#  include "string.h"
#  include "data_in_ap.h"

#  if defined(EXTERN_C_DECL)
#    undef EXTERN_C_DECL
#  endif
#  if defined(__cplusplus)
#    define EXTERN_C_DECL extern "C"
#  else
#    define EXTERN_C_DECL extern
#  endif


/* -- Variable declarations in module scope. -- */

/* Pragma to suppress GCC stack reuse which leads to problems with signal chain code */
#ifdef __GNUC__
#pragma GCC optimize "-fstack-reuse=none"
#endif

/* -- Definitions of exported functions. -- */

  void
ap_read_FFT4dSpace_1_DataInport2_P1_S1(
    Float64* x) 
{
/* ModelPort:{Sequence1_In [SER I2C Master (1)].Status1}, PortId:{bbc1bd72-d794-442b-b6e2-735ad3ac33cb} */

}

  void
ap_read_FFT4dSpace_1_DataInport1_P1_S1(
    Float64* x) 
{
/* ModelPort:{Sequence2_In [SER I2C Master (1)].Status2}, PortId:{c825e840-241a-4b6f-bf2c-380bbaca74e6} */

}

  void
ap_read_FFT4dSpace_1_DataInport1_P2_S1(
    Float64* x) 
{
/* ModelPort:{Sequence2_In [SER I2C Master (1)].RX_Bytes2}, PortId:{5c01308f-615e-4599-acb8-22a35f81ada1} */

}

#endif                                 /* DATA_IN_AP_CPP_ */
/* [EOF] */
