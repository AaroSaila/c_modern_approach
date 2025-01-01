#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void str_tolower(char str[]);

int main(int argc, char *argv[]) {
  char *planets[] = {
    "mercury",
    "venus",
    "earth",
    "mars",
    "jupiter",
    "saturn",
    "uranus",
    "neptune",
    "pluto"
  };
  char msg[20];

  for (int i = 1; i < argc; i++) {
    str_tolower(argv[i]);
  }

  int j;
  for (int i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (strcmp(argv[i], planets[j]) == 0) {
        sprintf(msg, "%s is planet %d", argv[i], j + 1);
        msg[0] = toupper(msg[0]);
        printf("%s\n", msg);
        break;
      }

    }
    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }
  return 0;
}

void str_tolower(char str[]) {
  for (int i = 0; i < strlen(str); i++) {
    str[i] = tolower(str[i]);
  }
}
