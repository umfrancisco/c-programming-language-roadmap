#ifndef BASIC_STRUCT_DEMO_H
#define BASIC_STRUCT_DEMO_H

struct car {
  char *name;
  double price;
  int speed;
};

void struct_initializers();
void set_price(struct car *c, double new_price);
void passing_strucs_as_args();
struct car copy_structs(struct car *c);
void print_copied_struct();

#endif