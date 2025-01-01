#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  
  for (int i = 1; argv[i] != NULL; i++) {
    sum += atoi(argv[i]);
  }

  printf("Sum is: %d\n", sum);

  return 0;
}
