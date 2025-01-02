#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[1000];
  fgets(str, 1000, stdin);
  char *p = str;

  for (; *p != '\n'; p++) {
    putchar(*p);
  }
  putchar('\n');

  return 0;
}
