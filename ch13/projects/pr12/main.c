#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define WORDS 30
#define WORD_LEN 21
#define SEN_LEN WORDS*WORD_LEN+1

bool is_end_sym(char ch) {
  if (ch == '?' || ch == '.' || ch == '!') {
    return true;
  } else {
    return false;
  }
}

int main() {
  char words[WORDS][WORD_LEN] = {0};
  char sentence[SEN_LEN];
  int i = 0;
  int j = 0;
  char end_sym;

  printf("Enter a sentence: ");
  fgets(sentence, SEN_LEN, stdin);

  char *p = sentence;
  // Skip whitespace
  for (; *p == ' '; p++)
    ;
  
  for (; *p != '\0' && i < WORDS; p++) {
    if (!isalpha(*p)) {
      continue;
    }

    for (; *p != ' ' && !is_end_sym(*p) && *p != '\0' && *p != '\n' && j < WORD_LEN; p++, j++) {
      words[i][j] = *p;
    }
    words[i][j] = '\0';

    i++;
    j = 0;
  }

  end_sym = sentence[strlen(sentence)-2];

  char reversed_sentence[SEN_LEN];
  strcpy(reversed_sentence, "");

  for (int i = WORDS - 1; i >= 0; i--) {
    if (words[i][0] != '\0') {
      strcat(reversed_sentence, words[i]);
      strcat(reversed_sentence, " ");
    }
  }

  if (is_end_sym(end_sym)) {
    reversed_sentence[strlen(reversed_sentence)-1] = end_sym;
  }

  reversed_sentence[strlen(reversed_sentence)] = '\0';

  printf("%s\n", reversed_sentence);

  return 0;
}
