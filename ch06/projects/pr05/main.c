#include <stdio.h>

int main() {
  int input;
  printf("Enter a number: ");
  scanf("%d", &input);

  printf("Reversed: ");

  do {
    printf("%d", input % 10);
    input /= 10;
  } while (input != 0);

  printf("\n");

  return 0;
}
