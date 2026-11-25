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
}

int main() {
  basic_arrays();
  return 0;
}