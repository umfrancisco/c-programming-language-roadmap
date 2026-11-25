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

void pointer_types() {
  int i, *p; // a value and its pointer
  i = 20;
  p = &i;
  printf("value of i = %d\n", i);
  printf("pointer = %p, dereference value = %d\n", (void *)p, *p);
}

void increment_existing_int(int *p, int amount) {
  *p += amount;
}

void increment_existing_float(float *p, int amount) {
  *p += (float) amount;
}

void passing_pointers_args() {
  int a = 100;
  int *z = &a;
  printf("int before: %d\n", a);
  increment_existing_int(z, 1);
  printf("int after: %d\n", a);

  float b = 200;
  float *y = &b;
  printf("float before: %.2f\n", b);
  increment_existing_float(y, 23);
  printf("float after: %.2f\n", b);
}

int main() {
  about_mem_size();
  print_mem_addr();
  pointer_types();
  passing_pointers_args();
  return 0;
}