#include <stdio.h>

int main() {
  char ch;
  char sentence[256] = {0};
  sentence[0] = ' ';
  printf("Enter a sentence: ");
  
  int i = 1;
  while (1) {
    ch = getchar();

    if (ch == '.' || ch == '?' || ch == '!')
      break;

    sentence[i] = ch; 
    i++;
  }

  char end_symbol = ch;

  int sentence_last_i = i;

  for (int i = sentence_last_i; i >= 0; i--) {
    if (sentence[i] == ' ') {
      for (int j = i + 1; ; j++) {
        if (sentence[j] != ' ' && sentence[j] != '\0') {
          printf("%c", sentence[j]);
        } else {
          break;
        }
      }
      printf(" ");
    }
  }

  printf("\b");
  printf("%c\n", end_symbol);

  return 0;
}
