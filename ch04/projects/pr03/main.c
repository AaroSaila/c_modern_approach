#include <stdio.h>

int main() {
  int n1, n2, n3;  // Order in respect to final reversed result

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &n3, &n2, &n1);

  printf("The reversal is: %d%d%d\n", n1, n2, n3);

  return 0;
}
