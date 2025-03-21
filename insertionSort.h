void insertionSortSimple(int *arr, int size) {
  for (int i = 1; i <= size; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j-1]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }

}

void insertionSortAdvanced(int *arr, int size) {
  for (int i = size-1; i > 0; i--) {
    if (arr[i] < arr[i-1]) {
      exchange(arr + i, arr + i -1);
    }
  }
  for (int i = 2; i < size; i++) {
    int j = i;
    int tmp = arr[j];
    while (tmp < arr[j-1]) {
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = tmp;
  }
}