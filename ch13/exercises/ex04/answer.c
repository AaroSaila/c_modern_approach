#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';

  return i;
}

int read_line_a(char str[], int n) {
  int ch, i = 0;

  while (isspace((ch = getchar())));

  while (ch != '\n') {
    if (i < n) {
      str[i++] = ch;
      ch = getchar();
    }
  }
  str[i] = '\0';

  return i;
}

int read_line_b(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n' && !isspace(ch)) {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  
  while ((ch = getchar()) != '\n');

  return i;
}

int read_line_c(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\n';
  str[++i] = '\0';

  return i;
}

int read_line_d(char str[], int n) {
  int ch, i = 0;
  while (i < n) {
    ch = getchar();
    if (ch == '\n') {
      break;
    }
    str[i] = ch;
    i++;
  }
  str[i] = '\0';

  return i;
}

int main() {
  char str[1000];

  printf("(a):\n");
  printf("  Should skip whitespace\n");
  printf("  Enter line: ");
  read_line_a(str, 1000);
  printf("  Read line : %s\n", str);

  printf("(b):\n");
  printf("  Should stop at whitespace\n");
  printf("  Enter line: ");
  read_line_b(str, 1000);
  printf("  Read line : %s\n", str);

  printf("(c):\n");
  printf("  Should have extra newline\n");
  printf("  Enter line: ");
  read_line_c(str, 1000);
  printf("  Read line : %s\n", str);

  char str2[1];
  char ch;
  printf("(d):\n");
  printf("  Should leave behind all but the first character\n");
  printf("  Enter line: ");
  read_line_d(str2, 1);
  printf("  Read line : %s\n", str2);
  printf("  Leftover characters: ");
  while ((ch = getchar()) != '\n') {
    putchar(ch);
  }
  putchar('\n');

  return 0;
}
