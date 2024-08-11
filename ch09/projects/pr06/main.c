#include <stdio.h>
#include <math.h>

double polynomial(double x) {
  double result = 3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x, 3) - pow(x, 2) + 7*x - 6;
  return result;
}

int main() {
  double x;
  printf("Enter value for x: ");
  scanf("%lf", &x);

  x = polynomial(x);

  printf("Result for ");
  printf("3x^5 + 2x^4 + 5x^3 - x^2 + 7x - 6:\n");
  printf("%g\n", x);

  return 0;
}
