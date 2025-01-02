#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverse(char *message) {
  int msg_len = strlen(message);

  char *p_s = message;
  char *p_e = message + (msg_len - 1);

  for (; p_s < p_e; p_s++, p_e--) {
    char temp = *p_s;
    *p_s = *p_e;
    *p_e = temp;
  }
}

bool is_palindrome(const char *message) {
  char msg_cpy[strlen(message)];
  strcpy(msg_cpy, message);

  reverse(msg_cpy);
  printf("msg     : %s\n", message);
  printf("msg rvrs: %s\n", msg_cpy);

  if (strcmp(message, msg_cpy) == 0) {
    return true;
  }

  return false;
}

int main() {
  char message[1000];
  printf("Enter a message: ");
  fgets(message, 1000, stdin);
  message[strlen(message)-1] = '\0';

  bool palindrome = is_palindrome(message);

  if (palindrome) {
    printf("It is a palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }

  return 0;
}
