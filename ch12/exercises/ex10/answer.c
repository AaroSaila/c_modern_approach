#include <stdio.h>

int* find_middle1(int array[], int size) {
  return &array[size/2];
}

int* find_middle2(int* array_ptr, int size) {
  return array_ptr + (size / 2);
}

int main() {
  int a[3] = {1, 2, 3};
  
  int* middle1 = find_middle1(a, 3);
  int* middle2 = find_middle2(a, 3);

  printf("Middle of array is:\n");
  printf("  Pointer: %p\n", &a[1]);
  printf("  Value  : %d\n", a[1]);

  printf("\nSubscripting function:\n");
  printf("  Pointer: %p\n", middle1);
  printf("  Value  : %d\n", *middle1);

  printf("\nPointer arithemtic function:\n");
  printf("  Pointer: %p\n", middle2);
  printf("  Value  : %d\n", *middle2);

  return 0;
}
