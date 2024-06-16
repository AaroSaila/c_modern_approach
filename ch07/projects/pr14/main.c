#include <stdio.h>
#include <math.h>

int main() {
  double x;
  double y = 1;
  double old_y;
  double average;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  int i = 0;
  do {
    average = (y + x/y) / 2;
    old_y = y;
    y = average;
    i++;
  } while (fabs(y - old_y) > y * 0.00001);

  printf("Square root: %lf\n", y);

  return 0;
}
