#include <stdio.h>

int main() {
  int number_of_days;
  int starting_day;

  printf("Enter number of days in month: ");
  scanf("%d", &number_of_days);
  printf("Enter starting day of the week (1=Mon, 7=Sun): ");
  scanf("%d", &starting_day);

  for (int i = 1; i < starting_day; i++) {
    printf("   ");
  }

  for (int i = 1; i <= number_of_days; i++, starting_day++) {
    if (starting_day > 7) {
      printf("\n");
      starting_day = 1;
    }
    printf("%2d ", i);
  }

  printf("\n");

  return 0;
}
