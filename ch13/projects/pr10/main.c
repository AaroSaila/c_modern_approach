#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse_name(char *name) {
  int i = 0;
  for (; name[i] == ' '; i++)
    ;

  char initial = toupper(name[i]);

  for (; name[i] != ' '; i++)
    ;
  for (; name[i] == ' '; i++)
    ;

  char last_name[1000];
  for (int l = 0; name[i] != ' ' && name[i] != '\n' && name[i] != '\0'; i++) {
    if (isalpha(name[i])) {
      last_name[l] = name[i];
      l++;
    }
  }

  char new_name[strlen(last_name) + 6];
  sprintf(new_name, "%s, %c.", last_name, initial);

  strcpy(name, new_name);
}

int main() {
  char name[1000];
  printf("Enter a first and last name: ");
  fgets(name, 1000, stdin);

  reverse_name(name);

  printf("%s\n", name);

  return 0;
}
