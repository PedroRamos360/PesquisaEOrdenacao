int partition(int *arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      exchange(arr+j, arr+i);
    } 
  }
  exchange(arr+i+1, arr+high);

  return i+1;
}

void quickSort(int *arr, int low, int high) {
  while (low < high) {
    int pivotIndex = partition(arr, low, high);

    if (pivotIndex - low < high - pivotIndex) {
      quickSort(arr, low, pivotIndex - 1);
      low = pivotIndex + 1; 
    } else {
      quickSort(arr, pivotIndex + 1, high);
      high = pivotIndex - 1;
    }
  } 
}
