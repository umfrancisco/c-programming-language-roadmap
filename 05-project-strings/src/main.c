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

void print_str_length() {
  printf("# using strlen()\n");
  size_t size_1 = strlen("hello");
  size_t size_2 = strlen("world");
  printf("size of = %zu\n", size_1);
  printf("size of = %zu\n", size_2);
}

int my_strlen(char *str) {
  int count = 0;
  while (str[count] != '\0') {
    count++;
  }
  return count;
}

void couting_strs() {
  printf("# using my strlen function\n");
  int size_1 = my_strlen("hello world");
  int size_2 = my_strlen("hello");
  printf("size_1 = %d\n", size_1);
  printf("size_2 = %d\n", size_2);
}

char* my_str_cpy(char *str) {
  int len = my_strlen(str);
  char copy[len + 1]; // extra space for null terminator
  for (int i = 0; i < len; i++) {
    copy[i] = str[i];
  }
  copy[len] = '\0'; // add null terminator at the end
  char *start = &copy[0]; // how to return a string in a function
  return start;
}

void copy_strings() {
  printf("# using copy function and just pointer to char[]\n");
  char str1[] = "hello world";
  char str2[] = "world";
  char str3[] = "c/c++";
  size_t str3_len = strlen(str3);
  
  char *copy1 = my_str_cpy(str1);
  char *copy2 = str2;
  char copy3[str3_len];
  strcpy(copy3, str3);
  
  copy1[0] = 'j';
  copy2[0] = 'e';
  
  printf("str1 = %s, copy1 = %s\n", str1, copy1);
  printf("str2 = %s, copy2 = %s\n", str2, copy2);
  printf("str3 = %s, copy3 = %s\n", str3, copy3);
}

int main() {
  string_variables();
  greet("john doe");
  editing_strings();
  print_str_length();
  couting_strs();
  copy_strings();
  return 0;
}