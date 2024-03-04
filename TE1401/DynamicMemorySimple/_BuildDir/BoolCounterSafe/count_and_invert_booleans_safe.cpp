//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// count_and_invert_booleans_safe.cpp
//
// Code generation for function 'count_and_invert_booleans_safe'
//

// Include files
#include "count_and_invert_booleans_safe.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
//
// function [count, inverseArray] = count_and_invert_booleans_safe(boolArray,
// maxOutputSize)
void count_and_invert_booleans_safe(
    const coder::array<boolean_T, 2U> &boolArray, double maxOutputSize,
    double *count, coder::array<boolean_T, 2U> &inverseArray)
{
  int i;
  //  Ensure the function supports code generation for dynamic array sizes
  // 'count_and_invert_booleans_safe:3' assert(isa(boolArray, 'logical'));
  // 'count_and_invert_booleans_safe:4' coder.varsize('boolArray', [1, Inf], [0,
  // 1]);
  //  Specify that boolArray is a row vector with dynamic size
  // 'count_and_invert_booleans_safe:5' coder.varsize('inverseArray', [1, Inf],
  // [0, 1]);
  //  Specify that inverseArray is also dynamic
  //  Initialize count to zero
  // 'count_and_invert_booleans_safe:8' count = 0;
  *count = 0.0;
  //  Count all true values in the input array, independent of maxOutputSize
  // 'count_and_invert_booleans_safe:11' for i = 1:length(boolArray)
  i = boolArray.size(1);
  for (int b_i{0}; b_i < i; b_i++) {
    // 'count_and_invert_booleans_safe:12' if boolArray(i)
    if (boolArray[b_i]) {
      // 'count_and_invert_booleans_safe:13' count = count + 1;
      (*count)++;
    }
  }
  //  Determine the actual size to use for the output array
  // 'count_and_invert_booleans_safe:18' actualSize = min(length(boolArray),
  // maxOutputSize);
  //  Initialize the output array to the determined size
  // 'count_and_invert_booleans_safe:21' inverseArray = false(1, actualSize);
  i = static_cast<int>(
      std::fmin(static_cast<double>(boolArray.size(1)), maxOutputSize));
  inverseArray.set_size(
      1, static_cast<int>(
             std::fmin(static_cast<double>(boolArray.size(1)), maxOutputSize)));
  //  Loop through each element in the output array up to the actualSize
  // 'count_and_invert_booleans_safe:24' for i = 1:actualSize
  for (int b_i{0}; b_i < i; b_i++) {
    //  Invert the state for the size of the inverseArray
    // 'count_and_invert_booleans_safe:26' inverseArray(i) = ~boolArray(i);
    inverseArray[b_i] = !boolArray[b_i];
  }
}

// End of code generation (count_and_invert_booleans_safe.cpp)
