#include <stdio.h>

int main() {
  float income;
  printf("Enter amount of taxable income: ");
  scanf("%f", &income);

  float taxes;

  if (income < 750) {
    taxes = income * 0.01f;
  } else if (income <= 2250) {
    taxes = 7.5f + 0.02f * (income - 750.0f);
  } else if (income <= 3750) {
    taxes = 37.5f + 0.03f * (income - 2250.0f);
  } else if (income <= 5250) {
    taxes = 82.5f + 0.04f * (income - 3750.0f);
  } else if (income <= 7000) {
    taxes = 142.5f + 0.05f * (income - 5250.0f);
  } else {
    taxes = 230.0f + 0.06f * (income - 7000.0f);
  }

  printf("Taxes due: $%.2f\n", taxes);
  
  return 0;
}
