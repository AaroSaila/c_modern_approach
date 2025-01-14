#include <stdio.h>
#include <math.h>

#define CHECK(x, y, n) \
  ( \
    (x) >= 0 \
    && (x) <= ((n) - 1) \
    && (y) >= 0 \
    && (y) <= ((n) - 1) \
      ? 1 \
      : 0 \
  )

#define MEDIAN(x, y, z) \
  ( \
    ((x) <= (y) && (x) >= (z)) || ((x) >= y && (x) <= (z)) \
    ? x \
    : \
    ((y) <= (x) && (y) >= (z)) || ((y) >= x && (y) <= (z)) \
    ? y \
    : z \
  )

#define POLYNOMIAL(x) \
  ( \
    3.0 * pow((x), 5.0) + 2.0 * pow((x), 4.0) - 5.0 * pow((x), 3.0) - pow((x), 2.0) + 7.0 * (x) - 6.0 \
  )

int main() {
  printf("(a)\n");
  printf("   5 and 43 are between 0 and 50  (1): %d\n", CHECK(5, 43, 51));
  printf("   5 and 100 are between 0 and 50 (0): %d\n", CHECK(5, 100, 51));
  printf("  -5 and 32 are between 0 and 50  (0): %d\n", CHECK(-5, 32, 51));
  printf("  -5 and -32 are between 0 and 50 (0): %d\n", CHECK(-5, -32, 51));


  printf("\n(b)\n");
  printf("  Median between 5, 1, and 3    (3): %d\n", MEDIAN(5, 1, 3));
  printf("  Median between 0, -12, and 50 (0): %d\n", MEDIAN(0, -12, 50));

  printf("\n(c)\n");
  printf("Polynomial is: y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  printf("y when x = 3 through 8:\n");
  for (int x = 3; x <= 8; x++) {
    printf("  x = %d, y = %.1f\n", x, POLYNOMIAL(x));
  }

  return 0;
}
