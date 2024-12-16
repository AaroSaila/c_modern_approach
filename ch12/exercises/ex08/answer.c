#include <stdio.h>

void store_zeros(int* head, int size) {
  for (int* p = head; p < head + size; p++) {
    *p = 0;
  }
}

void print_array(int* head, int size) {
  int* last = head + (size - 1);

  printf("{%d, ", *head);
  for (int* p = head + 1; p < last; p++) {
    printf("%d, ", *p);
  }
  printf("%d}\n", *last);
}

int main() {
  int a[] = {1, 2, 3};

  printf("Before store_zeros:\n");
  print_array(a, 3);

  store_zeros(a, 3);

  printf("\nAfter store_zeros:\n");
  print_array(a, 3);

  return 0;
}
