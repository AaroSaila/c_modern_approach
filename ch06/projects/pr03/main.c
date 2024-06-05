#include <stdio.h>

int main() {
  int numerator;
  int denominator;

  printf("Enter a fraction (x/y): ");
  scanf("%d / %d", &numerator, &denominator);

  int m = numerator;
  int n = denominator;

  while (n != 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);

  return 0;
}
