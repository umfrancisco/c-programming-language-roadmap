#include <stdio.h>
#include "../include/basic_struct_demo.h"

void line() {
  printf("----------\n");
}

void struct_initializers() {
  struct car saturn = {"Saturn SL/2", 16000.99, 175};
  printf("Name:           %s\n", saturn.name);
  printf("Price (USD):    %.2f\n", saturn.price);
  printf("Top Speed (km): %d\n", saturn.speed);
  line();

  struct car jupiter = {.speed=180 , .name="Jupiter LM/1"};
  printf("Name:           %s\n", jupiter.name);
  printf("Price (USD):    %.2f\n", jupiter.price);
  printf("Top Speed (km): %d\n", jupiter.speed);
  line();
}

void set_price(struct car *c, double new_price) {
  // (*c).price = new_price; // works, but not-idiomatic
  c->price = new_price;
}

void passing_strucs_as_args() {
  struct car jupiter = {.speed=180 , .name="Jupiter LM/1"};
  set_price(&jupiter, 16000.00);

  printf("Name:           %s\n", jupiter.name);
  printf("Price (USD):    %.2f\n", jupiter.price);
  printf("Top Speed (km): %d\n", jupiter.speed);
  line();
}

struct car copy_structs(struct car *c) {
  struct car b = *c;
  return b;
}

void print_copied_struct() {
  struct car saturn = {"Saturn SL/2", 16000.99, 175};
  struct car copy_car = copy_structs(&saturn);

  printf("# Copy Car -> Saturn\n");
  printf("Name:           %s\n", copy_car.name);
  printf("Price (USD):    %.2f\n", copy_car.price);
  printf("Top Speed (km): %d\n", copy_car.speed);
  line();
}