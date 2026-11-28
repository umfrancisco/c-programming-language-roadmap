#include <stdio.h>
#include "../include/basic_io_demo.h"

void line() {
  printf("----------\n");
}

int main() {
  reading_files(); // example1
  line();
  basic_file_read("hello.txt");
  return 0;
}