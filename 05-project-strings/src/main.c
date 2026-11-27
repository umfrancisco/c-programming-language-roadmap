#include <stdio.h>

void string_variables() {
  char *s = "hello world\n"; // a pointer to the first character in that string
  char str[] = "hello world\n"; // using array notation
  int size_s = sizeof s; // prints 8
  int size_str = (sizeof str) - 2; // works and prints 11

  printf("value=%s", s);
  printf("addr=%p\n", (void *)&s);
  printf("size=%d\n", size_s);

  printf("----\n");

  printf("value=%s", str);
  printf("addr=%p\n", (void *)&str);
  printf("size=%d\n", size_str);
}

int main() {
  string_variables();
  return 0;
}