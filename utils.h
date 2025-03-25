void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", arr[i]);
      break;
    }
    printf("%d, ", arr[i]);
  }
  printf("\n");
}

void exchange(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}