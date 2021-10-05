#include "mergesort.h"

#include <math.h>

int* subarray(int start, int end, int* input){
  // Given an array and the indices of the start and end points,
  // return an array containing the contents of the argument array
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
  int midpoint = floor(((end + start)/2));
  //int* leftslice = subarray(0, midpoint, to_sort);
  //int* rightslice = subarray(midpoint+1, size-1, to_sort);
  //int leftsize = midpoint + 1;
  //int rightsize = size - leftsize; //to account for mergesorting an odd number of elements
  
  //trivially recurse
  mergesortRange(start, midpoint, to_sort);
  mergesortRange(midpoint, end, to_sort);

  int* slicesizes = (int*) malloc(2 * sizeof(int));
  //the size of the left and right slices respectively
  slicesizes[0]=midpoint-start;
  slicesizes[1]=end-midpoint;

  int* leftslice = subarray(start, midpoint, to_sort);
  int* rightslice = subarray(midpoint, end, to_sort);
  int** slicearray = (int**) malloc(sizeof(leftslice)+sizeof(rightslice));
  slicearray[0]=leftslice;
  slicearray[1]=rightslice;

  int* 
  to_sort = array_merge(2, slicesizes, slicearray);
  
  free(leftslice);
  free(rightslice);
  free(slicearray);
  free(slicesizes);
  return;
}
