#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

struct complex make_complex(const double real, const double imaginary) {
  return (struct complex) {.real=real, .imaginary = imaginary};
}

struct complex add_complex(const struct complex c1, const struct complex c2) {
  return (struct complex) {.real=c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary};
}

void print_complex(const struct complex c, const char* name) {
  printf(
      "%s:\n"
      "  real:    %.1lf\n"
      "  complex: %.1lf\n",
      name, c.real, c.imaginary
      );
}

int main() {
  // struct complex c1, c2, c3;

  struct complex c1 = make_complex(1.0, 2.0);
  struct complex c2 = make_complex(3.0, 4.0);
  struct complex c3 = add_complex(c1, c2);

  print_complex(c1, "c1");
  print_complex(c2, "c2");
  print_complex(c3, "c3");

  return 0;
}
