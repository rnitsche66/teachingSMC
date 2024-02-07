/*
 * FFT4dSpace_1.c
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

#include "FFT4dSpace_1_dsrtvdf.h"
#include "FFT4dSpace_1.h"
#include "FFT4dSpace_1_private.h"

/* Block signals (default storage) */
B_FFT4dSpace_1_T FFT4dSpace_1_B;

/* Block states (default storage) */
DW_FFT4dSpace_1_T FFT4dSpace_1_DW;

/* Real-time model */
static RT_MODEL_FFT4dSpace_1_T FFT4dSpace_1_M_;
RT_MODEL_FFT4dSpace_1_T *const FFT4dSpace_1_M = &FFT4dSpace_1_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (FFT4dSpace_1_M->Timing.TaskCounters.TID[2])++;
  if ((FFT4dSpace_1_M->Timing.TaskCounters.TID[2]) > 15) {/* Sample time: [0.001s, 0.0s] */
    FFT4dSpace_1_M->Timing.TaskCounters.TID[2] = 0;
  }

  (FFT4dSpace_1_M->Timing.TaskCounters.TID[3])++;
  if ((FFT4dSpace_1_M->Timing.TaskCounters.TID[3]) > 16383) {/* Sample time: [1.024s, 0.0s] */
    FFT4dSpace_1_M->Timing.TaskCounters.TID[3] = 0;
  }
}

void MWDSPCG_FFT_Interleave_R2BR_D(const real_T x[], creal_T y[], int32_T nChans,
  int32_T nRows)
{
  int32_T bit_fftLen;
  int32_T br_j;
  int32_T j;
  int32_T nChansBy2;
  int32_T uIdx;
  int32_T yIdx;

  /* S-Function (sdspfft2): '<Root>/FFT' */
  /* Bit-reverses the input data simultaneously with the interleaving operation,
     obviating the need for explicit data reordering later.  This requires an
     FFT with bit-reversed inputs.
   */
  br_j = 0;
  yIdx = 0;
  uIdx = 0;
  for (nChansBy2 = nChans >> 1; nChansBy2 != 0; nChansBy2--) {
    for (j = nRows; j - 1 > 0; j--) {
      y[yIdx + br_j].re = x[uIdx];
      y[yIdx + br_j].im = x[uIdx + nRows];
      uIdx++;

      /* Compute next bit-reversed destination index */
      bit_fftLen = nRows;
      do {
        bit_fftLen = (int32_T)((uint32_T)bit_fftLen >> 1);
        br_j ^= bit_fftLen;
      } while ((br_j & bit_fftLen) == 0);
    }

    y[yIdx + br_j].re = x[uIdx];
    y[yIdx + br_j].im = x[uIdx + nRows];
    uIdx = (uIdx + nRows) + 1;
    yIdx += nRows << 1;
    br_j = 0;
  }

  /* For an odd number of channels, prepare the last channel
     for a double-length real signal algorithm.  No actual
     interleaving is required, just a copy of the last column
     of real data, but now placed in bit-reversed order.
     We need to cast the real u pointer to a cDType_T pointer,
     in order to fake the interleaving, and cut the number
     of elements in half (half as many complex interleaved
     elements as compared to real non-interleaved elements).
   */
  if ((nChans & 1U) != 0U) {
    for (j = nRows >> 1; j - 1 > 0; j--) {
      y[yIdx + br_j].re = x[uIdx];
      y[yIdx + br_j].im = x[uIdx + 1];
      uIdx += 2;

      /* Compute next bit-reversed destination index */
      bit_fftLen = nRows >> 1;
      do {
        bit_fftLen = (int32_T)((uint32_T)bit_fftLen >> 1);
        br_j ^= bit_fftLen;
      } while ((br_j & bit_fftLen) == 0);
    }

    y[yIdx + br_j].re = x[uIdx];
    y[yIdx + br_j].im = x[uIdx + 1];
  }

  /* End of S-Function (sdspfft2): '<Root>/FFT' */
}

