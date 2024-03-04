//
// Third Party Support License -- for use only to support products
// interfaced to MathWorks software under terms specified in your
// company's restricted use license agreement.
//
// count_and_invert_booleans_io.cpp
//
// Code generation for function 'count_and_invert_booleans_io'
//

// Include files
#include "count_and_invert_booleans_io.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
//
// function [count, inverseArray] = count_and_invert_booleans_io(boolArray,
// inverseArray)
double
count_and_invert_booleans_io(const coder::array<boolean_T, 2U> &boolArray,
                             coder::array<double, 2U> &inverseArray)
{
  double count;
  int i;
  //  Ensure the function supports code generation for dynamic array sizes
  // 'count_and_invert_booleans_io:3' assert(isa(boolArray, 'logical'));
  // 'count_and_invert_booleans_io:4' assert(isa(inverseArray, 'double'));
  //  Updated to expect double (LREAL equivalent in PLC)
  // 'count_and_invert_booleans_io:5' coder.varsize('boolArray', [1, Inf], [0,
  // 1]);
  //  Specify that boolArray is a row vector with dynamic size
  // 'count_and_invert_booleans_io:6' coder.varsize('inverseArray', [1, Inf],
  // [0, 1]);
  //  Ensure inverseArray is also dynamic
  //  Initialize count to zero
  // 'count_and_invert_booleans_io:9' count = 0;
  count = 0.0;
  //  Count all true values in the input array
  // 'count_and_invert_booleans_io:12' for i = 1:length(boolArray)
  i = boolArray.size(1);
  for (int b_i{0}; b_i < i; b_i++) {
    // 'count_and_invert_booleans_io:13' if boolArray(i)
    if (boolArray[b_i]) {
      // 'count_and_invert_booleans_io:14' count = count + 1;
      count++;
    }
  }
  //  Determine the minimum size to use for the operation based on input arrays
  // 'count_and_invert_booleans_io:19' minSize = min(length(boolArray),
  // length(inverseArray));
  //  Loop through each element in the arrays up to minSize
  // 'count_and_invert_booleans_io:22' for i = 1:minSize
  i = static_cast<int>(std::fmin(static_cast<double>(boolArray.size(1)),
                                 static_cast<double>(inverseArray.size(1))));
  for (int b_i{0}; b_i < i; b_i++) {
    //  Invert the state from boolArray to inverseArray
    //  Represent true as 1.0 and false as 0.0 in the inverseArray
    // 'count_and_invert_booleans_io:25' inverseArray(i) =
    // double(~boolArray(i));
    inverseArray[b_i] = !boolArray[b_i];
  }
  return count;
}

// End of code generation (count_and_invert_booleans_io.cpp)
