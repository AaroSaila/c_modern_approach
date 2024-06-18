#include <stdio.h>
#include <ctype.h>

int main() {
  char message[256] = {0};
  int message_length = 0;
  char ch;

  printf("Enter message: ");
  
  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    switch (ch) {
      case 'A':
        ch = '4';
        break;

      case 'B':
        ch = '8';
        break;

      case 'E':
        ch = '3';
        break;

      case 'I':
        ch = '1';
        break;

      case 'O':
        ch = '0';
        break;

      case 'S':
        ch = '5';
    }

    message[message_length] = ch;
    message_length++;
  }

  for (int i = 0; i < message_length; i++) {
    printf("%c", message[i]);
  }

  printf("!!!!!!!!!!\n");

  return 0;
}
