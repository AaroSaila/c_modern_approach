#include <stdio.h>

int main() {
  printf("(a)\n");
  int i = 5;
  int j = 3;
  printf("%d %d\n", i / j, i % j);

  printf("(b)\n");
  i = 2;
  j = 3;
  printf("%d\n", (i + 10) % j);

  printf("(c)\n");
  i = 7;
  j = 8;
  int k = 9;
  printf("%d\n", (i + 10) % k / j);

  printf("(d)\n");
  i = 1;
  j = 2;
  k = 3;
  printf("%d\n", (i + 5) % (j + 2) / k);

  return 0;
}
