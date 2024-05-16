/*
 * The purpose of this program is to calculate the area of a circle
 * which radius is entered by the user.
*/
#include <stdio.h>

int main() {
  float radius;
  printf("Enter a radius: ");
  scanf("%f", &radius);
  double volume = 4.0f / 3.0f * 3.1415f * radius * radius * radius;
  printf("The volume of the circle is: %f\n", volume);
  return 0;
}
