#include <stdio.h>

int main() {
  int num;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  int n5 = num % 8;
  num /= 8;
  int n4 = num % 8;
  num /= 8;
  int n3 = num % 8;
  num /= 8;
  int n2 = num % 8;
  num /= 8;
  int n1 = num % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", n1, n2, n3, n4, n5);

  return 0;
}
