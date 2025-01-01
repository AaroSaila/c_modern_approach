#include <stdio.h>

int main() {
  char *tens[] = {
    "teen",
    "twenty",
    "thirty",
    "fourty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety"
  };

  char *ones[] = {
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
  };

  char *special[] = {
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "",
    "fifteen"
  };

  int num;
  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int first_digit = num / 10;
  int second_digit = num - first_digit * 10;
  /* printf("\nFirst digit: %d\nSecond digit: %d\n\n", first_digit, second_digit); */

  printf("You entered the number: ");

  if (first_digit == 1) {
    switch (second_digit) {
      case 0: case 1: case 2: case 3: case 5:
        printf("%s\n", special[second_digit]);
        break;
      default:
        printf("%s%s\n", ones[second_digit-1], tens[0]);
        break;
    }
  } else {
    if (second_digit != 0) {
      printf("%s-%s\n", tens[first_digit-1], ones[second_digit-1]);
    } else {
      printf("%s\n", tens[first_digit-1]);
    }
  }

  return 0;
}
