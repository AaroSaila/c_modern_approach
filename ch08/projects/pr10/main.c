#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TIMES_SIZE 8

int main() {
  int departures[TIMES_SIZE] = {
      8 * 60,
      9 * 60 + 43,
      11 * 60 + 19,
      12 * 60 + 47,
      14 * 60,
      15 * 60 + 45,
      19 * 60,
      21 * 60 + 45
  };

  int arrivals[TIMES_SIZE] = {
    10 * 60 + 16,
    11 * 60 + 52,
    13 * 60 + 31,
    15 * 60,
    16 * 60 + 8,
    17 * 60 + 55,
    21 * 60 + 20,
    23 * 60 + 58
  };

  int hours;
  int minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);
  int time = hours * 60 + minutes;

  int closest = abs(departures[0] - time);
  int closest_i = 0;

  for (int i = 1; i < TIMES_SIZE; i++) {
    int comp = abs(departures[i] - time);
    if (comp < closest) {
      closest = comp;
      closest_i = i;
    }
  }

  int dep_hours = departures[closest_i] / 60;
  int dep_minutes = departures[closest_i] % 60;
  int arr_hours = arrivals[closest_i] / 60;
  int arr_minutes = arrivals[closest_i] % 60;
  bool dep_is_pm = dep_hours >= 12 ? true : false;
  bool arr_is_pm = arr_hours >= 12 ? true : false;

  if (dep_is_pm && dep_hours != 12)
    dep_hours -= 12;

  if (arr_is_pm && arr_hours != 12)
    arr_hours -= 12;

  printf("Closest departure time is %.2d:%.2d ", dep_hours, dep_minutes);

  if (dep_is_pm)
    printf("p.m.");
  else
    printf("a.m.");

  printf(", arriving at %.2d:%.2d ", arr_hours, arr_minutes);

  if (arr_is_pm)
    printf("p.m.\n");
  else
    printf("a.m.\n");

  return 0;
}
