#include <stdio.h>

void basic_arrays() {
  int arr[4];
  
  arr[0] = 1;
  arr[1] = 3;
  arr[2] = 5;
  arr[3] = 7;

  for (int i = 0; i < 4; i++) {
    printf("value=%d, addr=%p\n", arr[i], (void *)&arr[i]);
  }

  unsigned long total_size = sizeof arr;
  printf("total size of arr (int) = %zu bytes\n", total_size);
  int actual_length = sizeof arr / sizeof(arr[0]);
  printf("actual length of arr (int) = %d elements\n", actual_length);

  float new_arr[16];

  unsigned long s = sizeof new_arr;
  printf("total size of new_arr (float) = %zu bytes\n", s);
  int len = sizeof new_arr / sizeof(new_arr[0]);
  printf("actual length of new_arr (float) = %d elements\n", len);
}

int main() {
  basic_arrays();
  return 0;
}