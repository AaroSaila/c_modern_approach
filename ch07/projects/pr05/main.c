#include <stdio.h>
#include <ctype.h>

int main() {
  printf("Enter a word: ");

  char ch;
  int sum = 0;
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    switch (ch) {
      case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
        sum++;
        break;

      case 'd': case 'g':
        sum += 2;
        break;

      case 'b': case 'c': case 'm': case 'p':
        sum += 3;
        break;

      case 'f': case 'h': case 'v': case 'w': case 'y':
        sum += 4;
        break;

      case 'k':
        sum += 5;
        break;

      case 'j': case 'x':
        sum += 8;
        break;

      case 'q': case 'z':
        sum += 10;
        break;

      default:
        printf("Invalid entry!\n");
        return 1;
    }
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}
