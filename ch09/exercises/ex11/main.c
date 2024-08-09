#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n) {
  float sum = 0.0f;
  for (int i = 0; i < n; i++) {
    switch (tolower(grades[i])) {
      case 'a':
        sum += 4.0f;
        break;
      case 'b':
        sum += 3.0f;
        break;
      case 'c':
        sum += 2.0f;
        break;
      case 'd':
        sum += 1.0f;
        break;
      case 'f':
        break;
      default:
        printf("\nInvalid grade\n");
        return -1;
    }
  }

  return sum / n;
}

int main() {
  char grades[3] = {'A', 'B', 'C'};

  printf("Average: %g\n", compute_GPA(grades, 3));

  return 0;
}
