#include <ctype.h>
#include <string.h>
#include <stdio.h>

#define BUF_SIZE 1000

int main() {
  char buf[BUF_SIZE];

  printf("Enter a message: ");
  // get input with getchar

  printf("%s\n", buf);

  char reversed[BUF_SIZE];
  for (char *r = reversed; p >= buf; p--) {
    if (isalpha(*p)) {
      *r = *p;
      r++;
    }
  }

  printf("%s\n", reversed);

  if (strcmp(buf, reversed) == 0) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }

  return 0;
}
