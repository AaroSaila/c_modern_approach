#include <stdio.h>

int evaluate_position(char *board_ptr) {
  int white_material = 0;
  int black_material = 0;

  for (char *p = board_ptr; p < board_ptr + 64; p++) {
    switch (*p) {
      case 'Q':
        white_material += 9;
        break;
      case 'q':
        black_material += 9;
        break;
      case 'R':
        white_material += 5;
        break;
      case 'r':
        black_material += 5;
        break;
      case 'B': case 'N':
        white_material += 3;
        break;
      case 'b': case 'n':
        black_material += 3;
        break;
      case 'P':
        white_material += 1;
        break;
      case 'p':
        black_material += 1;
        break;
    } 
  }

  return white_material - black_material;
}

int main() {
  char board_even[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
  };
  char board_w_p1[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
  };
  char board_b_p1[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', ' ', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
  };

  int even_eval = evaluate_position(&board_even[0][0]);
  int b_p1_eval = evaluate_position(&board_b_p1[0][0]);
  int w_p1_eval = evaluate_position(&board_w_p1[0][0]);

  printf("When material is even   : %2d\n", even_eval);
  printf("When white has advantage: %2d\n", w_p1_eval);
  printf("When black has advantage: %2d\n", b_p1_eval);

  return 0;
}
