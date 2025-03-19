#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void selectionSort(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    int min = i;
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }   
    }
    int tmp = arr[i];
    arr[i] = arr[min];
    arr[min] = tmp;
  } 
}

void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", arr[i]);
      return;
    }
    printf("%d, ", arr[i]);
  }
}

int main() {
  srand(time(0));
  int size = 5;
  int arr[] = {rand(), rand(), rand(), rand(), rand()};
  printArray(arr, size);
  printf("\n");
  selectionSort(arr, size);
  printArray(arr, size);
  return 0;
}