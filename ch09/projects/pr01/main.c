#include <stdio.h>

void selection_sort(int n, int nums[n]) {
  if (n == 1)
    return;

  int largest_i = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] > nums[largest_i])
      largest_i = i;
  }

  int temp = nums[n - 1];
  nums[n - 1] = nums[largest_i];
  nums[largest_i] = temp;

  selection_sort(n - 1, nums);
}

int main() {
  int nums[10] = {5, 2, 6, 0, 1, 4, 7, 3, 9, 8};
  printf("unsorted: ");
  for (int i = 0; i < 10; i++) 
    printf("%d ", nums[i]);

  printf("\n");
  selection_sort(10, nums);
  printf("sorted: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", nums[i]);

  printf("\n");

  return 0;
}
