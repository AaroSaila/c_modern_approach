#include <stdio.h>

int num_digits(int n) {
  int digits = 0;

  while (1) {
    n /= 10;
    digits++;
    if (n == 0)
      break;
  }

  return digits;
}

int main() {
  int num;
  printf("Number: ");
  scanf("%d", &num);

  printf("Digits: %d\n", num_digits(num));

  return 0;
}
