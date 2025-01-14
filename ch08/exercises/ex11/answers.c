#include <stdio.h>

int main() {
  char checker_board[8][8];

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((i + j) % 2 == 0) {
        checker_board[i][j] = 'B';
        printf("\033[0;34m%3c", checker_board[i][j]);
      }
      else {
        checker_board[i][j] = 'R';
        printf("\033[0;31m%3c", checker_board[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
