#include <stdio.h>

void read_files() {
  FILE *fp;

  fp = fopen("hello.txt", "r");
  int c = fgetc(fp);
  printf("%c\n", c);
  fclose(fp);
}

int main() {
  read_files();
  return 0;
}