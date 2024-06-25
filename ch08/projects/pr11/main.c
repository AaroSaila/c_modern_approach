#include <stdio.h>
#include <ctype.h>

#define NUM_SIZE 15

int main() {
  char number[NUM_SIZE] = {0};

  printf("Enter phone number: ");

  for (int i = 0; i < NUM_SIZE; i++) {
    char ch = getchar();

    if (ch == '\n')
      break;

    ch = tolower(ch);

    switch (ch) {
      case 'a': case 'b': case 'c':
        ch = '2';
        break;

      case 'd': case 'e': case 'f':
        ch = '3';
        break;
      
      case 'g': case 'h': case 'i':
        ch = '4';
        break;

      case 'j': case 'k': case 'l':
        ch = '5';
        break;

      case 'm': case 'n': case 'o':
        ch = '6';
        break;

      case 'p': case 'r': case 's':
        ch = '7';
        break;

      case 't': case 'u': case 'v':
        ch = '8';
        break;

      case 'w': case 'x': case 'y':
        ch = '9';
        break;
    }

    number[i] = ch;
  }

  printf("In numeric form: ");

  for (int i = 0; i < NUM_SIZE; i++) {
    putchar(number[i]);
  }

  printf("\n");

  return 0;
}
