#include <stdio.h>

int* find_largest
(
 int a[],
 int n
 )
{
  int* largest = &a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] > *largest)
    {
      largest = &a[i];
    }
  }

  return largest;
}

int main() {
  int ints[5] = {4, 5, 2, 1, 6};
  printf("Manual: 6\n");
  int* largest = find_largest(ints, 5);
  printf("Function: %d\n", *largest);

  return 0;
}
