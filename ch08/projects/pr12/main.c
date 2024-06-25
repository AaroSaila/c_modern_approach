#include <stdio.h>
#include <ctype.h>

#define VALUES_SIZE 26

int main() {
  const int values[VALUES_SIZE] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1,
    3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
  };

  int score = 0;

  printf("Enter a word: ");

  char ch;
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    const int i = ch - 'a';
    score += values[i];
  }

  printf("Scrabble value: %d\n", score);

  return 0;
}
