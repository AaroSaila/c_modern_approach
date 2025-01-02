#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *sentence) {
  int vowels = 0;

  for (int i = 0; i < strlen(sentence); i++) {
    char ch = tolower(sentence[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      vowels++;
    }
  }

  return vowels;
}

int main() {
  char sentence[1000];
  printf("Enter a sentence: ");
  fgets(sentence, 1000, stdin);

  printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

  return 0;
}