void MWDSPCG_R2DIT_TBLS_Z(creal_T y[], int32_T nChans, int32_T nRows, int32_T
  fftLen, int32_T offset, const real_T tablePtr[], int32_T twiddleStep,
  boolean_T isInverse)
{
  real_T tmp_im;
  real_T tmp_re;
  real_T twidIm;
  real_T twidRe;
  int32_T fwdInvFactor;
  int32_T i1;
  int32_T i2;
  int32_T iCh;
  int32_T idelta;
  int32_T istart;
  int32_T ix;
  int32_T j;
  int32_T k;
  int32_T kratio;
  int32_T nHalf;
  int32_T nQtr;
  int32_T offsetCh;

  /* S-Function (sdspfft2): '<Root>/FFT' */
  /* DSP System Toolbox Decimation in Time FFT  */
  /* Computation performed using table lookup  */
  /* Output type: complex real_T */
  nHalf = fftLen >> 1;
  nHalf *= twiddleStep;
  nQtr = nHalf >> 1;
  fwdInvFactor = isInverse ? -1 : 1;

  /* For each channel */
  offsetCh = offset;
  for (iCh = 0; iCh < nChans; iCh++) {
    /* Perform butterflies for the first stage, where no multiply is required. */
    for (ix = offsetCh; ix < (fftLen + offsetCh) - 1; ix += 2) {
      i2 = ix + 1;
      tmp_re = y[i2].re;
      tmp_im = y[i2].im;
      y[i2].re = y[ix].re - tmp_re;
      y[i2].im = y[ix].im - tmp_im;
      y[ix].re += tmp_re;
      y[ix].im += tmp_im;
    }

    idelta = 2;
    k = fftLen >> 2;
    kratio = k * twiddleStep;
    while (k > 0) {
      istart = offsetCh;
      i1 = istart;

      /* Perform the first butterfly in each remaining stage, where no multiply is required. */
      for (ix = 0; ix < k; ix++) {
        i2 = i1 + idelta;
        tmp_re = y[i2].re;
        tmp_im = y[i2].im;
        y[i2].re = y[i1].re - tmp_re;
        y[i2].im = y[i1].im - tmp_im;
        y[i1].re += tmp_re;
        y[i1].im += tmp_im;
        i1 += idelta << 1;
      }

      /* Perform remaining butterflies */
      for (j = kratio; j < nHalf; j += kratio) {
        i1 = istart + 1;
        twidRe = tablePtr[j];
        twidIm = tablePtr[j + nQtr] * (real_T)fwdInvFactor;
        for (ix = 0; ix < k; ix++) {
          i2 = i1 + idelta;
          tmp_re = y[i2].re * twidRe - y[i2].im * twidIm;
          tmp_im = y[i2].re * twidIm + y[i2].im * twidRe;
          y[i2].re = y[i1].re - tmp_re;
          y[i2].im = y[i1].im - tmp_im;
          y[i1].re += tmp_re;
          y[i1].im += tmp_im;
          i1 += idelta << 1;
        }

        istart++;
      }

      idelta <<= 1;
      k >>= 1;
      kratio >>= 1;
    }

    /* Point to next channel */
    offsetCh += nRows;
  }

  /* End of S-Function (sdspfft2): '<Root>/FFT' */
}

