#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
  int exit;
  char *msg;
  char *content;
} read_result;

read_result read_files(char *path) {
  read_result result;

  FILE *fp;
  fp = fopen(path, "r");

  if (fp == NULL) {
    result.exit = EXIT_FAILURE;
    result.msg = "file do not exist";
    result.content = "error";
    return result;
  }
  
  char file_content[MAX];
  int c, count = 0;
  while ((c = fgetc(fp)) != EOF) {
    file_content[count] = (char) c;
    count++;
  }

  fclose(fp);
  result.exit = EXIT_SUCCESS;
  result.msg = "read success";
  result.content = file_content;
  return result;
}

void set_msg(read_result *r, char *new_msg) {
  r->msg = new_msg;
}

void reading_files() {
  read_result res1 = read_files("hello.txt");
  read_result res2 = read_files("asdasd.txt");
  printf("res1 { exit=%d, msg=%s, content=%s }\n", res1.exit, res1.msg, res1.content);
  printf("res2 { exit=%d, msg=%s, content=%s }\n", res2.exit, res2.msg, res2.content);

  // modifying a struct
  set_msg(&res1, "setting new message");
  printf("res1 { exit=%d, msg=%s, content=%s }\n", res1.exit, res1.msg, res1.content);
}

int main() {
  reading_files();
  return 0;
}