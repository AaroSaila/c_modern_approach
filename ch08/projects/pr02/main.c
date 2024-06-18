#include <stdio.h>

int main() {
  int digits[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digits[digit]++;
    n /= 10;
  }

  printf("Digit:\t\t");

  for (int i = 0; i < 10; i++) {
    printf("%d  ", i);
  }

  printf("\nOccurences:\t");

  for (int i = 0; i < 10; i++) {
    printf("%d  ", digits[i]);
  }

  printf("\n");

  return 0;
}
