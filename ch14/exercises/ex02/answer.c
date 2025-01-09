#include <stdio.h>

#define NELEMS(x) sizeof(x) / sizeof(x[0])

int main() {
  int arr[] = {1, 2, 3};

  printf("Size of arr (3): %ld\n", NELEMS(arr));

  return 0;
}
