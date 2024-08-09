#include <stdio.h>

int check(int x, int y, int n) {
  if (
      (x >= 0 && x < n)
      && (y >= 0 && y < n)
      ) {
    return 1;
  }

  return 0;
}

int main() {
  printf("%d\n", check(0, 6, 6));

  return 0;
}

