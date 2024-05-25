#include <stdio.h>

int main() {
  int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int first = num % 10;
  int second = num / 10;

  printf("The reversal is: %d%d\n", first, second);

  return 0;
}
