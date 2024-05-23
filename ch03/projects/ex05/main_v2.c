#include <stdio.h>

int main() {
  char numbers[sizeof(char) * 4 - 2];
  printf("Enter the numbers from 1 to 16 in any order: \n");
  fgets(numbers, sizeof(char) * 4 - 2, stdin);
  printf("%s\n", numbers);
  return 0;
}
