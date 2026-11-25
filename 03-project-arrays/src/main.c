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
}

int main() {
  basic_arrays();
  array_initializer();
  return 0;
}