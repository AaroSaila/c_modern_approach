#include <stdio.h>
#include <stdbool.h>

int main() {
  int a[3] = {1, 2, 3};

  int* p = a;

  printf("(a): illegal\n");
  /* if (p == a[0]) { */
  /*   printf("true\n"); */
  /* } */

  printf("(b): ");
  if (p == &a[0]) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  printf("(c): ");
  if (*p == a[0]) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  printf("(d): ");
  if (p[0] == a[0]) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}
