void heapify(int *arr, int size, int i) {
  int max = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < size && arr[left] > arr[max]) {
    max = left;
  }

  if (right < size && arr[right] > arr[max]) {
    max = right;
  }

  if (max != i) {
    exchange(&arr[i], &arr[max]);
    heapify(arr, size, max);
  }
}

void heapSort(int *arr, int size) {
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(arr, size, i);
  } 

  for (int i = size - 1; i > 0; i--) {
    exchange(&arr[0], &arr[i]);
    heapify(arr, i, 0);
  }
}