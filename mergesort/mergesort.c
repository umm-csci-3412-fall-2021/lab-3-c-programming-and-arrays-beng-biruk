#include "mergesort.h"

#include <math.h>

int* subarray(int start, int end, int* input){
  // Given an array and the indices of the start and end points,
  // return an array containing the contents of the argument
  // between those indices.
  int size = (end - start) + 1; // +1 because the indices are both inclusive
  int* output = (int*) malloc(size*sizeof(int));

  return output;
}

void mergesort(int size, int* to_sort) {
  if (size <= 1) {
    return; // A single element or empty array is trivially/vacuously sorted
  }
  // This obviously doesn't actually do any *sorting*, so there's
  // certainly work still to be done.
  int midpoint = floor((size-1)/2);
  return;
}
