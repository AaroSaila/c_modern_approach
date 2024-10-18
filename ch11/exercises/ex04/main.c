#include <stdio.h>

void swap(int* i, int* j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main() {
  int i = 1;
  int j = 22;
  printf("Before swap\n\ti: %d\n\tj: %d\n\n", i, j);

  swap(&i, &j);

  printf("After swap\n\ti: %d\n\tj: %d\n\n", i, j);

  return 0;
}
