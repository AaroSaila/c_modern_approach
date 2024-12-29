#include <stdio.h>
#include <string.h>

void censor(char str[]) {
  for (int i = 0; i < strlen(str); i += 3) {
    if (str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o') {
      str[i] = '*';
      str[i + 1] = '*';
      str[i + 2] = '*';
    }
  }
}

int main() {
  char line[] = "I'm a fool for foo fighters";
  printf("Uncensored line: %s\n", line);

  censor(line);
  printf("Censored line  : %s\n", line);

  return 0;
}
