// Simple Calculator
// Inputs, Scheme-style

#include <stdio.h>

float calculate(char operator, float operand1, float operand2) {
  float result;
  switch(operator) {
    case '+':
      result = operand1 + operand2;
      break;
    case '-':
      result = operand1 - operand2;
      break;
    case '*':
      return operand1 * operand2;
      break;
    case '/':
      return operand1 / operand2;
      break;
    case 'q': // Exit the calculator
      break;
    default:
      printf("Operator is not valid.\n");
      break;
  }
  return result;
}

int main(void) {
  char operator;
  float operand1;
  float operand2;
  float result;

  do {
    printf("Input: ");
    scanf(" %c %f %f", &operator, &operand1, &operand2);
    result = calculate(operator, operand1, operand2);
    printf("Result: %f\n", result);
  } while (operator != 'q' || operator == '+' || operator == '-' || operator == '*' || operator == '/');
  return 0;
}