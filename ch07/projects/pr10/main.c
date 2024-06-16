#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Enter a sentence: ");

  int vowels = 0;

  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    if (
        ch == 'a'
        || ch == 'e'
        || ch == 'i'
        || ch == 'o'
        || ch == 'u'
        ) {
      vowels++;
    }
  }

  printf("Your sentence contains %d vowels.\n", vowels);

  return 0;
}
