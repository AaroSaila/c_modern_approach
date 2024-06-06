#include <stdio.h>

int main() {
  float loan_amount;
  float interest_rate;
  float monthly_payment;
  int payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("How many payments are made: ");
  scanf("%d", &payments);
  
  interest_rate = interest_rate / 100.0f / 12.0f;
  
  for (int i = 1; i <= payments; i++) {
    loan_amount += loan_amount * interest_rate;
    loan_amount -= monthly_payment;
    printf("Balance after payment #%d: %.2f\n", i, loan_amount);
  }

  return 0;
}
