//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// count_and_invert_booleans.cpp
//
// Code generation for function 'count_and_invert_booleans'
//

// Include files
#include "count_and_invert_booleans.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
//
// function [count, inverseArray] = count_and_invert_booleans(boolArray,
// inverseArray)
double count_and_invert_booleans(const coder::array<boolean_T, 2U> &boolArray,
                                 coder::array<double, 2U> &inverseArray)
{
  coder::array<double, 1U> flatInverseArray;
  double count;
  int b_i1;
  int i;
  int i1;
  int i2;
  //  Ensure the function supports code generation for dynamic array sizes
  // 'count_and_invert_booleans:3' assert(isa(boolArray, 'logical'));
  // 'count_and_invert_booleans:4' assert(isa(inverseArray, 'double'));
  //  Expecting double (LREAL equivalent in PLC)
  //  Initialize count to zero
  // 'count_and_invert_booleans:7' count = 0;
  count = 0.0;
  //  Count all true values in the input array
  // 'count_and_invert_booleans:10' [s1,s2] = size(boolArray);
  // 'count_and_invert_booleans:11' for i1 = 1:s1
  i = boolArray.size(0);
  for (i1 = 0; i1 < i; i1++) {
    // 'count_and_invert_booleans:12' for i2 = 1:s2
    b_i1 = boolArray.size(1);
    for (i2 = 0; i2 < b_i1; i2++) {
      // 'count_and_invert_booleans:13' if boolArray(i1,i2)
      if (boolArray[i1 + boolArray.size(0) * i2]) {
        // 'count_and_invert_booleans:14' count = count + 1;
        count++;
      }
    }
  }
  //  Calculate the total number of elements to process based on the smaller
  //  array
  // 'count_and_invert_booleans:20' numElementsToProcess = min(numel(boolArray),
  // numel(inverseArray));
  //  Flatten arrays for linear indexing (if necessary)
  // 'count_and_invert_booleans:23' flatBoolArray = boolArray(:);
  // 'count_and_invert_booleans:24' flatInverseArray = inverseArray(:);
  i1 = inverseArray.size(0) * inverseArray.size(1);
  flatInverseArray.set_size(i1);
  for (i = 0; i < i1; i++) {
    flatInverseArray[i] = inverseArray[i];
  }
  //  Loop through each element in both arrays up to numElementsToProcess
  // 'count_and_invert_booleans:27' for idx = 1:numElementsToProcess
  i = boolArray.size(0) * boolArray.size(1);
  i = static_cast<int>(
      std::fmin(static_cast<double>(i), static_cast<double>(i1)));
  for (i1 = 0; i1 < i; i1++) {
    // 'count_and_invert_booleans:28' if flatBoolArray(idx)
    if (boolArray[i1]) {
      // 'count_and_invert_booleans:29' flatInverseArray(idx) = 0.0;
      flatInverseArray[i1] = 0.0;
      //  Representing false as 0.0
    } else {
      // 'count_and_invert_booleans:30' else
      // 'count_and_invert_booleans:31' flatInverseArray(idx) = 1.0;
      flatInverseArray[i1] = 1.0;
      //  Representing true as 1.0
    }
  }
  //  Reshape inverseArray back to its original dimensions (if it was flattened)
  // 'count_and_invert_booleans:36' inverseArray(:) = flatInverseArray;
  i1 = inverseArray.size(0);
  i2 = inverseArray.size(1);
  for (i = 0; i < i2; i++) {
    for (b_i1 = 0; b_i1 < i1; b_i1++) {
      inverseArray[b_i1 + inverseArray.size(0) * i] =
          flatInverseArray[b_i1 + i1 * i];
    }
  }
  return count;
}

// End of code generation (count_and_invert_booleans.cpp)
