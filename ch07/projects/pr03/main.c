#include <stdio.h>

int main() {
  double n, sum = 0;

  printf("This program sums a series of doubles.\n");
  printf("Enter floating point numbers (0 to terminate):\n");

  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %lf\n", sum);

  return 0;
}
