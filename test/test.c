#include <stdio.h>

int main() {
  float f, frac_part;

  scanf("%f", &f);

  frac_part = f - (int) f;

  printf("Number: %f\nFrac: %f\n", f, frac_part);

  return 0;
}
