#include <stdio.h>

#define CHECK(x, y, n) \
  ( \
  (x) >= 0 \
  && (x) <= ((n) - 1) \
  && (y) >= 0 \
  && (y) <= ((n) - 1) \
    ? 1 \
    : 0 \
  )

#define MEDIAN(x, y, z) ()

int main() {
  printf("(a)\n");
  printf("   5 and 43 are between 0 and 50 (1)  : %d\n", CHECK(5, 43, 51));
  printf("   5 and 100 are between 0 and 50 (0) : %d\n", CHECK(5, 100, 51));
  printf("  -5 and 32 are between 0 and 50 (0)  : %d\n", CHECK(-5, 32, 51));
  printf("  -5 and -32 are between 0 and 50 (0) : %d\n", CHECK(-5, -32, 51));

  return 0;
}
