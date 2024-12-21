#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1000

int main() {
  char buf[BUF_SIZE];

  printf("Enter a message: ");
  char ch;
  char *p = buf;
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      *p = tolower(ch);
      p++;
    }
  }
  *p = '\0';
  p--;

  char reversed[BUF_SIZE];
  char *r;
  for (r = reversed; p >= buf; p--) {
    *r = *p;
    r++;
  }
  *r = '\0';

  if (strcmp(buf, reversed) == 0) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }

  return 0;
}
