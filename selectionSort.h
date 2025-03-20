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
