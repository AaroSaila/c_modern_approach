#include <stdio.h>

#define AVG(x, y) (x + y) / 2
#define AREA(x, y) (x) * (y)

int main() {
  printf("2 * AVG(3, 6 - 4): %d\n", 2 * AVG(3, 6 - 4));
  printf("3.0 / AREA(3, 4) : %.2lf\n", 3.0 / AREA(3, 4));


#undef AVG
#define AVG(x, y) (((x) + (y)) / 2)
#undef AREA
#define AREA(x, y) ((x) * (y))

  printf("\nWith fixed macros\n");

  printf("2 * AVG(3, 6 - 4): %d\n", 2 * AVG(3, 6 - 4));
  printf("3.0 / AREA(3, 4) : %.2lf\n", 3.0 / AREA(3, 4));
  
  return 0;
}
