#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_scrabble_value(const char *word) {
  int sum = 0;
  for (int i = 0; i < strlen(word); i++) {
    switch (tolower(word[i])) {
    case 'a':
    case 'e':
    case 'i':
    case 'l':
    case 'n':
    case 'o':
    case 'r':
    case 's':
    case 't':
    case 'u':
      sum++;
      break;

    case 'd':
    case 'g':
      sum += 2;
      break;

    case 'b':
    case 'c':
    case 'm':
    case 'p':
      sum += 3;
      break;

    case 'f':
    case 'h':
    case 'v':
    case 'w':
    case 'y':
      sum += 4;
      break;

    case 'k':
      sum += 5;
      break;

    case 'j':
    case 'x':
      sum += 8;
      break;

    case 'q':
    case 'z':
      sum += 10;
      break;
    }
  }

  return sum;
}

int main() {
  char word[1000];

  printf("Enter a word: ");
  fgets(word, 1000, stdin);

  printf("Scrabble value: %d\n", compute_scrabble_value(word));

  return 0;
}
