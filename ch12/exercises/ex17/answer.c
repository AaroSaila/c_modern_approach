#include <stdio.h>

#define COLS 5

int sum_two_dimensional_array(const int *array_ptr, int row_count) {
  int sum = 0;

  for (int *p = (int *)array_ptr; p < array_ptr + row_count * COLS; p++) {
    sum += *p;
  }

  return sum;
}

int main() {
  int a[3][COLS] = {
    {4, 8, 0, 2, 12},
    {1, 3, 47, 12, 89},
    {93, 12, 32, 12, 34}
  };

  int sum_manual = 4+8+2+12+1+3+47+12+89+93+12+32+12+34;
  int sum_function = sum_two_dimensional_array(&a[0][0], 3);

  printf("Sum (manual)  : %d\n", sum_manual);
  printf("Sum (function): %d\n", sum_function);

  return 0;
}
