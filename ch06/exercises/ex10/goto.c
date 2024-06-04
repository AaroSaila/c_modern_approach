#include <stdio.h>

int main() {
  for (int i = 10; i > 0; i--) {
    if (i == 5) {
      goto end_of_stmnt;
    }
    printf("%d\n", i);
end_of_stmnt: ;
  }

  return 0;
}
