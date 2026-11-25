#include <stdio.h>

float sum(float a, float b) {
  return a + b;
}

float subtract(float a, float b) {
  return a - b;
}

float multiply(float a, float b) {
  return a * b;
}

float divide(float a, float b) {
  if (b == 0) {
    return 0; 
  }
  return a / b;
}

float doOperation(char operator, float a, float b) {
  switch (operator) {
    case '+':
      return sum(a, b);
    case '-':
      return subtract(a, b);
    case '*':
      return multiply(a, b);
    case '/':
      return divide(a, b);
    default:
      printf("ERROR\n");
      return 1;
  }
}

void calculate() {
  int start;
  float a, b;
  char operator;
  char* text = "Type any number to start, 0 to stop: ";
  
  printf("%s", text);
  scanf("%d", &start);
  
  while (start != 0) {
    printf("Type any math expression: ");
    scanf("%f %c %f", &a, &operator, &b);

    float res = doOperation(operator, a, b);
    printf("Result = %.2f\n", res);

    printf("%s", text);
    scanf("%d", &start);
  }
}
