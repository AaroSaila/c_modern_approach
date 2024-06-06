#include <stdio.h>

int main() {
  int n;
  printf("Enter the value for n: ");
  scanf("%d", &n);

  float e = 1.0f;

  for (int i = 1; i <= n; i++) {
    int x = 1;

    for (int j = i; j > 0; j--) {
      x *= j;
    }

    e += 1.0f/x;

  }

  printf("e = %f\n", e);

  return 0;
}
