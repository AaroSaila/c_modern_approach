#include <stdio.h>

int main() {
  float largest = 0;
  float input;

  do {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input > largest) {
      largest = input;
    }
  } while (input != 0.0f);

  printf("The largest number entered was %.2f\n", largest);

  return 0;
}
