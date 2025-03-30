#include <stdio.h>


int main() {
  enum {FIRST, SECOND} b = FIRST;
  int i = 2;

  b = i + 1;

  printf("%d\n", b);

  return 0;
}
