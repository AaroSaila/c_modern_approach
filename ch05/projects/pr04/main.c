#include <stdio.h>

int main() {
  float wind;
  printf("Enter wind speed (kts): ");
  scanf("%f", &wind);

  printf("Description of wind: ");

  if (wind < 1) {
    printf("calm\n");
  } else if (wind < 4) {
    printf("Light air\n");
  } else if (wind < 28) {
    printf("Breeze\n");
  } else if (wind < 48) {
    printf("Gale\n");
  } else if (wind < 64) {
    printf("Storm\n");
  } else {
    printf("Hurricane\n");
  }

  return 0;
}
