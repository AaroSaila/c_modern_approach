#include <stdio.h>

#define CUBE(x) x * x
#define REMAINDER(x) x % 4
#define PRODUCT(x, y) x * y < 100.0 ? 1 : 0 

int main() {
  printf("(a)\n");
  printf("  The cube of  2    (4)      : %d\n", CUBE(2));
  printf("  The cube of  32   (1024)   : %d\n", CUBE(32));
  printf("  The cube of -8    (64)     : %d\n", CUBE(-8));
  printf("  The cube of  55.4 (3069.16): %.2lf\n", CUBE(55.4));
  printf("  The cube of -55.4 (3069.16): %.2lf\n", CUBE(55.4));

  printf("\n(b)\n");
  printf("  The remainder of  2 and 4  (2): %d\n", REMAINDER(2));
  printf("  The remainder of  32 and 4 (0): %d\n", REMAINDER(32));
  printf("  The remainder of -8 and 4  (0): %d\n", REMAINDER(-8));
  // These do not work because the macro replacement would result in a
  // % operation with mismatched types (int and double).
  /*
  printf("  The remainder of  55.4 (3069.16): %.2lf\n", REMAINDER(55.4));
  printf("  The remainder of -55.4 (3069.16): %.2lf\n", REMAINDER(55.4));
  */

  printf("\n(c)\n");
  printf("  Is 5 * 5 less than 100?      (1): %d\n", PRODUCT(5, 5));
  printf("  Is 5 * 5.0 less than 100?    (1): %d\n", PRODUCT(5, 5.0));
  printf("  Is 5.0 * 5.0 less than 100?  (1): %d\n", PRODUCT(5.0, 5.0));
  printf("  Is -5 * 5 less than 100?     (1): %d\n", PRODUCT(-5, 5.0));
  printf("  Is 25 * 6 less than 100?     (0): %d\n", PRODUCT(25, 6));
  printf("  Is 25.0 * 6.0 less than 100? (0): %d\n", PRODUCT(25.0, 6.0));
  return 0;
}
