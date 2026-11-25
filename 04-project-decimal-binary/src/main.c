#include <stdio.h>

#define BASE 2

void to_binary(int num) {
  int bin[32];
  int i = 0;
  int bin_size;
  while (num > 0) {
    bin[i] = num % BASE;
    num = num / BASE;
    i++;
  }
  bin_size = i;
  for (int i = bin_size - 1; i >= 0; i--) {
    printf("%d ", bin[i]);
  }
  printf("\n");
}

int main() {
  to_binary(10);
  return 0;
}