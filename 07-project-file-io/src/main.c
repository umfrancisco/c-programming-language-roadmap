#include <stdio.h>
#include <stdlib.h>

int read_files(char *path) {
  FILE *fp;
  fp = fopen(path, "r");

  if (fp == NULL) {
    printf("file do not exist\n");
    return EXIT_FAILURE;
  }
  int c = fgetc(fp);
  printf("%c\n", c);
  fclose(fp);
  return EXIT_SUCCESS;
}

void reading_files() {
  int res_1 = read_files("hello.txt");
  printf("EXIT = %d\n", res_1);
  int res_2 = read_files("asdasd.txt");
  printf("EXIT = %d\n", res_2);
}

int main() {
  reading_files();
  return 0;
}