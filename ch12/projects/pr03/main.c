#include <stdio.h>

#define BUF_SIZE 1000

int main() {
  char buf[BUF_SIZE];

  printf("Enter a message: ");
  char *p;
  for (p = buf; p < buf + BUF_SIZE; p++) {
    char ch = getchar();
    if (ch == '\n') {
      break;
    }

    *p = ch;
  }

  printf("Reversal is: ");
  for (; p >= buf; p--) {
    printf("%c", *p);
  }
  printf("\n");

  return 0;
}
