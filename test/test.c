#include <stdio.h>

int main() {
  printf("short int: %lu\n", sizeof(short int) * 8);
  printf("int: %lu\n", sizeof(int) * 8);
  printf("long int: %lu\n", sizeof(long int) * 8);
  printf("long long int: %lu\n", sizeof(long long int) * 8);

  return 0;
}
