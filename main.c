#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "shellSort.h"
#include "quickSort.h"


int main() {
  srand(time(0));
  // int size = 6 400 000;
  int size = 5;
  int *arr = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    arr[i] = rand();
  }
  printArray(arr, size);
  printf("\n");
  quickSort(arr, size);
  printArray(arr, size);
  free(arr);
  return 0;
}