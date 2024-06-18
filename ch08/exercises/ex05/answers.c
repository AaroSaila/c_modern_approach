#include <stdio.h>

int main() {
  int fib_numbers[40] = {0, 1, 1};

  for (int i = 3; i < 40; i++) {
    int x = fib_numbers[i - 1] + fib_numbers[i - 2];
    fib_numbers[i] = x;
  }

  for (int i = 0; i < 40; i++) {
    printf("%d\n", fib_numbers[i]);
  }

  return 0;
}
