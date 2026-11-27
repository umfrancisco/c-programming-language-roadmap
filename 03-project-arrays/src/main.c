#include <stdio.h>

#define DEFAULT_SIZE 16

void basic_arrays() {
  int arr[16];
  
  arr[0] = 1;
  arr[1] = 3;
  arr[2] = 5;
  arr[3] = 7;

  for (int i = 0; i < 4; i++) {
    printf("value=%d, addr=%p\n", arr[i], (void *)&arr[i]);
  }

  unsigned long total_size = sizeof arr;
  printf("total size of arr (int) = %zu bytes\n", total_size);
  int actual_length = sizeof arr / sizeof arr[0];
  printf("actual length of arr (int) = %d elements\n", actual_length);

  float new_arr[16];

  unsigned long s = sizeof new_arr;
  printf("total size of new_arr (float) = %zu bytes\n", s);
  int len = sizeof new_arr / sizeof new_arr[0];
  printf("actual length of new_arr (float) = %d elements\n", len);

  double new_new_arr[16];
  unsigned long s1 = sizeof new_new_arr;
  printf("total size of new_new_arr (double) = %zu bytes\n", s1);
  int l1 = sizeof new_new_arr / sizeof new_new_arr[0];
  printf("actual length of new_new_arr (double) = %d elements\n", l1);
}

void array_initializer() {
  int arr[DEFAULT_SIZE] = {1, [4]=2, 3, 5, 7, 9};
  int size = sizeof arr / sizeof arr[0];

  printf("size of arr = %d\n", size);
  
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      printf("_ ");
      continue;
    }
    printf("%d ", arr[i]);
  }
  printf("\n");

  // int a[3] = {22, 37, 3490};
  // ... same as ...
  // int a[] = {22, 37, 3490};
}

int* passing_array_as_args(int *arr, int len) {
  printf("# original arr\n");
  for (int i = 0; i < len; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
    arr[i] *= 2;
  }
  return arr;
}

void arrays_and_pointers() {
  int arr[] = {11, 22, 33, 44, 55};
  int *start;
  int n = sizeof arr / sizeof arr[0];

  start = &arr[0];
  printf("first element = %d\n", *start);

  int *new_arr = passing_array_as_args(start, n); // pointer to first element, and it's length

  printf("# original arr times 2\n");
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = %d\n", i, new_arr[i]);
  }
}

void reversing_arrays(int *arr, int len) {
  for (int i = 0; i < len / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[len - 1 - i];
    arr[len - 1 - i] = temp;
  }
}

void reverse_and_print() {
  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof arr / sizeof arr[0];
  int *start = &arr[0];

  printf("# reversing arrays\n");
  reversing_arrays(start, len);

  for (int i = 0; i < len; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}

int main() {
  basic_arrays();
  array_initializer();
  arrays_and_pointers();
  reverse_and_print();
  return 0;
}