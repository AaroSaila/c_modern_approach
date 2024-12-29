#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char smallest_word[20];
  char largest_word[20];
  smallest_word[0] = '\0';
  largest_word[0] = '\0';

  while (1) {
    char word[20];
    printf("Enter word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
      word[i] = tolower(word[i]);
    }

    if (smallest_word[0] == '\0') {
      strcpy(smallest_word, word);
    }

    if (strcmp(word, smallest_word) < 0) {
      strcpy(smallest_word, word);
    } else if (strcmp(word, largest_word) > 0) {
      strcpy(largest_word, word);
    }

    if (strlen(word) == 4) {
      break;
    }
  }

  putchar('\n');
  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word : %s\n", largest_word);

  return 0;
}
