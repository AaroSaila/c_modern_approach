#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Enter a first and last name: ");

  while ((ch = getchar()) == ' ')
  {}

  char initial = toupper(ch);

  while (getchar() != ' ') 
  {}

  while ((ch = getchar()) != '\n') {
    if (ch == ' ')
      continue;

    putchar(ch);
  }

  printf(", %c\n", initial);

  return 0;
}
