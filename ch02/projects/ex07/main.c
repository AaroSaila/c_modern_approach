/*
   This program asks the user for a dollar amount
   and outputs lowest amount of bills needed
   to pay that amount.
*/

#include <stdio.h>

int main() {
  int dollars;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  int dollars_copy = dollars;
  int twenties = dollars_copy / 20;
  dollars_copy -= 20 * twenties;
  int tens = dollars_copy / 10;
  dollars_copy -= 10 * tens;
  int fives = dollars_copy / 5;
  dollars_copy -= 5 * fives;
  int ones = dollars_copy;

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", ones);

  return 0;
}
