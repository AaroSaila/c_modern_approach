#include <stdio.h>
#include <ctype.h>

int main() {
  int alphabet[26] = {0};
  char ch;

  printf("Enter first word: ");

  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);

    if (isalpha(ch)) {
      alphabet[ch - 'a']++;
    }
  }

  printf("Enter second word: ");

  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);

    if (isalpha(ch)) {
      alphabet[ch - 'a']--;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] != 0) {
      printf("\nThe words are not anagrams.\n");
      return 0;
    }
  }
  printf("\n");

  printf("The words are anagrams.\n");

  return 0;
}
