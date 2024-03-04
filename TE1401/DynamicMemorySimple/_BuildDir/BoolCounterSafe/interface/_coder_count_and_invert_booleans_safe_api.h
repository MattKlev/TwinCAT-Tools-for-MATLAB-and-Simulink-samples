//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// _coder_count_and_invert_booleans_safe_api.h
//
// Code generation for function 'count_and_invert_booleans_safe'
//

#ifndef _CODER_COUNT_AND_INVERT_BOOLEANS_SAFE_API_H
#define _CODER_COUNT_AND_INVERT_BOOLEANS_SAFE_API_H

// Include files
#include "coder_array_mex.h"
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void count_and_invert_booleans_safe(coder::array<boolean_T, 2U> *boolArray,
                                    real_T maxOutputSize, real_T *count,
                                    coder::array<boolean_T, 2U> *inverseArray);

void count_and_invert_booleans_safe_api(const mxArray *const prhs[2],
                                        int32_T nlhs, const mxArray *plhs[2]);

void count_and_invert_booleans_safe_atexit();

void count_and_invert_booleans_safe_initialize();

void count_and_invert_booleans_safe_terminate();

void count_and_invert_booleans_safe_xil_shutdown();

void count_and_invert_booleans_safe_xil_terminate();

#endif
// End of code generation (_coder_count_and_invert_booleans_safe_api.h)
