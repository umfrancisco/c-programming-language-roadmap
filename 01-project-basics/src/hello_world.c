#include <stdio.h>
#include <string.h>

char* greet() {
  return "Hello from C Programming Language\n";
}

void get_string_info(char* text) {
  printf("Text = %s\n", text);

  unsigned long int size = sizeof text;
  printf("Size of text = %zu\n", size);

  int text_length = strlen(text);
  printf("Length of text = %d\n", text_length);
  printf("---------------\n");
}