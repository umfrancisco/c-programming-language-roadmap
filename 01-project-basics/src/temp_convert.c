#include <stdio.h>

#define LOWER 0
#define UPPER 300

float convert_fahr_celsius(float fahr) {
  float celsius = (5.0 / 9.0) * (fahr - 32.0);
  return celsius;
}

void print_temps(int step) {
  char *title = "Celsius and Fahrenheit";

  float fahr, celsius;

  fahr = LOWER;

  printf("%s\n", title);

  while (fahr <= UPPER) {
    celsius = convert_fahr_celsius(fahr);
    printf("%3.0f C %6.1f F\n", fahr, celsius);
    fahr += step;
  }
  printf("---------------\n");
}