void MWDSPCG_FFT_DblLen_Z(creal_T y[], int32_T nChans, int32_T nRows, const
  real_T twiddleTable[], int32_T twiddleStep)
{
  real_T accRe;
  real_T cTemp_im;
  real_T temp2Re;
  real_T tempOut0Im;
  real_T tempOut1Im;
  real_T tempOut1Re;
  int32_T N2;
  int32_T N4;
  int32_T W4;
  int32_T ix;
  int32_T k;
  int32_T yIdx;

  /* S-Function (sdspfft2): '<Root>/FFT' */
  /* In-place "double-length" data recovery
     Table-based mem-optimized twiddle computation

     Used to recover linear-ordered length-N point complex FFT result
     from a linear-ordered complex length-N/2 point FFT, performed
     on N interleaved real values.
   */
  N2 = nRows >> 1;
  N4 = N2 >> 1;
  W4 = N4 * twiddleStep;
  yIdx = (nChans - 1) * nRows;
  if (nRows > 2) {
    temp2Re = y[N4 + yIdx].re;
    tempOut0Im = y[N4 + yIdx].im;
    y[(N2 + N4) + yIdx].re = temp2Re;
    y[(N2 + N4) + yIdx].im = tempOut0Im;
    y[N4 + yIdx].re = temp2Re;
    y[N4 + yIdx].im = -tempOut0Im;
  }

  if (nRows > 1) {
    accRe = y[yIdx].re;
    accRe -= y[yIdx].im;
    y[N2 + yIdx].re = accRe;
    y[N2 + yIdx].im = 0.0;
  }

  accRe = y[yIdx].re;
  accRe += y[yIdx].im;
  y[yIdx].re = accRe;
  y[yIdx].im = 0.0;
  k = twiddleStep;
  for (ix = 1; ix < N4; ix++) {
    accRe = y[ix + yIdx].re;
    accRe += y[(N2 - ix) + yIdx].re;
    accRe /= 2.0;
    temp2Re = accRe;
    accRe = y[ix + yIdx].im;
    accRe -= y[(N2 - ix) + yIdx].im;
    accRe /= 2.0;
    tempOut0Im = accRe;
    accRe = y[ix + yIdx].im;
    accRe += y[(N2 - ix) + yIdx].im;
    accRe /= 2.0;
    tempOut1Re = accRe;
    accRe = y[(N2 - ix) + yIdx].re;
    accRe -= y[ix + yIdx].re;
    accRe /= 2.0;
    y[ix + yIdx].re = tempOut1Re;
    y[ix + yIdx].im = accRe;
    accRe = y[ix + yIdx].re * twiddleTable[k] - -twiddleTable[W4 - k] * y[ix +
      yIdx].im;
    cTemp_im = y[ix + yIdx].im * twiddleTable[k] + -twiddleTable[W4 - k] * y[ix
      + yIdx].re;
    tempOut1Re = accRe;
    tempOut1Im = cTemp_im;
    accRe = temp2Re;
    cTemp_im = tempOut0Im;
    accRe += tempOut1Re;
    cTemp_im += tempOut1Im;
    y[ix + yIdx].re = accRe;
    y[ix + yIdx].im = cTemp_im;
    accRe = y[ix + yIdx].re;
    cTemp_im = -y[ix + yIdx].im;
    y[(nRows - ix) + yIdx].re = accRe;
    y[(nRows - ix) + yIdx].im = cTemp_im;
    accRe = temp2Re;
    cTemp_im = tempOut0Im;
    accRe -= tempOut1Re;
    cTemp_im -= tempOut1Im;
    y[(N2 + ix) + yIdx].re = accRe;
    y[(N2 + ix) + yIdx].im = cTemp_im;
    temp2Re = y[(N2 + ix) + yIdx].re;
    tempOut0Im = y[(N2 + ix) + yIdx].im;
    y[(N2 - ix) + yIdx].re = temp2Re;
    y[(N2 - ix) + yIdx].im = -tempOut0Im;
    k += twiddleStep;
  }

  /* End of S-Function (sdspfft2): '<Root>/FFT' */
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T y;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
  } else if (!rtIsNaN(y)) {
    y = a * 1.4142135623730951;
  }

  return y;
}

