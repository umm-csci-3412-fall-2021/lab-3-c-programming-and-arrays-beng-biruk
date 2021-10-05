#include "mergesort.h"

#include <math.h>

void mergeRanges(int start, int mid, int end, int* values){
  int range_size = (end - start) + 1; //+1 to account for zero indexing; both indices are inclusive
  int* merged_array = (int*) calloc(range_size, sizeof(int));
  int destination_pos = 0;
  int left_pos = start;
  int right_pos = mid;

  while(left_pos < mid && right_pos < end){
    if(values[left_pos] < values[right_pos]){
      merged_array[destination_pos++] = values[left_pos++];
    } else {
      merged_array[destination_pos++] = values[right_pos++];
    }
  }

  while(left_pos < mid){
    merged_array[destination_pos++] = values[left_pos++];
  }

  while(right_pos < end){
    merged_array[destination_pos++] = values[right_pos++];
  }

  for(int i = 0; i < range_size; i++){
    values[start + i] = merged_array[i];
  }

  free(merged_array);
}
void mergesortRange(int start, int end, int* to_sort) {
  if (end - start <= 1) {
    return; // A single element or empty array is trivially/vacuously sorted
  }
  int midpoint = floor(((end + start)/2));
  
  //trivially recurse
  mergesortRange(start, midpoint, to_sort);
  mergesortRange(midpoint, end, to_sort);

  mergeRanges(start, midpoint, end, to_sort);
  return;
}


void mergesort(int size, int* to_sort) {
  mergesortRange(0, size-1, to_sort);
}
