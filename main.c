#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"


int main() {
  srand(time(0));
  int size = 100000;
  int *arr = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    arr[i] = rand();
  }
  // printArray(arr, size);
  printf("\n");
  printf("Comecando...\n");
  insertionSortSimple(arr, size);
  printf("Terminou...");
  // printArray(arr, size);
  free(arr);
  return 0;
}