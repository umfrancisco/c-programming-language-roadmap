#ifndef BASIC_IO_DEMO_H
#define BASIC_IO_DEMO_H

typedef struct {
  int exit;
  char *msg;
  char *content;
} read_result;

read_result read_files(char *path);
void set_msg(read_result *r, char *new_msg);
void reading_files();
void basic_file_read(char *path);

#endif