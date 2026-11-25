#include <stdio.h>
#include "../include/temp_convert.h"
#include "../include/hello_world.h"

void foo(int option) {
  if (option == 1) {
    print_temps(20);
  }
  if (option == 2) {
    char* text = greet();
    get_string_info(text);
  }
  if (option != 1 && option != 2) {
    printf("Unknown option\n");
  }
}

int main() {
  foo(2);
  return 0;
}