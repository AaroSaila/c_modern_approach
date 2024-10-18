#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void split_date(
    int day_of_year,
    int year,
    int* month,
    int* day
    )
{
  // Check if leap year
  bool leap_year = false;

  if (
      year % 4 == 0
      || (
        year % 4 == 0
        && year % 100 == 0
        && year % 400 == 0
        )
      )
  {
    leap_year = true;
  }

  // Split date
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (leap_year)
  {
    months[1] += 1;
  }

  int days = 0;
  *month = -1;
  for (int i = 0; i < 12; i++)
  {
    //printf("+: %d\n", days + months[i]);
    //printf("%d\n", day_of_year);
    if (days + months[i] >= day_of_year)
    {
      *month = i + 1;
      break;
    } else 
    {
      days += months[i];
    }
  }

  if (*month == -1)
  {
    printf("ERROR: Month not found in split_date()");
    exit(-1);
  }

  if (*month == 1)
  {
    *day = day_of_year;
    return;
  }

  for (int i = 0; i < *month - 1; i++) {
    day_of_year -= months[i];
  }

  *day = day_of_year;
}

void test(char* text, char* nums, int day_of_year, int year) {
  printf("------------------------------------\n");
  printf("Manual:\n\t%s:\n\t%s\n\n", text, nums);

  int day = -1;
  int month = -1;
  split_date(day_of_year, year, &month, &day);

  printf("Function:\n\t%d.%d.%d\n", day, month, year);
  printf("------------------------------------\n\n");
}

int main()
{
  test("1st of January 2003", "1.1.2003", 1, 2003);
  test("29th of February 2024", "29.2.2024", 31+29, 2024);
  test("13th of August 2401", "13.8.2401", 31+28+31+30+31+30+31+13, 2401);

  return 0;
}
