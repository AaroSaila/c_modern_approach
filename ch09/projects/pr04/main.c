#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]) {
  char ch;
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);

    if (isalpha(ch)) {
      counts[ch - 'a']++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++) {
    if (counts1[i] - counts2[i] != 0)
      return false;
  }

  return true;
}

int main() {
  int counts1[26] = {0};
  printf("Enter first word: ");
  read_word(counts1);

  int counts2[26] = {0};
  printf("Enter second word: ");
  read_word(counts2);

  if (equal_array(counts1, counts2))
    printf("\nThe words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}
