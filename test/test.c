#include <stdio.h>

int main() {
  int i = 10;
  int* p = &i;
  printf("%p\n", p);
  return 0;
}
