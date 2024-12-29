#include <stdio.h>

void max_min(int *a, int n, int *max, int *min) {
  *max = *min = *a;
  for (int *p = a; p < a + n; p++) {
    if (*p > *max) {
      *max = *p;
    } else if (*p < *min) {
      *min = *p;
    }
  }
}

int main() {
  int a[4] = {4, 8, 2, 3};

  int max;
  int min;

  max_min(a, 4, &max, &min);

  printf("Manual:\n");
  printf("  Min: 2\n");
  printf("  Max: 8\n");

  printf("\nFunction:\n");
  printf("  Min: %d\n", min);
  printf("  Max: %d\n", max);

  return 0;
}
