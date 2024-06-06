#include <stdio.h>

int main() {
  int earliest_day;
  int earliest_month;
  int earliest_year;
  int day;
  int month;
  int year;

  printf("Enter a date (dd/mm/yy): ");
  scanf("%d/%d/%d", &earliest_day, &earliest_month, &earliest_year);
  
  if (earliest_day == 0 && earliest_month == 0 && earliest_year == 0) {
    return 0;
  }

  while (1) {
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (day == 0 && month == 0 && year == 0) {
      printf("%.2d/%.2d/%.2d is the earliest date\n", earliest_day, earliest_month, earliest_year);
      return 0;
    }

    if (year < earliest_year) {
      earliest_day = day;
      earliest_month = month;
      earliest_year = year;
      continue;
    } else if (year > earliest_year) {
      continue;
    }

    if (month < earliest_month) {
      earliest_day = day;
      earliest_month = month;
      earliest_year = year;
      continue;
    } else if (month > earliest_month) {
      continue;
    }

    if (day < earliest_day) {
      earliest_day = day;
      earliest_month = month;
      earliest_year = year;
      continue;
    } else if (day > earliest_day) {
      continue;
    }
  }

  return 0;
}
