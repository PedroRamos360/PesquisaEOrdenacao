int* partition(int *arr, int size, int pivot);

void quickSort(int *arr, int size) {
  int middle = rand()%size;
  int pivot = arr[middle];
  int *sorted = partition(arr, size, pivot);
  for (int i = 0; i < size; i++) {
    arr[i] = sorted[i];
  }
  free(sorted);
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
    if (arr[i] <= pivot) {
      left[sizeLeft] = arr[i];
      sizeLeft++;
    } else {
      right[sizeRight] = arr[i];
      sizeRight++;
    }
  }
  if (sizeLeft > 0) {
    int middle = rand() %sizeLeft;
    left = partition(left, sizeLeft, left[middle]);
  }
  if (sizeRight > 0) {
    int middle = rand() %sizeRight;
    right = partition(right, sizeRight, right[middle]);
  }
  int *end = (int*)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    if (i < sizeLeft) {
      end[i] = left[i];
    } else {
      end[i] = right[i-sizeLeft];
    }
  }
  free(left);
  free(right);
  return end;
}