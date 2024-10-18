#include <stdio.h>

void split_time(long total_sec, int* hr, int* min, int* sec) {
  *hr = total_sec / 3600;
  total_sec -= 3600 * *hr;

  *min = total_sec / 60;
  total_sec -= 60 * *min;

  *sec = total_sec;
}

int main() {
  long time_s = 55845;
  int hr;
  int min;
  int sec;
  split_time(time_s, &hr, &min, &sec);

  printf("%ld is %d:%d:%d\n", time_s, hr, min, sec);

  return 0;
}
