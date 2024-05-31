#include <stdio.h>

int main() {
  int i, j, k;

  printf("(a)\n");

  i = 2; j = 3;
  k = i * j == 6;
  printf("%d\n", k);

  printf("(b)\n");
  
  i = 5; j = 10; k = 1;
  printf("%d\n", k > i < j);

  printf("(c)\n");

  i = 3; j = 2; k = 1;
  printf("%d\n", i < j == j < k);

  printf("(d)\n");
  
  i = 3; j = 4; k = 5;
  printf("%d\n", i % j + i < k);

  return 0;
}
