#include <stdio.h>

int main() {
  double result;
  double operand;
  char operator;

  printf("Enter an expression: ");

  scanf("%lf", &result);

  operator = getchar();
  while (operator != '\n') {
    scanf("%lf", &operand);
    
    switch (operator) {
      case '+':
        result += operand;
        break;

      case '-':
        result -= operand;
        break;

      case '*':
        result *= operand;
        break;

      case '/':
        if (operand == 0) {
          printf("Division by zero!\n");
          return 1;
        }
        result /= operand;
        break;

      default:
        printf("Invalid expression!\n");
        return 1;
    }
    operator = getchar();
  }
  
  printf("Value of expression: %.1lf\n", result);

  return 0;
}
