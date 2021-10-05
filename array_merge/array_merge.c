#include "array_merge.h"

int find_least(int num_arrays, int* sizes, int* positions, int** values){

}

int* array_merge(int num_arrays, int* sizes, int** values) {

  int* array_positions = (int*)calloc(num_arrays, sizeof(int)); //Sets contents to 0
  int total_size = 0;
  for(int i = 0; i < num_arrays; i++){
    total_size += sizes[i];
  }

  int* output = calloc(total_size, int);
  for(int i = 0; i < total_size; i++){
    output[i] = find_least(num_arrays, sizes, array_positions, values); 
    //find_least updates array_positions as a side effect
  }

  free(array_positions);
  return output;
}
