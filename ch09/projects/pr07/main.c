#include <stdio.h>

int power(int x, int n) {
  if (n == 0)
    return 1;

  if (n % 2 == 0) {
    int x_n = power(x, n / 2);
    return x_n * x_n;
  }
  else
    return x * power(x, n - 1);
}

int main() {
  int x, n;
  printf("Enter values for x^n\n");
  printf("x: ");
  scanf("%d", &x);
  printf("n: ");
  scanf("%d", &n);

  printf("Result: %d\n", power(x, n));

  return 0;
}
