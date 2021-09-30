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
  mergesortRange(0, size-1, to_sort);
}

void mergesortRange(int start, int end, int* to_sort) {
  if (end - start <= 1) {
    return; // A single element or empty array is trivially/vacuously sorted
  }
  // This obviously doesn't actually do any *sorting*, so there's
  // certainly work still to be done.
  int midpoint = floor(((end + start)/2);
  //int* leftslice = subarray(0, midpoint, to_sort);
  //int* rightslice = subarray(midpoint+1, size-1, to_sort);
  //int leftsize = midpoint + 1;
  //int rightsize = size - leftsize; //to account for mergesorting an odd number of elements

  int* slicesizes = (int*) malloc(2 * sizeof(int));
  int** slicearray = (int**) malloc(sizeof(leftslice);
  to_sort = array_merge
  return;
}
