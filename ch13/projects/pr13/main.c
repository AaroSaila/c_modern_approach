#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void encrypt(char *message, int shift) {
  for (int i = 0; ; i++) {
    if (message[i] == '\n') {
      putchar('\n');
      break;
    }

    if (!isalpha(message[i])) {
      putchar(message[i]);
      continue;
    }

    if (isupper(message[i]))
      putchar(((message[i] - 'A') + shift) % 26 + 'A');
    else
      putchar(((message[i] - 'a') + shift) % 26 + 'a');
  }
}

int main() {
  char message[80] = {0};
  printf("Enter a message to be encrypted: ");
  fgets(message, 80, stdin);

  int shift;
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypter message: ");
  encrypt(message, shift);
  
  return 0;
}
