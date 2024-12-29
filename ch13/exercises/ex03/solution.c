#include <stdio.h>

int main() {
  int i;
  int j;
  char s[1000];

  scanf("%d%s%d", &i, s, &j);

  printf("i = %d\n", i);
  printf("s = %s\n", s);
  printf("j = %d\n", j);

  return 0;
}
