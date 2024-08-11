#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int roll_dice() {
  time_t seed = time(NULL);
  srand(seed);
  int die1 = 1 + rand() % 6;
  srand(seed + 1);
  int die2 = 1 + rand() % 6;

  return die1 + die2;
}

bool play_game() {
  sleep(1);
  int throw = roll_dice();

  printf("\nYou rolled: %d\n", throw);

  if (throw == 7 || throw == 11)
    goto win;
  else if (throw == 2 || throw == 3 || throw == 12)
    goto lose;

  int point = throw;

  printf("Your point is: %d\n", point);
  
  while (true) {
    sleep(1);
    throw = roll_dice();
    printf("You rolled %d\n", throw);
    if (throw == point)
      goto win;
    else if (throw == 7)
      goto lose;
  }

win:

  printf("You win!\n");
  return true;

lose:

  printf("You lose!\n");
  return false;
}

int main() {
  int wins = 0;
  int losses = 0;
  char choice;

  while (true) {
    if (play_game())
      wins++;
    else
      losses++;

    printf("\nPlay again?: ");
    scanf("%c", &choice);
    getchar();

    if (choice != 'y' && choice != 'Y') {
      printf("Wins: %d\tLosses: %d\n", wins, losses);
      break;
    }
  }

  return 0;
}
