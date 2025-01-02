#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool are_anagrams(const char *word1, const char *word2) {
  int alphabet[26] = {0};

  for (char *p = (char *)word1; *p != '\0'; p++) {
    char ch = tolower(*p);
    if (isalpha(ch)) {
      alphabet[ch - 'a']++;
    }
  }

  for (char *p = (char *)word2; *p != '\0'; p++) {
    char ch = tolower(*p);
    if (isalpha(ch)) {
      alphabet[ch - 'a']--;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  char word1[50];
  char word2[50];

  printf("Enter first word: ");
  scanf("%s", word1);

  printf("Enter second word: ");
  scanf("%s", word2);

  bool anagram = are_anagrams(word1, word2);

  if (anagram) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }

  return 0;
}
