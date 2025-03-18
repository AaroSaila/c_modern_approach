#include <stdio.h>

int main() {
  struct {int x, y;} x;
  struct {int x, y;} y;
  x.x = 10;
  x.y = 30;
  y.x = 1;
  y.y = 50;

  return 0;
}
