/* 
 * A program that adds a 5% tax to a value entered
 * by the user
*/
#include <stdio.h>

int main() {
  double value;
  printf("Enter a value in dollars and cents: ");
  scanf("%lf", &value);
  printf("%.2lf + 5%c Tax is: %.2lf\n", value, '%', value * 1.05f);
  return 0;
}
