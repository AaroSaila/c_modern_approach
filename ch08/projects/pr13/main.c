#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  char last_name[20] = {0};
  printf("Enter a first and last name: ");

  while ((ch = getchar()) == ' ')
  {}

  char initial = toupper(ch);

  while (getchar() != ' ') 
  {}

  int i = 0;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ')
      continue;

    last_name[i] = ch;
    i++;
  }

  printf("You entered the name: ");

  for (int i = 0; i < 20; i++) {
    printf("%c", last_name[i]);
  }

  printf(", %c.\n", initial);

  return 0;
}
