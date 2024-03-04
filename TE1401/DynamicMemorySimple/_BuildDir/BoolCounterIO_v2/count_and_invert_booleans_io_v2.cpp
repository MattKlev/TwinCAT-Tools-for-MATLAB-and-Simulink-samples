//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// count_and_invert_booleans_io_v2.cpp
//
// Code generation for function 'count_and_invert_booleans_io_v2'
//

// Include files
#include "count_and_invert_booleans_io_v2.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
//
// function [count, inverseArray] = count_and_invert_booleans_io_v2(boolArray,
// inverseArray)
double
count_and_invert_booleans_io_v2(const coder::array<boolean_T, 2U> &boolArray,
                                coder::array<double, 2U> &inverseArray)
{
  coder::array<double, 1U> flatInverseArray;
  double count;
  int b_i;
  int i;
  //  Ensure the function supports code generation for dynamic array sizes
  // 'count_and_invert_booleans_io_v2:3' assert(isa(boolArray, 'logical'));
  // 'count_and_invert_booleans_io_v2:4' assert(isa(inverseArray, 'double'));
  //  Expecting double (LREAL equivalent in PLC)
  //  Initialize count to zero
  // 'count_and_invert_booleans_io_v2:7' count = 0;
  count = 0.0;
  //  Count all true values in the input array
  // 'count_and_invert_booleans_io_v2:10' for i = 1:length(boolArray)
  i = boolArray.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    // 'count_and_invert_booleans_io_v2:11' if boolArray(i)
    if (boolArray[b_i]) {
      // 'count_and_invert_booleans_io_v2:12' count = count + 1;
      count++;
    }
  }
  //  Calculate the total number of elements to process based on the smaller
  //  array
  // 'count_and_invert_booleans_io_v2:17' numElementsToProcess =
  // min(numel(boolArray), numel(inverseArray));
  //  Flatten arrays for linear indexing (if necessary)
  // 'count_and_invert_booleans_io_v2:20' flatBoolArray = boolArray(:);
  // 'count_and_invert_booleans_io_v2:21' flatInverseArray = inverseArray(:);
  b_i = inverseArray.size(1);
  flatInverseArray.set_size(b_i);
  for (i = 0; i < b_i; i++) {
    flatInverseArray[i] = inverseArray[i];
  }
  //  Loop through each element in both arrays up to numElementsToProcess
  // 'count_and_invert_booleans_io_v2:24' for idx = 1:numElementsToProcess
  i = static_cast<int>(std::fmin(static_cast<double>(boolArray.size(1)),
                                 static_cast<double>(inverseArray.size(1))));
  for (b_i = 0; b_i < i; b_i++) {
    // 'count_and_invert_booleans_io_v2:25' if flatBoolArray(idx)
    if (boolArray[b_i]) {
      // 'count_and_invert_booleans_io_v2:26' flatInverseArray(idx) = 0.0;
      flatInverseArray[b_i] = 0.0;
      //  Representing false as 0.0
    } else {
      // 'count_and_invert_booleans_io_v2:27' else
      // 'count_and_invert_booleans_io_v2:28' flatInverseArray(idx) = 1.0;
      flatInverseArray[b_i] = 1.0;
      //  Representing true as 1.0
    }
  }
  //  Reshape inverseArray back to its original dimensions (if it was flattened)
  // 'count_and_invert_booleans_io_v2:33' inverseArray(:) = flatInverseArray;
  b_i = inverseArray.size(1);
  inverseArray.set_size(1, inverseArray.size(1));
  for (i = 0; i < b_i; i++) {
    inverseArray[i] = flatInverseArray[i];
  }
  return count;
}

// End of code generation (count_and_invert_booleans_io_v2.cpp)
