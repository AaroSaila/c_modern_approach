#include <stdio.h>

int main() {
  int i;

  i = 17;
  printf("i = %d\n\n", i);
  printf("%d\n\n", i >= 0 ? i : -i);

  i = -17;
  printf("i = %d\n\n", i);
  printf("%d\n", i >= 0 ? i : -i);

  return 0;
}
