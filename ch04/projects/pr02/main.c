#include <stdio.h>

int main() {
  int num;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  int n1 = num % 10;
  num /= 10;
  int n2 = num % 10;
  int n3 = num / 10;

  printf("The reversal is: %d%d%d\n", n1, n2, n3);

  return 0;
}
