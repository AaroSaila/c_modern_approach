#include <stdio.h>

#define N 10

int main() {
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0], *q = &a[N-1], temp;

  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  printf("{%d, ", a[0]);
  for (int i = 1; i < N-1; i++) {
    printf("%d, ", a[i]);
  }
  printf("%d}\n", a[N-1]);

  return 0;
}
