#include <stdio.h>

int main() {
  int nums[5][5] = {0};

  for (int i = 0; i < 5; i++) {
    int n1, n2, n3, n4, n5;
    printf("Enter row %d: ", i + 1);
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    int row[5] = {n1, n2, n3, n4, n5};

    for (int j = 0; j < 5; j++) {
      nums[i][j] = row[j];
    }
    
  }

  printf("Row totals: ");

  for (int i = 0; i < 5; i++) {
    int row_total = 0;
    for (int j = 0; j < 5; j++) {
      row_total += nums[i][j];
    }
    printf("%d ", row_total);
  }
  printf("\n");

  printf("Column totals: ");

  for (int j = 0; j < 5; j++) {
    int column_total = 0;
    for (int i = 0; i < 5; i++) {
      column_total += nums[i][j];
    }
    printf("%d ", column_total);
  }
  printf("\n");

  return 0;
}
