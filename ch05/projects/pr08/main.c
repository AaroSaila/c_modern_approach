#include <stdio.h>

int main() {
  int hour;
  int minute;
  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &hour, &minute);

  int time = hour * 60 + minute;

  

  return 0;
}
