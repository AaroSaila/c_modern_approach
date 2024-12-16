#include <stdio.h>
#include <stdbool.h>

bool search(const int* head, int size, int key) {
  for (int* p = (int*) head; p < head + size; p++) {
    if (*p == key) {
      return true;
    }
  }

  return false;
}

int main() {
  int array[] = {1, 2, 3};

  printf("When the key is in the array it should return true\n");
  if (search(array, 3, 2) == true) {
    printf("  pass\n");
  } else {
    printf("  fail\n");
  }

  printf("\nWhen the key is not in the array it should return false\n");
  if (search(array, 3, 5) == false) {
    printf("  pass\n");
  } else {
    printf("  fail\n");
  }

  return 0;
}
