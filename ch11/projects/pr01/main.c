/*
   This program asks the user for a dollar amount
   and outputs lowest amount of bills needed
   to pay that amount.
*/

#include <stdio.h>

void pay_amount(
    int dollars,
    int* twenties,
    int* tens,
    int* fives,
    int* ones
    )
{
  int dollars_copy = dollars;
  *twenties = dollars_copy / 20;
  dollars_copy -= 20 * *twenties;
  *tens = dollars_copy / 10;
  dollars_copy -= 10 * *tens;
  *fives = dollars_copy / 5;
  dollars_copy -= 5 * *fives;
  *ones = dollars_copy;
}

int main()
{
  int dollars;
  int twenties;
  int tens;
  int fives;
  int ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  pay_amount(dollars, &twenties, &tens, &fives, &ones);

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", ones);

  return 0;
}
