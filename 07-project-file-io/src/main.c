#include <stdio.h>
#include <stdlib.h>

struct read_result {
  int exit;
  char *msg;
};


struct read_result read_files(char *path) {
  struct read_result res;

  FILE *fp;
  fp = fopen(path, "r");

  if (fp == NULL) {
    char msg[] = "file do not exist";
    res.exit = EXIT_FAILURE;
    res.msg = msg;
    return res;
  }
  int c = fgetc(fp);
  printf("%c\n", c);
  fclose(fp);
  res.exit = EXIT_SUCCESS;
  res.msg = "read success";
  return res;
}

void reading_files() {
  struct read_result res1 = read_files("asdasd.txt");
  struct read_result res2 = read_files("hello.txt");
  printf("exit=%d, msg=%s\n", res1.exit, res1.msg);
  printf("exit=%d, msg=%s\n", res2.exit, res2.msg);
}

int main() {
  reading_files();
  return 0;
}