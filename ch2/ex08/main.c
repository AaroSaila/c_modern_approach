/*
   This program asks the user for loan information
   and displays balances after three payments.
*/

#include <stdio.h>

int main() {
  float loan_amount;
  float interest_rate;
  float monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  
  interest_rate = interest_rate / 100.0f / 12.0f;
  double balances[3];
  
  for (int i = 0; i < 3; i++) {
    loan_amount += loan_amount * interest_rate;
    loan_amount -= monthly_payment;
    balances[i] = loan_amount;
  }

  printf("Balance remaining after first payment: $%.2f\n", balances[0]);
  printf("Balance remaining after second payment: $%.2f\n", balances[1]);
  printf("Balance remaining after third payment: $%.2f\n", balances[2]);

  return 0;
}
