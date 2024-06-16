#include <stdio.h>
#include <stdbool.h>

int main() {
  char ch;
  int word_length = 0;
  int word_length_sum = 0;
  int word_count = 0;
  bool whitespace = true;


  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
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

  double average = (double) word_length_sum / word_count;

  printf("Average word length: %.1lf\n", average);

  return 0;
}
