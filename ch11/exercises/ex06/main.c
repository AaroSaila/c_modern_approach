#include <stdio.h>

void find_two_largest(int a[], int n, int* largest, int* second_largest) {
  *largest = 0;
  *second_largest = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > *largest) {
      *largest = a[i];
    } else if (a[i] > *second_largest) {
      *second_largest = a[i];
    }
  }
}

int main() {
  int ints[10] = {4, 6, 90, 2, 1, 89, 10, 45, 78, 62};
  int largest = 0;
  int second_largest = 0;

  find_two_largest(ints, sizeof(ints)/sizeof(int), &largest, &second_largest);

  printf("Manual:\n\t#1 90\n\t#2 89\n");
  printf("Function:\n\t#1 %d\n\t#2 %d\n", largest, second_largest);

  return 0;
}
