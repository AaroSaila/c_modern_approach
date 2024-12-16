#include <stdio.h>

int sum_array(const int* head, int size) {
  int sum = 0;

  for (int* p = (int*) head; p < head + size; p++) {
    sum += *p;
  }

  return sum;
}

int main() {
  int a[3] = {1, 2, 3};

  printf("Sum (manual)  : %d\n", 6);
  printf("Sum (function): %d\n", sum_array(a, 3));

  return 0;
}
