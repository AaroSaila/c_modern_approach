#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main() {
  float fahrenheit;
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  float celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  printf("%.1f F in Celsius: %.1f\n", fahrenheit, celsius);
  return 0;
}
