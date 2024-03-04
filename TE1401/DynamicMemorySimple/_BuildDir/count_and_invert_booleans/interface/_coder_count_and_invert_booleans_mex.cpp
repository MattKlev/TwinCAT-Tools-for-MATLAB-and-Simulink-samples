//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// _coder_count_and_invert_booleans_mex.cpp
//
// Code generation for function 'count_and_invert_booleans'
//

// Include files
#include "_coder_count_and_invert_booleans_mex.h"
#include "_coder_count_and_invert_booleans_api.h"

// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&count_and_invert_booleans_atexit);
  // Module initialization.
  count_and_invert_booleans_initialize();
  // Dispatch the entry-point.
  unsafe_count_and_invert_booleans_mexFunction(nlhs, plhs, nrhs, prhs);
  // Module termination.
  count_and_invert_booleans_terminate();
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           nullptr, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_count_and_invert_booleans_mexFunction(int32_T nlhs,
                                                  mxArray *plhs[2],
                                                  int32_T nrhs,
                                                  const mxArray *prhs[2])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *b_prhs[2];
  const mxArray *outputs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        25, "count_and_invert_booleans");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 25,
                        "count_and_invert_booleans");
  }
  // Call the function.
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  count_and_invert_booleans_api(b_prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_count_and_invert_booleans_mex.cpp)
