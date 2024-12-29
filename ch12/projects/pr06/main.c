#include <stdio.h>

#define N 10

int *split(int *a, int *low, int *high) {
  int part_element = *low;

  while (1) {
    while (low < high && part_element <= *high) {
      high--;
    }

    if (low >= high) {
      break;
    }

    *low = *high;
    low++;

    while (low < high && *low <= part_element) {
      low++;
    }

    if (low >= high) {
      break;
    }

    *high = *low;
    high--;
  }

  *high = part_element;
  return high;
}

void quicksort(int *a, int *low, int *high) {
  int *middle;

  if (low >= high) {
    return;
  }

  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int main() {
  int a[N] = {3, 4, 1, 8, 9, 7, 2, 5, 6, 0};
  printf("Unsorted array: ");
  for (int *p = a; p < a + N; p++) {
    printf("%d ", *p);
  }
  printf("\n");

  quicksort(a, a, a + (N - 1));

  printf("Sorted array  : ");
  for (int *p = a; p < a + N; p++) {
    printf("%d ", *p);
  }
  putchar('\n');

  return 0;
}
