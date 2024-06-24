#include <stdio.h>

int main() {
  char letter = 'A' - 1;
  while (1) {
    letter += 1;
    if (letter > 'Z')
      return 0;
    printf("%c\n", letter);
  }

  return 0;
}
