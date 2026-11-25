#include <stdio.h>
#include "../include/temp_convert.h"

int main() {
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  while (fahr <= upper) {
    celsius = convert_fahr_celsius(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }
  return 0;
}