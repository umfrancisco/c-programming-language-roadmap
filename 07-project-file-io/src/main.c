#include <stdio.h>
#include <stdlib.h>

struct read_result {
  int exit;
  char *msg;
  char first_char;
};

struct read_result read_files(char *path) {
  struct read_result result;

  FILE *fp;
  fp = fopen(path, "r");

  if (fp == NULL) {
    result.exit = EXIT_FAILURE;
    result.msg = "file do not exist";
    result.first_char = '?';
    return result;
  }
  char first_char = (char) fgetc(fp);
  fclose(fp);
  result.exit = EXIT_SUCCESS;
  result.msg = "read success";
  result.first_char = first_char;
  return result;
}

void reading_files() {
  struct read_result res1 = read_files("hello.txt");
  struct read_result res2 = read_files("asdasd.txt");
  printf("res1 { exit=%d, msg=%s, first_char=%c }\n", res1.exit, res1.msg, res1.first_char);
  printf("res2 { exit=%d, msg=%s, first_char=%c }\n", res2.exit, res2.msg, res2.first_char);
}

int main() {
  reading_files();
  return 0;
}