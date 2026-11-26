#include <stdio.h>

#define BASE 2

void print_arr(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}

void to_binary(int num) {
  printf("decimal = %d, binary = ", num);
  if (num == 0) printf("0");
  
  int bin[32];
  int count = 0;
  
  while (num > 0) {
    bin[count] = num % BASE;
    num = num / BASE;
    count++;
  }

  int length = count;
  int *start = &bin[0];
  print_arr(start, length);
}

int main() {
  to_binary(12);
  return 0;
}