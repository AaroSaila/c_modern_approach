#include <stdio.h>

#define SIZE 3

double inner_product(const double *array1, const double *array2,
                     const int size) {
  double result = 0;

  double* p1 = (double*) array1;
  double* p2 = (double*) array2;

  while (p1 < array1 + size && p2 < array2 + size) {
    result += *p1 * *p2;

    p1++;
    p2++;
  }

  return result;
}

int main() {
  double array1[SIZE] = {0.1, 3, 0.89};
  double array2[SIZE] = {9.7, 2.3, 8.7};

  double inner_product_manual = 0.1 * 9.7 + 3 * 2.3 + 0.89 * 8.7;
  double inner_product_function = inner_product(array1, array2, SIZE);

  printf("Inner product (manual)  : %lf\n", inner_product_manual);
  printf("Inner product (function): %lf\n", inner_product_function);
  return 0; 
}
