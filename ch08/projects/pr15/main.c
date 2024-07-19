#include <stdio.h>
#include <stdbool.h>

int main() {
  printf("Enter a message to be encrypted: ");

  char message[80] = {0};
  bool upper_case[80] = {false};
  bool letter[80] = {false};
  char ch;

  for (int i = 0; ; i++) {
    ch = getchar();

    if (ch >= 'A' && ch <= 'Z') {
      message[i] = ch;
      upper_case[i] = true;
      letter[i] = true;
    } else if (ch >= 'a' && ch <= 'z') {
      message[i] = ch;
      letter[i] = true;
    } else if (ch == '\n') {
      message[i] = ch;
      break;
    } else {
      message[i] = ch;
    }
  }

  int n;
  printf("Enter shift amount (1-25): ");
  scanf("%d", &n);

  printf("Encrypter message: ");

  for (int i = 0; ; i++) {
    if (message[i] == '\n') {
      putchar('\n');
      break;
    }

    if (!letter[i]) {
      putchar(message[i]);
      continue;
    }

    if (upper_case[i])
      putchar(((message[i] - 'A') + n) % 26 + 'A');
    else
      putchar(((message[i] - 'a') + n) % 26 + 'a');
  }
  
  return 0;
}
