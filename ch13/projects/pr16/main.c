#include <stdio.h>
#include <string.h>

void reverse(char *message) {
  int msg_len = strlen(message);

  message[msg_len-1] = '\0';
  char *p_s = message;
  char *p_e = message + (msg_len - 2);

  for (; p_s < p_e; p_s++, p_e--) {
    char temp = *p_s;
    *p_s = *p_e;
    *p_e = temp;
  }
}

int main() {
  char message[1000];
  printf("Enter message: ");
  fgets(message, 1000, stdin);

  reverse(message);

  printf("Reversed     : %s\n", message);

  return 0;
}
