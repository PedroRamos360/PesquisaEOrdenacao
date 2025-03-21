void insertionSortH(int *arr, int size, int h) {
  for (int i = h; i < size; i++) {
    int tmp = arr[i];
    int j = i;
    while (j >= h && arr[j-h] > tmp) {
      arr[j] = arr[j-h];
      j -= h;
    }
    arr[j] = tmp;
  } 
}

void shellSort(int *arr, int size) {
  for (int h = size/2; h > 0; h /= 2) {
    insertionSortH(arr, size, h);
  } 
}

