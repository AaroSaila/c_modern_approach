#include <stdio.h>

int fact(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main() {
  printf("%d\n", fact(10));

  return 0;
}
