#ifndef EXAMPLE1_H
#define EXAMPLE1_H

typedef struct {
  int exit;
  char *msg;
  char *content;
} read_result;

read_result read_files(char *path);
void set_msg(read_result *r, char *new_msg);
void reading_files();

#endif