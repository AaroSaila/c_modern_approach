#include <stdio.h>

void reduce(int numerator,
            int denominator,
            int* reduced_numerator,
            int* reduced_denominator)
{
  int m = numerator;
  int n = denominator;

  while (n != 0)
  {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}

int main()
{
  int numerator;
  int denominator;
  int reduced_numerator;
  int reduced_denominator;

  printf("Enter a fraction (x/y): ");
  scanf("%d / %d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}
