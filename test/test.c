#include <stdio.h>

int main() {
  int i;
  printf("Enter an integer: ");
  scanf("%d", &i);
  while (getchar() != '\n');
  printf("Enter a character: ");
  char ch = getchar();

  printf("%d\n%c\n", i, ch);

  return 0;
}
