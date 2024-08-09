#include <stdio.h>

double inner_product(double a[], double b[], int n) {
  double result = 0;

  for (int i = 0; i < n; i++) {
    result += a[i] * b[i];
  }

  return result;
}

int main() {
  double a[3] = {5.5, 2.7, 9.3};
  double b[3] = {6.8, 7.5, 3.1};

  printf("Inner Product: %g\n", inner_product(a, b, 3));

  return 0;
}
