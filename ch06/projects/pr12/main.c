#include <stdio.h>

int main() {
  float eps;
  printf("Enter the value for \xCE\xB5: ");
  scanf("%f", &eps);

  float e = 1.0f;

  for (int i = 1; ; i++) {
    int x = 1;

    for (int j = i; j > 0; j--) {
      x *= j;
    }

    float term = 1.0f/x;

    if (term < eps) {
      break;
    }

    e += term;

  }

  printf("e = %f\n", e);

  return 0;
}
