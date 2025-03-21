int* partition(int *arr, int size, int pivot);

void quickSort(int *arr, int size) {
  int pivot = arr[0];
  arr = partition(arr, size, pivot);
}

int* partition(int *arr, int size, int pivot) {
  if (size == 1) {
    return arr;
  }
  int *left = (int*)malloc(sizeof(int) * size);
  int *right = (int*)malloc(sizeof(int) * size);
  int sizeLeft = 0;
  int sizeRight = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] >= pivot) {
      left[sizeLeft] = arr[i];
      sizeLeft++;
    } else {
      right[sizeRight] = arr[i];
      sizeRight++;
    }
  }
  int *leftOrderded = partition(left, sizeLeft, left[0]);
  int *rightOrdered = partition(right, sizeRight, right[0]);
  int *end = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    if (i < sizeLeft) {
      end[i] = left[i];
    } else {
      end[i] = right[i];
    }
  }
  return end;
}