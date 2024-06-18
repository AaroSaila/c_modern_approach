#include <stdio.h>
#include <stdbool.h>

int main() {
  bool weekend[7] = {[0] = true, [6] = true};

  for (int i = 0; i < 7; i++) {
    printf("%3d", weekend[i]);
  }
  
  printf("\n");

  return 0;
}
