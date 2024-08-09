#include <stdio.h>

int power(int x, int y) {
  int result = x;
  for (int i = 1; i < y; i++) {
    result *= x;
  }

  return result;
}

int digit(int n, int k) {
  for (int i = 1; i < k; i++)
    n /= 10;

  return n % 10;
}

int main() {
  int num, digits;
  printf("Number: ");
  scanf("%d", &num);
  printf("Digits: ");
  scanf("%d", &digits);

  printf("\nResult: %d\n", digit(num, digits));

  return 0;
}
