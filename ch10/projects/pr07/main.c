#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
};

char digits[4][MAX_DIGITS*4];

void clear_digits_array() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++) {
      digits[i][j] = ' ';
    }
  }
}

void print_digits_array() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}

void process_digit(int digit, int position) {
  if (position > 1 && position < MAX_DIGITS) {
    position = position + 4 * (position - 1);
  }

  int relSegPosI[7] = {0, 1, 2, 2, 2, 1, 1};
  int relSegPosJ[7] = {0, 1, 1, 0, -1, -1, 0};
  char symbols[7] = {'_', '|', '|', '_', '|', '|', '_'};

  for (int i = 0; i < 7; i++) {
    if (segments[digit][i]) {
      digits[relSegPosI[i]][position+relSegPosJ[i]] = symbols[i];
    }
  }
}

int main() {
  clear_digits_array();

  char ch;
  printf("Enter a number: ");
  
  int position = 1;
  while ((ch = getchar()) != '\n') {
    if (position > MAX_DIGITS) {
      printf("Too many digits\n");
      return -1;
    }
    if (isdigit(ch)) {
      process_digit(ch - '0', position);
      position++;
    }
  }

  print_digits_array();

  return 0;
}
