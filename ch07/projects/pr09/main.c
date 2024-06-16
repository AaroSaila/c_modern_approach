#include <stdio.h>
#include <ctype.h>

int main() {
  int hours, minutes;
  char ch;
  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &ch);
  ch = tolower(ch);

  if (ch == 'p') {
    hours += 12;
  } else if (ch != 'a') {
    printf("Invalid input!\n");
    return 1;
  }

  printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, minutes);

  return 0;
}
