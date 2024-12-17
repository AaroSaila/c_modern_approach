#include <stdio.h>

int find_largest(int* array_ptr, int size) {
  int max = *array_ptr;

  for (int* p = array_ptr; p < array_ptr + size; p++) {
    if (*p > max) {
      max = *p;
    }
  }
    
  return max;
}

int main() {
  int a[3] = {1, 3, 2};

  printf("Largest in array (manual)  : 3\n");
  printf("Largest in array (function): %d\n", find_largest(a, 3));

  return 0;
}
