#include <stdio.h>

float convert_fahr_celsius(float fahr) {
  float celsius = (5.0 / 9.0) * (fahr - 32.0);
  return celsius;
}

void print_range_temps(int lower, int upper) {
  float fahr, celsius;
  int step = 20;

  fahr = lower;

  printf("Celsius and Fahrenheit\n");
  printf("From %d to %d\n", lower, upper);
  while (fahr <= upper) {
    celsius = convert_fahr_celsius(fahr);
    printf("%3.0f C %6.1f F\n", fahr, celsius);
    fahr += step;
  }
  printf("---------------\n");
}