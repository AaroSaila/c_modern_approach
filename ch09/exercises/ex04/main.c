#include <stdio.h>

int day_of_year(int day, int month, int year) {
  if (month == 1) {
    if (day > 31) {
      printf("Invalid day for month\n");
      return -1;
    }

    return day;
  }

  int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_of_year = 0;

  if (
      (year % 4 == 0)
      || (year % 100 == 0 && year % 400 == 0)
      ) {
    month_days[1]++;
  }

  if (day > month_days[month - 1]) {
    printf("Invalid day for month\n");
    return -1;
  }

  for (int i = 0; i < month - 1; i++) {
    day_of_year += month_days[i];
  }

  day_of_year += day;

  return day_of_year;
}

int main() {
  int day, month, year;
  printf("day, month, year: ");
  scanf("%d %d %d", &day, &month, &year);

  printf("day of year: %d\n", day_of_year(day, month, year));

  return 0;
}
