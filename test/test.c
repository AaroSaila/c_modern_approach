#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  printf("%d\n", rand() % 10);

  return 0;
}
