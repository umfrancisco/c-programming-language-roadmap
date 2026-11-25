#include <stdio.h>

#define TEXT "Type 1 to start, 0 to stop: "

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
    printf("Cannot divide by zero\n");
    return -1; 
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
      return -1;
  }
}

void calculate() {
  int start;
  float a, b;
  char operator;
  
  printf("%s", TEXT);
  scanf("%d", &start);
  
  while (start != 0) {
    if (start == 1) {
      printf("Type two numbers: ");
      scanf("%f %f", &a, &b);

      printf("Type an operator: ");
      scanf(" %c", &operator);

      float res = doOperation(operator, a, b);
      printf("Result = %.2f\n", res);
    }
    printf("%s", TEXT);
    scanf("%d", &start);
  }
}
