#include <stdio.h>
#include <string.h>

int main() {
  char s1[1000];
  char s2[1000];

  strcpy(s1, "computer");
  strcpy(s2, "science");
  if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
  else
    strcat(s2, s1);
  s1[strlen(s1)-6] = '\0';

  printf("%s\n", s1);

  return 0;
}
