#include <stdbool.h>
#include <stdio.h>

double compute_average_word_length(const char *sentence) {
  int word_length = 0;
  int word_length_sum = 0;
  int word_count = 0;
  bool whitespace = true;

  for (int i = 0; sentence[i] != '\n'; i++) {
    if (sentence[i] == ' ') {
      if (!whitespace) {
        word_count++;
        word_length_sum += word_length;
        word_length = 0;
      }
      whitespace = true;
      continue;
    }
    word_length++;
    whitespace = false;
  }

  if (word_count > 0) {
    word_count++;
    word_length_sum += word_length;
  }

  return (double)word_length_sum / word_count;
}

int main() {
  char sentence[1000];
  printf("Enter a sentence: ");
  fgets(sentence, 1000, stdin);

  printf("Average word length: %.1lf\n", compute_average_word_length(sentence));

  return 0;
}
