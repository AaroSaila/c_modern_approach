/*
   This program asks the user for the value
   of x and prints out the result of a
   polynomial with that value.
*/

#include <stdio.h>

double pow(double x, double y);
long double f(double x);

int main() {
  double x;
  printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  printf("Enter a value for x: ");
  scanf("%lf", &x);
  printf("f(x) = %Lf\n", f(x));
  return 0;
}

double pow(double x, double y) {
  double result = x;
  for (int i = 1; i < y; i++) {
    result *= x;
  }
  
  return result;
}

long double f(double x) {
  return 3 * pow(x, 5) + 2 * pow(x, 4)
    - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}
