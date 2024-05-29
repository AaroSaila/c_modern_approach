#include <stdio.h>

int main() {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

  printf("Enter the first 12 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
  
  int sum1 = n2 + n4 + n6 + n8 + n10 + n12;
  int sum2 = n1 + n3 + n5 + n7 + n9 + n11;
  int total = sum1 * 3 + sum2;
  int check = 9 - ((total - 1) % 10);

  printf("Check digit: %d\n", check);

  return 0;
}
