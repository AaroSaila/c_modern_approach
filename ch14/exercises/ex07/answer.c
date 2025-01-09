#include <stdio.h>

#define GENERIC_MAX(type) \
  type type##_max(type x, type y) { \
    return x > y ? x : y; \
  }

GENERIC_MAX(long);

/*
   This does not work because unsigned and long are both
   accepted as separate tokens. Hence the function name will
   be "usigned long_max(params)", which is illegal.
*/
// GENERIC_MAX(unsigned long)

/*
  To make this work we could define a "new" type that fuses the
  two words of the original type into one.
*/

typedef unsigned long unsigned_long;

GENERIC_MAX(unsigned_long);

int main() {
  printf("Max between 5 and 11: %ld\n", unsigned_long_max(5, 11));

  return 0;
}
