#include <stdio.h>

void about_mem_size() {
  // %zu is the format specifier for type size_t
  int a = 10;
  printf("an int uses %zu bytes of memory\n", sizeof(int));
  printf("an int with value %d uses %zu bytes of memory\n", a, sizeof a);
}

void print_mem_addr() {
  int i = 10;
  printf("the value of i is %d\n", i);
  // contains a cast where we coerce the type of the expression &i to be type void*
  printf("and its address is %p\n", (void *)&i);
}

int main() {
  about_mem_size();
  print_mem_addr();
  return 0;
}