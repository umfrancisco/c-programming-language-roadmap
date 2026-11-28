#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct read_result {
  int exit;
  char *msg;
  char *content;
};

struct read_result read_files(char *path) {
  struct read_result result;

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

void reading_files() {
  struct read_result res1 = read_files("hello.txt");
  struct read_result res2 = read_files("asdasd.txt");
  printf("res1 { exit=%d, msg=%s, content=%s }\n", res1.exit, res1.msg, res1.content);
  printf("res2 { exit=%d, msg=%s, content=%s }\n", res2.exit, res2.msg, res2.content);
}

int main() {
  reading_files();
  return 0;
}