#include <ctype.h>
#include <stdio.h>

#define BUF_SIZE 1000

int main() {
  char buf[BUF_SIZE];
  char term_char;

  printf("Enter a sentence: ");

  char ch;
  char *p = buf;
  while ((ch = getchar()) && p - buf < BUF_SIZE) {
    if (ch == '?' || ch == '.' || ch == '!') {
      term_char = ch;
      break;
    }

    *p = tolower(ch);
    p++;
  }
  *p = '\0';
  p--;

  printf("Reversal of sentence: ");

  // Last word
  while (*p != ' ') {
    p--;
  }

  for (char *word_ch = p + 1; *word_ch != '\0'; word_ch++) {
    putchar(*word_ch);
  }
  putchar(' ');
  
  p--;

  // Middle words
  for (; p > buf; p--) {
    if (*p == ' ') {
      for (char *word_ch = p + 1; *word_ch != ' '; word_ch++) {
        putchar(*word_ch);
      }
      putchar(' ');
    }
  }

  // First word
  for (; *p != ' '; p++) {
    putchar(*p);
  }

  printf("%c\n", term_char);

  return 0;
}
