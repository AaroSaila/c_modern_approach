#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define BRD_SIZE 10
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main() {
  char board[BRD_SIZE][BRD_SIZE];
  char letter = 'A';
  bool directions_checked[4] = {false};

  srand((unsigned)time(NULL));

  for (int i = 0; i < BRD_SIZE; i++) {
    for (int j = 0; j < BRD_SIZE; j++) {
      board[i][j] = '.';
    }
  }

  board[0][0] = letter;
  letter += 1;
  int current_pos[2] = {0, 0};

  while (1) {

    usleep(10500);
    system("clear");
    for (int i = 0; i < BRD_SIZE; i++) {
      for (int j = 0; j < BRD_SIZE; j++) {
        printf("%c ", board[i][j]);
      }
      printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < 4; i++) {
      sum += directions_checked[i];
    }

    if (letter > 'Z' || sum == 4) {
      return 0;
    }

    int direction;
    int next_pos;

    do {
      direction = rand() % 4;
    } while (directions_checked[direction] == true);

    switch (direction) {
    case UP:
      next_pos = current_pos[0] - 1;

      if (next_pos < 0 ||
          board[next_pos][current_pos[1]] != '.') {
        directions_checked[UP] = true;
        continue;
      }

      current_pos[0] = next_pos;
      board[current_pos[0]][current_pos[1]] = letter;
      letter += 1;
      goto reset_checked;
      break;

    case RIGHT:
      next_pos = current_pos[1] + 1;

      if (next_pos > BRD_SIZE - 1 ||
          board[current_pos[0]][next_pos] != '.') {
        directions_checked[RIGHT] = true;
        continue;
      }

      current_pos[1] = next_pos;
      board[current_pos[0]][current_pos[1]] = letter;
      letter += 1;
      goto reset_checked;
      break;

    case DOWN:
      next_pos = current_pos[0] + 1;

      if (next_pos > BRD_SIZE - 1 ||
          board[next_pos][current_pos[1]] != '.') {
        directions_checked[DOWN] = true;
        continue;
      }

      current_pos[0] = next_pos;
      board[current_pos[0]][current_pos[1]] = letter;
      letter += 1;
      goto reset_checked;
      break;

    case LEFT:
      next_pos = current_pos[1] - 1;

      if (next_pos < 0 ||
          board[current_pos[0]][next_pos] != '.') {
        directions_checked[LEFT] = true;
        continue;
      }

      current_pos[1] = next_pos;
      board[current_pos[0]][current_pos[1]] = letter;
      letter += 1;
      goto reset_checked;
      break;
    }


    continue;

  reset_checked:
    for (int i = 0; i < 4; i++) {
      directions_checked[i] = false;
    }
  }

  return 0;
}
