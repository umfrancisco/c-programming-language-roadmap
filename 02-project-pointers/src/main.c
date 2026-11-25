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

void null_pointer() {
  int *p = NULL;
  printf("%p\n", (void *)p);
}

void valid_pointer_declaration() {
  int a, *b; // a int, b pointer to int
  int *c, d; // c pointer to int, d int
  int* e, f; // e pointer to int, f int

  a = 10;
  b = &a;

  d = 20;
  c = &d;

  f = 30;
  e = &f;

  printf("val=%d, addr=%p\n", a, (void *)b);
  printf("val=%d, addr=%p\n", d, (void *)c);
  printf("val=%d, addr=%p\n", f, (void *)e);
}

void summary_on_pointers() {
  printf("\n** SUMMARY **\n");
  int a = 100; 
  int *p = &a;

  printf("a  = %d\n", a); // print value
  printf("&a = %p\n", (void *)&a); // print address
  printf("*p = %d\n", *p); // print value
  printf("p  = %p\n", (void *)p); // print address
}

int main() {
  about_mem_size();
  print_mem_addr();
  pointer_types();
  passing_pointers_args();
  null_pointer();
  valid_pointer_declaration();
  summary_on_pointers();
  return 0;
}