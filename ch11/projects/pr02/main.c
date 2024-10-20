#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int abs(int x)
{
  return x > 0 ? x : -x;
}

int minutes_since_midnight(int hours,
                           int minutes)
{
  return hours * 60 + minutes;
}

bool to_twelwe_hour(int minutes_since_midnight,
                    int* hours,
                    int* minutes)
{
  *hours = 0;
  *minutes = 0;

  while (minutes_since_midnight >= 60)
  {
    *hours += 1;
    minutes_since_midnight -= 60;
  }

  *minutes = minutes_since_midnight;

  if (*hours == 12)
  {
    return true;
  } else if (*hours > 12)
  {
    *hours -= 12;
    return true;
  } else
  {
    return false;
  }
}

void find_closest_flight(int desired_time,
                         int* departure_time,
                         int* arrival_time)
{
  int departures[8] = {
    minutes_since_midnight(8, 0),
    minutes_since_midnight(9, 43),
    minutes_since_midnight(11, 19),
    minutes_since_midnight(12, 47),
    minutes_since_midnight(14, 0),
    minutes_since_midnight(15, 45),
    minutes_since_midnight(19, 0),
    minutes_since_midnight(21, 45)
  };
  int arrivals[8] = {
    minutes_since_midnight(10, 16),
    minutes_since_midnight(11, 52),
    minutes_since_midnight(13, 31),
    minutes_since_midnight(15, 0),
    minutes_since_midnight(16, 8),
    minutes_since_midnight(17, 55),
    minutes_since_midnight(21, 20),
    minutes_since_midnight(23, 58),
  };

  int comparator = INT_MAX;
  int closest_time_i = -1;
  for (int i = 0; i < 8; i++)
  {
    int current_comparator = abs(desired_time - departures[i]);
    if (current_comparator < comparator)
    {
      comparator = current_comparator;
      closest_time_i = i;
    }
  }

  *departure_time = departures[closest_time_i];
  *arrival_time = arrivals[closest_time_i];
}

int main()
{
  int hours;
  int minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  int departure_time;
  int arrival_time;
  find_closest_flight(minutes_since_midnight(hours, minutes), &departure_time, &arrival_time);

  int dep_hours;
  int dep_minutes;
  bool dep_pm = to_twelwe_hour(departure_time, &dep_hours, &dep_minutes);
  char* dep_ampm = dep_pm ? "p.m." : "a.m.";

  int arr_hours;
  int arr_minutes;
  bool arr_pm = to_twelwe_hour(arrival_time, &arr_hours, &arr_minutes);
  char* arr_ampm = arr_pm ? "p.m." : "a.m.";

  printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s\n", dep_hours, dep_minutes, dep_ampm, arr_hours, arr_minutes, arr_ampm);

  return 0;
}