/* Model output function */
void FFT4dSpace_1_output(void)
{
  real_T diff1;
  real_T uTemp;
  int32_T currentOffset;
  int32_T i;
  int32_T nOutRows;
  int32_T one;
  int32_T uyIdx;

  /* user code (Output function Body) */
  if (rtmIsMajorTimeStep(FFT4dSpace_1_M)) {
    /* Function module access point of system <Root>    */
    ap_entry_FFT4dSpace_1_SIDRoot_TID1();
  }

  /* Clock: '<Root>/Clock' */
  FFT4dSpace_1_B.mycurrentTime = FFT4dSpace_1_M->Timing.t[0];

  /* Gain: '<Root>/Cclock_gain' */
  FFT4dSpace_1_B.Cclock_gain = FFT4dSpace_1_P.Cclock_gain_Gain *
    FFT4dSpace_1_B.mycurrentTime;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant7'
   */
  /* MATLAB Function 'MATLAB Function1': '<S2>:1' */
  /* '<S2>:1:3' */
  FFT4dSpace_1_B.y_sin = FFT4dSpace_1_B.Cclock_gain *
    FFT4dSpace_1_P.mdlPara.sinFreq_Hz_1 * 2.0 * 3.1415926535897931 +
    FFT4dSpace_1_P.Constant7_Value * 3.1415926535897931 / 180.0;
  FFT4dSpace_1_B.y_sin = sin(FFT4dSpace_1_B.y_sin);

  /* Gain: '<Root>/Asin1' */
  FFT4dSpace_1_B.sin4FFT = FFT4dSpace_1_P.mdlPara.Asin_1 * FFT4dSpace_1_B.y_sin;

  /* ZeroOrderHold: '<Root>/Zero-Order Hold' */
  if (FFT4dSpace_1_M->Timing.TaskCounters.TID[2] == 0) {
    /* ZeroOrderHold: '<Root>/Zero-Order Hold' */
    FFT4dSpace_1_B.ZeroOrderHold = FFT4dSpace_1_B.sin4FFT;

    /* Buffer: '<Root>/Buffer' */
    i = 1;
    one = 2048 - FFT4dSpace_1_DW.Buffer_inBufPtrIdx;
    uyIdx = FFT4dSpace_1_DW.Buffer_inBufPtrIdx;
    if (FFT4dSpace_1_DW.Buffer_inBufPtrIdx > 2047) {
      for (nOutRows = 0; nOutRows < one; nOutRows++) {
        FFT4dSpace_1_DW.Buffer_CircBuf[uyIdx + nOutRows] =
          FFT4dSpace_1_B.ZeroOrderHold;
      }

      uyIdx = 0;
      i = 1 - one;
    }

    for (nOutRows = 0; nOutRows < i; nOutRows++) {
      FFT4dSpace_1_DW.Buffer_CircBuf[uyIdx + nOutRows] =
        FFT4dSpace_1_B.ZeroOrderHold;
    }

    FFT4dSpace_1_DW.Buffer_inBufPtrIdx++;
    if (FFT4dSpace_1_DW.Buffer_inBufPtrIdx >= 2048) {
      FFT4dSpace_1_DW.Buffer_inBufPtrIdx -= 2048;
    }

    FFT4dSpace_1_DW.Buffer_bufferLength++;
    if (FFT4dSpace_1_DW.Buffer_bufferLength > 2048) {
      FFT4dSpace_1_DW.Buffer_outBufPtrIdx = (FFT4dSpace_1_DW.Buffer_outBufPtrIdx
        + FFT4dSpace_1_DW.Buffer_bufferLength) - 2048;
      if (FFT4dSpace_1_DW.Buffer_outBufPtrIdx > 2048) {
        FFT4dSpace_1_DW.Buffer_outBufPtrIdx -= 2048;
      }

      FFT4dSpace_1_DW.Buffer_bufferLength = 2048;
    }
  }

  /* End of ZeroOrderHold: '<Root>/Zero-Order Hold' */

  /* Buffer: '<Root>/Buffer' */
  if (FFT4dSpace_1_M->Timing.TaskCounters.TID[3] == 0) {
    FFT4dSpace_1_DW.Buffer_bufferLength -= 1024;
    if (FFT4dSpace_1_DW.Buffer_bufferLength < 0) {
      FFT4dSpace_1_DW.Buffer_outBufPtrIdx += FFT4dSpace_1_DW.Buffer_bufferLength;
      if (FFT4dSpace_1_DW.Buffer_outBufPtrIdx < 0) {
        FFT4dSpace_1_DW.Buffer_outBufPtrIdx += 2048;
      }

      FFT4dSpace_1_DW.Buffer_bufferLength = 0;
    }

    uyIdx = 0;
    currentOffset = FFT4dSpace_1_DW.Buffer_outBufPtrIdx;
    one = 2048 - currentOffset;
    i = 1024;
    if (currentOffset > 1024) {
      for (nOutRows = 0; nOutRows < one; nOutRows++) {
        FFT4dSpace_1_B.Buffer[nOutRows] =
          FFT4dSpace_1_DW.Buffer_CircBuf[currentOffset + nOutRows];
      }

      uyIdx = one;
      i = 1024 - one;
      currentOffset = 0;
    }

    for (nOutRows = 0; nOutRows < i; nOutRows++) {
      FFT4dSpace_1_B.Buffer[uyIdx + nOutRows] =
        FFT4dSpace_1_DW.Buffer_CircBuf[currentOffset + nOutRows];
    }

    currentOffset += i;
    if (currentOffset == 2048) {
      currentOffset = 0;
    }

    FFT4dSpace_1_DW.Buffer_outBufPtrIdx = currentOffset;

    /* S-Function (sdspfft2): '<Root>/FFT' incorporates:
     *  Buffer: '<Root>/Buffer'
     */
    MWDSPCG_FFT_Interleave_R2BR_D(&FFT4dSpace_1_B.Buffer[0U],
      &FFT4dSpace_1_B.FFT[0U], 1, 1024);
    currentOffset = 0;
    MWDSPCG_R2DIT_TBLS_Z(&FFT4dSpace_1_B.FFT[0U], 1, 1024, 512, 0,
                         FFT4dSpace_1_ConstP.FFT_TwiddleTable, 2, false);
    MWDSPCG_FFT_DblLen_Z(&FFT4dSpace_1_B.FFT[0U], 1, 1024,
                         FFT4dSpace_1_ConstP.FFT_TwiddleTable, 1);
    for (i = 0; i < 1024; i++) {
      /* Gain: '<Root>/Gain1' incorporates:
       *  S-Function (sdspfft2): '<Root>/FFT'
       */
      FFT4dSpace_1_B.Gain1[i].re = FFT4dSpace_1_P.Gain1_Gain *
        FFT4dSpace_1_B.FFT[i].re;
      FFT4dSpace_1_B.Gain1[i].im = FFT4dSpace_1_P.Gain1_Gain *
        FFT4dSpace_1_B.FFT[i].im;

      /* Gain: '<Root>/normalize FFT' incorporates:
       *  Gain: '<Root>/Gain1'
       */
      FFT4dSpace_1_B.normalizeFFT[i].re = FFT4dSpace_1_P.normalizeFFT_Gain *
        FFT4dSpace_1_B.Gain1[i].re;
      FFT4dSpace_1_B.normalizeFFT[i].im = FFT4dSpace_1_P.normalizeFFT_Gain *
        FFT4dSpace_1_B.Gain1[i].im;

      /* ComplexToMagnitudeAngle: '<Root>/Complex to Magnitude-Angle' incorporates:
       *  Gain: '<Root>/normalize FFT'
       */
      FFT4dSpace_1_B.absFFTout[i] = rt_hypotd_snf(FFT4dSpace_1_B.normalizeFFT[i]
        .re, FFT4dSpace_1_B.normalizeFFT[i].im);
    }

    /* S-Function (sdsppeaks): '<Root>/Peak Finder' incorporates:
     *  ComplexToMagnitudeAngle: '<Root>/Complex to Magnitude-Angle'
     */
    FFT4dSpace_1_B.FFT_idx[0] = 0U;
    FFT4dSpace_1_B.FFT_idx[1] = 0U;
    FFT4dSpace_1_B.FFT_idx[2] = 0U;
    FFT4dSpace_1_B.PeakFinder_o3[0] = 0.0;
    FFT4dSpace_1_B.PeakFinder_o3[1] = 0.0;
    FFT4dSpace_1_B.PeakFinder_o3[2] = 0.0;
    if (0.02 == 0.0) {
      /* no noise rejection or scalar threshold = 0 */
      uyIdx = 0;

      /* find peaks for each individual channels */
      for (nOutRows = 2; nOutRows < 1024; nOutRows++) {
        if (currentOffset < 3) {
          uTemp = FFT4dSpace_1_B.absFFTout[nOutRows - 1];
          if ((uTemp > FFT4dSpace_1_B.absFFTout[nOutRows - 2]) && (uTemp >
               FFT4dSpace_1_B.absFFTout[nOutRows])) {
            /* Local maximum without threshold */
            FFT4dSpace_1_B.FFT_idx[uyIdx] = (uint32_T)(nOutRows - 1);
            FFT4dSpace_1_B.PeakFinder_o3[uyIdx] = uTemp;
            currentOffset++;
            uyIdx++;
          }
        }
      }

      /* S-Function (sdsppeaks): '<Root>/Peak Finder' incorporates:
       *  ComplexToMagnitudeAngle: '<Root>/Complex to Magnitude-Angle'
       */
      FFT4dSpace_1_B.PeakFinder_o1 = (uint32_T)currentOffset;
    } else {
      /* with noise rejection and scalar threshold != 0 */
      uyIdx = 0;
      for (nOutRows = 1; nOutRows + 1 < 1024; nOutRows++) {
        if (currentOffset < 3) {
          /* To find extrema, we need three adjacent points mU[i-2,i-1,i]  */
          uTemp = FFT4dSpace_1_B.absFFTout[nOutRows];

          /* Compute Curr - Prev  */
          uTemp -= FFT4dSpace_1_B.absFFTout[nOutRows - 1];
          diff1 = FFT4dSpace_1_B.absFFTout[nOutRows];

          /* Compute Curr - Next */
          diff1 -= FFT4dSpace_1_B.absFFTout[nOutRows + 1];
          if ((uTemp > 0.02) && (diff1 > 0.02)) {
            /* Local minimum with Threshold  */
            FFT4dSpace_1_B.FFT_idx[uyIdx] = (uint32_T)nOutRows;
            FFT4dSpace_1_B.PeakFinder_o3[uyIdx] =
              FFT4dSpace_1_B.absFFTout[nOutRows];
            currentOffset++;
            uyIdx++;
          }
        }
      }

      /* S-Function (sdsppeaks): '<Root>/Peak Finder' incorporates:
       *  ComplexToMagnitudeAngle: '<Root>/Complex to Magnitude-Angle'
       */
      FFT4dSpace_1_B.PeakFinder_o1 = (uint32_T)currentOffset;
    }

    /* End of S-Function (sdsppeaks): '<Root>/Peak Finder' */

    /* Gain: '<Root>/Gain3' */
    FFT4dSpace_1_B.Peak_Freq_FFT[0] = (uint64_T)FFT4dSpace_1_P.Gain3_Gain *
      FFT4dSpace_1_B.FFT_idx[0];
    FFT4dSpace_1_B.Peak_Freq_FFT[1] = (uint64_T)FFT4dSpace_1_P.Gain3_Gain *
      FFT4dSpace_1_B.FFT_idx[1];
    FFT4dSpace_1_B.Peak_Freq_FFT[2] = (uint64_T)FFT4dSpace_1_P.Gain3_Gain *
      FFT4dSpace_1_B.FFT_idx[2];
  }

  /* Gain: '<Root>/Gain2' */
  uTemp = 1.0 / FFT4dSpace_1_P.Ts_1kHz / 1024.0;
  for (i = 0; i < 1024; i++) {
    /* Gain: '<Root>/Gain2' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    FFT4dSpace_1_B.f_vec[i] = uTemp * FFT4dSpace_1_P.Constant1_Value[i];
  }

  /* MultiPortSwitch: '<S1>/Multiport Switch6' incorporates:
   *  Constant: '<S1>/WIPER_Nr1_4'
   */
  switch ((int32_T)FFT4dSpace_1_P.WIPER_Nr1_4_Value) {
   case 1:
    /* MultiPortSwitch: '<S1>/Multiport Switch6' incorporates:
     *  Constant: '<S1>/Data2Write_W1'
     *  Constant: '<S1>/WIPER0ADDR_WRITE'
     */
    FFT4dSpace_1_B.MultiportSwitch6[0] = FFT4dSpace_1_P.WIPER0ADDR_WRITE_Value;
    FFT4dSpace_1_B.MultiportSwitch6[1] = FFT4dSpace_1_P.Data2Write_W1_Value;

    /* MultiPortSwitch: '<S1>/Multiport Switch2' incorporates:
     *  Constant: '<S1>/WIPER0ADDR_READ'
     */
    FFT4dSpace_1_B.MultiportSwitch2 = FFT4dSpace_1_P.WIPER0ADDR_READ_Value;
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/Multiport Switch6' incorporates:
     *  Constant: '<S1>/Data2Write_W2'
     *  Constant: '<S1>/WIPER1ADDR_WRITE'
     */
    FFT4dSpace_1_B.MultiportSwitch6[0] = FFT4dSpace_1_P.WIPER1ADDR_WRITE_Value;
    FFT4dSpace_1_B.MultiportSwitch6[1] = FFT4dSpace_1_P.Data2Write_W2_Value;

    /* MultiPortSwitch: '<S1>/Multiport Switch2' incorporates:
     *  Constant: '<S1>/WIPER1ADDR_READ'
     */
    FFT4dSpace_1_B.MultiportSwitch2 = FFT4dSpace_1_P.WIPER1ADDR_READ_Value;
    break;

   case 3:
    /* MultiPortSwitch: '<S1>/Multiport Switch6' incorporates:
     *  Constant: '<S1>/Data2Write_W3'
     *  Constant: '<S1>/WIPER2ADDR_WRITE'
     */
    FFT4dSpace_1_B.MultiportSwitch6[0] = FFT4dSpace_1_P.WIPER2ADDR_WRITE_Value;
    FFT4dSpace_1_B.MultiportSwitch6[1] = FFT4dSpace_1_P.Data2Write_W3_Value;

    /* MultiPortSwitch: '<S1>/Multiport Switch2' incorporates:
     *  Constant: '<S1>/WIPER2ADDR_READ'
     */
    FFT4dSpace_1_B.MultiportSwitch2 = FFT4dSpace_1_P.WIPER2ADDR_READ_Value;
    break;

   default:
    /* MultiPortSwitch: '<S1>/Multiport Switch6' incorporates:
     *  Constant: '<S1>/Data2Write_W4'
     *  Constant: '<S1>/WIPER3ADDR_WRITE'
     */
    FFT4dSpace_1_B.MultiportSwitch6[0] = FFT4dSpace_1_P.WIPER3ADDR_WRITE_Value;
    FFT4dSpace_1_B.MultiportSwitch6[1] = FFT4dSpace_1_P.Data2Write_W4_Value;

    /* MultiPortSwitch: '<S1>/Multiport Switch2' incorporates:
     *  Constant: '<S1>/WIPER3ADDR_READ'
     */
    FFT4dSpace_1_B.MultiportSwitch2 = FFT4dSpace_1_P.WIPER3ADDR_READ_Value;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch6' */

  /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
   *  Constant: '<S1>/Write1Read2'
   */
  if ((int32_T)FFT4dSpace_1_P.Write1Read2_Value == 1) {
    /* MultiPortSwitch: '<S1>/Multiport Switch1' */
    FFT4dSpace_1_B.MultiportSwitch1[0] = FFT4dSpace_1_B.MultiportSwitch6[0];
    FFT4dSpace_1_B.MultiportSwitch1[1] = FFT4dSpace_1_B.MultiportSwitch6[1];
  } else {
    /* MultiPortSwitch: '<S1>/Multiport Switch1' */
    FFT4dSpace_1_B.MultiportSwitch1[0] = FFT4dSpace_1_B.MultiportSwitch2;
    FFT4dSpace_1_B.MultiportSwitch1[1] = FFT4dSpace_1_B.MultiportSwitch2;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch1' */

  /* S-Function (dsmpb_dataoutport): '<S8>/Data Outport S-Fcn' incorporates:
   *  Constant: '<S1>/DeviceADDR'
   */

  /* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence1_Out [SER I2C Master (1)] non-bus port 1 */
  ap_write_FFT4dSpace_1_DataOutport1_P1_S1((real_T*)
    &FFT4dSpace_1_P.DeviceADDR_Value);

  /* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence1_Out [SER I2C Master (1)] non-bus port 2 */
  ap_write_FFT4dSpace_1_DataOutport1_P2_S1(&FFT4dSpace_1_B.MultiportSwitch1[0]);

  /* S-Function (dsmpb_dataoutport): '<S10>/Data Outport S-Fcn' incorporates:
   *  Constant: '<S1>/DeviceADDR'
   */

  /* Write access point of block FFT4dSpace_1/I2C_Communication/Sequence2_Out [SER I2C Master (1)] non-bus port 1 */
  ap_write_FFT4dSpace_1_DataOutport2_P1_S1((real_T*)
    &FFT4dSpace_1_P.DeviceADDR_Value);

  /* S-Function (dsmpb_dataoutport): '<S6>/Data Outport S-Fcn' incorporates:
   *  Constant: '<S1>/Global_Enable'
   */

  /* Write access point of block FFT4dSpace_1/I2C_Communication/SER Setup (1) non-bus port 1 */
  ap_write_FFT4dSpace_1_DataOutport3_P1_S1((real_T*)
    &FFT4dSpace_1_P.Global_Enable_Value);

  /* S-Function (dsmpb_datainport): '<S9>/Data Inport S-Fcn' */

  /* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence2_In [SER I2C Master (1)] non-bus port 1 */
  ap_read_FFT4dSpace_1_DataInport1_P1_S1(&FFT4dSpace_1_B.Status2);

  /* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence2_In [SER I2C Master (1)] non-bus port 2 */
  ap_read_FFT4dSpace_1_DataInport1_P2_S1(&FFT4dSpace_1_B.RX_Bytes2[0]);

  /* S-Function (dsmpb_datainport): '<S7>/Data Inport S-Fcn' */

  /* Read access point of block FFT4dSpace_1/I2C_Communication/Sequence1_In [SER I2C Master (1)] non-bus port 1 */
  ap_read_FFT4dSpace_1_DataInport2_P1_S1(&FFT4dSpace_1_B.Status1);

  /* user code (Output function Trailer) */
  if (rtmIsMajorTimeStep(FFT4dSpace_1_M)) {
    /* Function module access point of system <Root>    */
    ap_exit_FFT4dSpace_1_SIDRoot_TID1();
  }
}

/* Model update function */
void FFT4dSpace_1_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FFT4dSpace_1_M->Timing.clockTick0)) {
    ++FFT4dSpace_1_M->Timing.clockTickH0;
  }

  FFT4dSpace_1_M->Timing.t[0] = FFT4dSpace_1_M->Timing.clockTick0 *
    FFT4dSpace_1_M->Timing.stepSize0 + FFT4dSpace_1_M->Timing.clockTickH0 *
    FFT4dSpace_1_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [6.25E-5s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 6.25E-5, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    FFT4dSpace_1_M->Timing.clockTick1++;
    if (!FFT4dSpace_1_M->Timing.clockTick1) {
      FFT4dSpace_1_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void FFT4dSpace_1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FFT4dSpace_1_M, 0,
                sizeof(RT_MODEL_FFT4dSpace_1_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FFT4dSpace_1_M->solverInfo,
                          &FFT4dSpace_1_M->Timing.simTimeStep);
    rtsiSetTPtr(&FFT4dSpace_1_M->solverInfo, &rtmGetTPtr(FFT4dSpace_1_M));
    rtsiSetStepSizePtr(&FFT4dSpace_1_M->solverInfo,
                       &FFT4dSpace_1_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&FFT4dSpace_1_M->solverInfo, (&rtmGetErrorStatus
      (FFT4dSpace_1_M)));
    rtsiSetRTModelPtr(&FFT4dSpace_1_M->solverInfo, FFT4dSpace_1_M);
  }

  rtsiSetSimTimeStep(&FFT4dSpace_1_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&FFT4dSpace_1_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(FFT4dSpace_1_M, &FFT4dSpace_1_M->Timing.tArray[0]);
  FFT4dSpace_1_M->Timing.stepSize0 = 6.25E-5;

  /* block I/O */
  (void) memset(((void *) &FFT4dSpace_1_B), 0,
                sizeof(B_FFT4dSpace_1_T));

  {
    FFT4dSpace_1_B.Peak_Freq_FFT[0] = (0ULL);
    FFT4dSpace_1_B.Peak_Freq_FFT[1] = (0ULL);
    FFT4dSpace_1_B.Peak_Freq_FFT[2] = (0ULL);
  }

  /* states (dwork) */
  (void) memset((void *)&FFT4dSpace_1_DW, 0,
                sizeof(DW_FFT4dSpace_1_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    FFT4dSpace_1_rti_init_trc_pointers();
  }

  /* Start for S-Function (dsmpb_datainport): '<S9>/Data Inport S-Fcn' */
  FFT4dSpace_1_B.Status2 = 0;

  /* the initial values are all 0, therefore, we use memset */
  memset(&FFT4dSpace_1_B.RX_Bytes2[0], 0, 2U*sizeof(real_T));

  /* Start for S-Function (dsmpb_datainport): '<S7>/Data Inport S-Fcn' */
  FFT4dSpace_1_B.Status1 = 42.0;

  {
    int32_T i;

    /* InitializeConditions for Buffer: '<Root>/Buffer' */
    for (i = 0; i < 2048; i++) {
      FFT4dSpace_1_DW.Buffer_CircBuf[i] = FFT4dSpace_1_P.Buffer_ic;
    }

    FFT4dSpace_1_DW.Buffer_inBufPtrIdx = 1024;
    FFT4dSpace_1_DW.Buffer_bufferLength = 1024;
    FFT4dSpace_1_DW.Buffer_outBufPtrIdx = 0;

    /* End of InitializeConditions for Buffer: '<Root>/Buffer' */
  }
}

/* Model terminate function */
void FFT4dSpace_1_terminate(void)
{
  /* (no terminate code required) */
}
