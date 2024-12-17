#include <stdio.h>

void find_two_largest(const int *array_ptr, int size, int *largest,
                      int *second_largest) {
  int max = 0;
  int second_max = 0;

  for (int *p = (int *)array_ptr; p < array_ptr + size; p++) {
    if (*p > max) {
      if (max > second_max) {
        second_max = max;
      }
      max = *p;
    }
  }

  *largest = max;
  *second_largest = second_max;
}

int main() {
  int a[4] = {1, 3, 2, 4};

  printf("Manual:\n");
  printf("  Largest:\n");
  printf("    Pointer: %p\n", &a[3]);
  printf("    Value  : %d\n", a[3]);
  printf("  Second Largest:\n");
  printf("    Pointer: %p\n", &a[1]);
  printf("    Value  : %d\n", a[1]);

  int largest = -1;
  int second_largest = -1;
  find_two_largest(a, 4, &largest, &second_largest);

  printf("\nFunction:\n");
  printf("  Largest:\n");
  printf("    Pointer: %p\n", &largest);
  printf("    Value  : %d\n", largest);
  printf("  Second Largest:\n");
  printf("    Pointer: %p\n", &second_largest);
  printf("    Value  : %d\n", second_largest);

  return 0;
}
