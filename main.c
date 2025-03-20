#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"


int main() {
  srand(time(0));
  int size = 200000;
  int *arr = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    arr[i] = rand();
  }
  // printArray(arr, size);
  printf("\n");
  printf("Comecando...\n");
  insertionSortAdvanced(arr, size);
  printf("Terminou...\n");
  // printArray(arr, size);
  free(arr);
  return 0;
}