#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize_sub(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = toupper(str[i]);
  }
}

void capitalize_ptr(char *str) {
  for (char *p = str; *p != '\0'; p++) {
    *p = toupper(*p);
  }
}

int main() {
  char buf[1000];
  char capitalized_sub[1000];
  char capitalized_ptr[1000];

  printf("Enter line: ");
  fgets(buf, 1000, stdin);
  strcpy(capitalized_sub, buf);
  strcpy(capitalized_ptr, buf);
  capitalize_sub(capitalized_sub);
  capitalize_sub(capitalized_ptr);

  putchar('\n');
  printf("Capitalized (subscripted): %s\n", capitalized_sub);
  printf("Capitalized (pointer)    : %s\n", capitalized_ptr);

  return 0;
}
