#include <stdio.h>
#include <math.h>

#define DISP(f, x) (printf(#f "(%g) = %g\n", (x), f((x))))
#define DISP2(f, x, y) (printf(#f "(%g, %g) = %g\n", (x), (y), f((x), (y))))

int main() {
  printf("(a)\n");
  printf("  ");
  DISP(sqrt, 3.0);

  printf("(b)\n");
  printf("  ");
  DISP2(pow, 3.0, 2.0);

  return 0;
}
