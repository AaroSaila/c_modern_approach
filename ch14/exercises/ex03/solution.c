#include <stdio.h>

#define DOUBLE(x) 2*x
#define DOUBLE_FIXED(x) (2*(x))

int main() {
  printf("(a) DOUBLE(1+2): %d\n", DOUBLE(1+2));
  printf("(b) 4/DOUBLE(2): %d\n", 4/DOUBLE(2));

  printf("With fixed macro:\n");
  printf("  (a) DOUBLE(1+2): %d\n", DOUBLE_FIXED(1+2));
  printf("  (b) 4/DOUBLE(2): %d\n", 4/DOUBLE_FIXED(2));

  return 0;
}
