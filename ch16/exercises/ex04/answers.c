#include <stdio.h>

typedef struct {
  double real;
  double imaginary;
} complex;

complex make_complex(const double real, const double imaginary) {
  return (complex) {.real=real, .imaginary = imaginary};
}

complex add_complex(const complex c1, const complex c2) {
  return (complex) {.real=c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary};
}

void print_complex(const complex c, const char* name) {
  printf(
      "%s:\n"
      "  real:    %.1lf\n"
      "  complex: %.1lf\n",
      name, c.real, c.imaginary
      );
}

int main() {
  // complex c1, c2, c3;

  complex c1 = make_complex(1.0, 2.0);
  complex c2 = make_complex(3.0, 4.0);
  complex c3 = add_complex(c1, c2);

  print_complex(c1, "c1");
  print_complex(c2, "c2");
  print_complex(c3, "c3");

  return 0;
}
