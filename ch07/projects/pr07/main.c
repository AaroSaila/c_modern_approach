#include <stdio.h>

int main() {
  double num1, denom1, num2, denom2, num_result, denom_result;
  char operator;

  printf("Enter two fractions separated by a operator (x/x op x/x): ");
  scanf("%lf/%lf %c %lf/%lf", &num1, &denom1, &operator, &num2, &denom2);

  if (denom1 == 0 || denom2 == 0) {
    printf("Division by zero!\n");
    return 1;
  }

  switch (operator) {
    case '+':
      num_result = num1 * denom2 + num2 * denom1;
      denom_result = denom1 * denom2;
      break;

    case '-':
      num_result = num1 * denom2 - num2 * denom1;
      denom_result = denom1 * denom2;
      break;

    case '/':
      num_result = num1 * denom2;
      denom_result = denom1 * num2;
      break;

    case '*':
      num_result = num1 * num2;
      denom_result = denom1 * denom2;
      break;

    default:
      printf("Invalid input!\n");
  }

  if (num_result == 0) {
    printf("The result is 0\n");
    return 0;
  }

  if (num_result == denom_result) {
    printf("The result is 1\n");
    return 0;
  }

  printf("The result is %.2lf/%.2lf\n", num_result, denom_result);

  return 0;
}
