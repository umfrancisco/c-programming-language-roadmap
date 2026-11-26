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
  int length = 0;
  
  while (num > 0) {
    bin[length] = num % BASE;
    num = num / BASE;
    length++;
  }

  int copy[length];
  for (int i = 0; i < length; i++) {
    copy[i] = bin[length - 1 - i];
  }

  int *start = &copy[0];
  print_arr(start, length);
}

int main() {
  for (int i = 0; i < 6; i++) {
    to_binary(i);
  }
  return 0;
}