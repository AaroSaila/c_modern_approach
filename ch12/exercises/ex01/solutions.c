#include <stdio.h>

int main() {
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[1], *q = &a[5];

  printf("(a): %d\n", *(p+3));
  printf("(b): %d\n", *(q-3));
  printf("(c): %ld\n", q - p);

  printf("(d): ");
  if (p < q) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  printf("(e): ");
  if (*p < *q) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}
