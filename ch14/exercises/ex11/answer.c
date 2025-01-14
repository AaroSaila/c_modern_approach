#include <stdio.h>

#define ERROR(fstr, val) \
  ( \
    fprintf(stderr, fstr, val) \
  )

int main() {
  ERROR("Range error: index = %d\n", 3);

  return 0;
}
