#include <stdio.h>

int main() {
  struct {
    double real;
    double imaginary;
  } c1 = {0.0, 1.0};

  struct {
    double real;
    double imaginary;
  } c2 = {1.0, 0.0};

  struct {
    double real;
    double imaginary;
  } c3;

  // Fails because both structs are anonymous
  // c1 = c2;

  // Has to be done in two statements
  c1.real = c2.real;
  c1.imaginary = c2.imaginary;

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;

  printf("c1:\n");
  printf("  real: %.1lf\n", c1.real);
  printf("  imaginary: %.1lf\n\n", c1.imaginary);

  printf("c2:\n");
  printf("  real: %.1lf\n", c2.real);
  printf("  imaginary: %.1lf\n\n", c2.imaginary);

  printf("c3:\n");
  printf("  real: %.1lf\n", c3.real);
  printf("  imaginary: %.1lf\n\n", c3.imaginary);

  return 0;
}
