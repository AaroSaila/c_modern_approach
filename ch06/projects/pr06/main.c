#include <stdio.h>

int main() {
  int input;
  printf("Enter a positive number: ");
  scanf("%d", &input);

  printf("Even squares up to %d:\n", input);

  for (int i = 2; i * i <= input; i += 2) {
    printf("%d\n", i * i);
  }

  return 0;
}
