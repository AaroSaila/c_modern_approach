#include <stdio.h>

int main() {
  int i, j, k;

  printf("(a)\n\n");

  i = 3; j = 4; k = 5;
  printf("%d ", i < j || ++j < k);
  printf("%d %d %d\n\n", i, j, k);

  printf("(b)\n\n");

  i = 7; j = 8; k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n\n", i, j, k);

  printf("(c)\n\n");

  i = 7; j = 8; k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n\n", i, j, k);

  printf("(d)\n\n");

  i = 1; j = 1; k = 1;
  printf("%d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  return 0;
}
