#include <stdio.h>
#include <string.h>

void string_variables() {
  char *s = "hello world"; // a pointer to the first character in that string
  char str[] = "hello world"; // using array notation
  int size_s = sizeof s; // returns the size of the pointer, (char *) is 8 bytes
  int size_str = sizeof str; // works and prints 12

  printf("value=%s\n", s);
  printf("addr=%p\n", (void *)&s);
  printf("size=%d\n", size_s);

  printf("----\n");

  printf("value=%s\n", str);
  printf("addr=%p\n", (void *)&str);
  printf("size=%d\n", size_str);

  printf("----\n");
}

void greet(char *name) {
  printf("hello, %s\n", name);
}

void editing_strings() {
  char *s = "hello world";
  char str[] = "hello world";
  // s[0] = 'H'; // cannot edit, returns 'Segmentation fault (core dumped)'
  printf("%s\n", s);
  str[0] = 'H';
  printf("%s\n", str);
}

size_t get_str_length(char *str) {
  return strlen(str);
}

void print_str_length() {
  size_t size_1 = get_str_length("hello");
  printf("size of = %zu\n", size_1);
}

int main() {
  string_variables();
  greet("john doe");
  editing_strings();
  print_str_length();
  return 0;
}