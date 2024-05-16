/*
   This program asks the user for the value
   of x and prints out the result of a
   polynomial with that value.
*/

#include <stdio.h>

long double f(double x);

int main() {
  double x;
  printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  printf("Solved with: \n((((3x + 2)x - 5)x - 1)x + 7)x -6\n");
  printf("Enter a value for x: ");
  scanf("%lf", &x);
  printf("f(x) = %Lf\n", f(x));
  return 0;
}

long double f(double x) {
  return ((((3*x + 2)*x - 5)*x - 1)*x +7)*x - 6;
}
