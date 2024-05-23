#include <stdio.h>

int main() {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf(
      "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
      &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16
      );

  int row1_sum = n1 + n2 + n3 + n4;
  int row2_sum = n5 + n6 + n7 + n8;
  int row3_sum = n9 + n10 + n11 + n12;
  int row4_sum = n13 + n14 + n15 + n16;

  int column1_sum = n1 + n5 + n9 + n13;
  int column2_sum = n2 + n6 + n10 + n14;
  int column3_sum = n3 + n7 + n11 + n15;
  int column4_sum = n4 + n8 + n12 + n16;

  int diagonal1_sum = n1 + n6 + n11 + n16;
  int diagonal2_sum = n4 + n7 + n10 + n13;

  printf(
      "\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
      n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16
      );
  printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
  printf("Column sums: %d %d %d %d\n", column1_sum, column2_sum, column3_sum, column4_sum);
  printf("Diagonal sums: %d %d\n", diagonal1_sum, diagonal2_sum);

  return 0;
}
