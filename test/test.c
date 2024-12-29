#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "1234";
  char str2[] = "34";

  printf("%d\n", strcmp(str1 + 2, str2));
}
