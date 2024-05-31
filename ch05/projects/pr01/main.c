#include <stdio.h>

int main() {
  int number;
  int digits = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number >= 0 || number <= 0) {
    digits++;
    if (number >= 10 || number <= -10) {
      digits++;
      if (number >= 100 || number <= -100) {
        digits++;
        if (number >= 1000 || number <= -1000) {
          digits++;
        }
      }
    }
  }

  printf("The number %d has %d digits\n", number, digits);

  return 0;
}
