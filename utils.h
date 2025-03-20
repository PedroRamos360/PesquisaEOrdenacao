void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", arr[i]);
      return;
    }
    printf("%d, ", arr[i]);
  }
}